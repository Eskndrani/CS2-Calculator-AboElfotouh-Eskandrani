#include "Calculator.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <cctype>
#include <stdexcept>
#include <cmath>
using namespace std;

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

long long Calculator::LCM(long long a, long long b) {
    return (a * b) / GCD(a, b);
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

long long Calculator::factorial(long long num) {
    long long result = 1;
    for (; num > 1; num--) {
        result *= num;
    }
    return result;
}

long long Calculator::GCD(long long a, long long b) {
    while (b != 0) {
        long long temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

long long Calculator::Random(long long a, long long b) {
    if (a > b) {
        cerr << "Error: Invalid range for random number!" << endl;
        return a;
    }
    return rand() % (b - a + 1) + a;
}


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

double applyOp(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0) {
                cerr << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
    }
    return 0;
}

double Calculator::evaluateExpression(const string &expression) {
    stack<double> values;
    stack<char> ops;
    int i = 0;
    while (i < expression.length()) {
        if (isspace(expression[i])) {
            i++;
            continue;
        }
        if (isdigit(expression[i]) || expression[i] == '.') {
            string val;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                val.push_back(expression[i]);
                i++;
            }
            values.push(stod(val));
        }
        else if (expression[i] == '(') {
            ops.push(expression[i]);
            i++;
        }
        else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double val2 = values.top();
                values.pop();
                double val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            if (!ops.empty()) ops.pop();
            i++;
        }
        else if (isOperator(expression[i])) {
            while (!ops.empty() && isOperator(ops.top()) &&
                   precedence(ops.top()) >= precedence(expression[i])) {
                double val2 = values.top();
                values.pop();
                double val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(expression[i]);
            i++;
        }
        else {
            cerr << "Error: Invalid character encountered: " << expression[i] << endl;
            i++;
        }
    }
    while (!ops.empty()) {
        double val2 = values.top();
        values.pop();
        double val1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOp(val1, val2, op));
    }
    return values.top();
}
