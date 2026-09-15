// temperature_converter.cpp
// Demonstrates: loops, functions, formatted output, and menu-driven programs.

#include <iostream>
#include <iomanip>

double celsiusToFahrenheit(double c) { return (c * 9.0 / 5.0) + 32.0; }
double fahrenheitToCelsius(double f) { return (f - 32.0) * 5.0 / 9.0; }
double celsiusToKelvin(double c)     { return c + 273.15; }

int main() {
    int choice;
    double value;

    std::cout << std::fixed << std::setprecision(2);

    do {
        std::cout << "\n=== Temperature Converter ===\n";
        std::cout << "1. Celsius -> Fahrenheit\n";
        std::cout << "2. Fahrenheit -> Celsius\n";
        std::cout << "3. Celsius -> Kelvin\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> value;
                std::cout << value << " C = " << celsiusToFahrenheit(value) << " F\n";
                break;
            case 2:
                std::cout << "Enter temperature in Fahrenheit: ";
                std::cin >> value;
                std::cout << value << " F = " << fahrenheitToCelsius(value) << " C\n";
                break;
            case 3:
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> value;
                std::cout << value << " C = " << celsiusToKelvin(value) << " K\n";
                break;
            case 0:
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 0);

    return 0;
}
