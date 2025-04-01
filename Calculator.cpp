// Love with your heart, use your head for everything else.
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
