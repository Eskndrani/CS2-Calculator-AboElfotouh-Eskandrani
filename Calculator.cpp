#include <cstdlib>
#include <iostream>
#include "Calculator.h"
using namespace std;

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::multiply(double a, double b)
{
    return a * b;
}

long long Calculator::LCM(long long a, long long b)
{
    long long maxi = (a > b) ? a : b;

    do
    {
        if (maxi % n1 == 0 && maxi % n2 == 0)
        {
            return maxi;
        }
        else
            maxi++;
    }
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
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
        std::cerr << "Error: Invalid range for random number!" << std::endl;
        return a;
    }
    return rand() % (b - a + 1) + a;
}
