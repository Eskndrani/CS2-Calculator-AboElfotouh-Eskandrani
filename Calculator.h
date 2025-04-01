#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

class Calculator
{
public:
    double add(double a, double b);

    double multiply(double a, double b);

    long long LCM(long long a, long long b);

    double subtract(double, double);

    double divide(double, double);

    long long factorial(long long);

    long long GCD(long long, long long);

    long long Random(long long, long long);
};

#endif // CALCULATOR_H_INCLUDED
