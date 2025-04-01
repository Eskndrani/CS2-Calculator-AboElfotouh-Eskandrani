#include "Calculator.h"
#include <iostream>
using namespace std;

int main() {
    Calculator calc;

    cout << "Addition: " << calc.add(5.5, 4.5) << endl;
    cout << "Multiplication: " << calc.multiply(3, 7) << endl;
    cout << "Subtraction: " << calc.subtract(10, 3.5) << endl;
    cout << "Division: " << calc.divide(10, 2) << endl;
    cout << "Factorial of 5: " << calc.factorial(5) << endl;
    cout << "GCD of 24 and 18: " << calc.GCD(24, 18) << endl;
    cout << "LCM of 4 and 6: " << calc.LCM(4, 6) << endl;
    cout << "Random number between 1 and 10: " << calc.Random(1, 10) << endl;
    
    return 0;
}
