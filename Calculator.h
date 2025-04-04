#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator {
public:
    double add(double a, double b);

    double multiply(double a, double b);

    double subtract(double a, double b);

    double divide(double a, double b);

    long long factorial(long long num);

    long long GCD(long long a, long long b);

    long long LCM(long long a, long long b);

    long long Random(long long a, long long b);
    
    double evaluateExpression(const std::string &expression);
};

#endif // CALCULATOR_H
