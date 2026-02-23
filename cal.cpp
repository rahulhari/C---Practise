#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;
    char continueChoice;
    
    do {
        cout << "\n=== Simple Calculator ===" << endl;
        cout << "Enter first number: ";
        
        if (!(cin >> num1)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Invalid input. Please enter an integer." << endl;
            continue;
        }
        
        cout << "Enter second number: ";
        if (!(cin >> num2)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Invalid input. Please enter an integer." << endl;
            continue;
        }
        
        cout << "Select operation (+, -, *, /): ";
        cin >> operation;
        
        switch (operation) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation. Please select +, -, *, or /." << endl;
        }
        
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueChoice;
        
    } while (continueChoice == 'y' || continueChoice == 'Y');
    
    cout << "Thank you for using the calculator!" << endl;
    return 0;
}