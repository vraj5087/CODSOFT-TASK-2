#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero.";
            } else {
                result = num1 / num2;
                cout << "Result: " << result;
            }
            break;
        default:
            cout << "Invalid operation.";
    }

    return 0;
}

