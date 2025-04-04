#include "Calculator.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Calculator calc;
    double num1, num2;
    int int1, int2;
    int choice;

    do {
        cout << "\nWelcome to the Advanced Calculator!" << endl;
        cout << "Please select an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Multiplication" << endl;
        cout << "3. Subtraction" << endl;
        cout << "4. Division" << endl;
        cout << "5. Factorial" << endl;
        cout << "6. GCD" << endl;
        cout << "7. LCM" << endl;
        cout << "8. Random Number Generation" << endl;
        cout << "9. Exit" << endl;
        cout << "10. Evaluate Mathematical Expression" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << calc.divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            case 5:
                cout << "Enter an integer: ";
                cin >> int1;
                if (int1 >= 0)
                    cout << "Factorial of " << int1 << " is: " << calc.factorial(int1) << endl;
                else
                    cout << "Error: Factorial of negative numbers is not defined." << endl;
                break;
            case 6:
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                cout << "GCD of " << int1 << " and " << int2 << " is: " << calc.GCD(int1, int2) << endl;
                break;
            case 7:
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                cout << "LCM of " << int1 << " and " << int2 << " is: " << calc.LCM(int1, int2) << endl;
                break;
            case 8:
                cout << "Enter the range (min max): ";
                cin >> int1 >> int2;
                cout << "Random number between " << int1 << " and " << int2 << " is: " << calc.Random(int1, int2) << endl;
                break;
            case 10: {
                cout << "Enter a mathematical expression (e.g., 3 + 4 * (2 - 1) / 5): ";
                string expr;
                getline(cin, expr);
                if(expr.empty()) {
                    getline(cin, expr);
                }
                cout << "Result: " << calc.evaluateExpression(expr) << endl;
                break;
            }
            case 9:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 9);

    return 0;
}
