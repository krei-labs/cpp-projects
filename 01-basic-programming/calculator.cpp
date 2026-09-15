// calculator.cpp
// Demonstrates: variables, arithmetic operators, switch statements,
// functions, and basic input validation.

#include <iostream>

double add(double a, double b)      { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error: division by zero!\n";
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    char op;

    std::cout << "=== Simple Calculator ===\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result = 0;
    bool valid = true;

    switch (op) {
        case '+': result = add(num1, num2); break;
        case '-': result = subtract(num1, num2); break;
        case '*': result = multiply(num1, num2); break;
        case '/': result = divide(num1, num2); break;
        default:
            std::cout << "Invalid operator!\n";
            valid = false;
    }

    if (valid) {
        std::cout << num1 << " " << op << " " << num2 << " = " << result << "\n";
    }

    return 0;
}
