// hello_world.cpp
// The simplest possible C++ program: prints a greeting and demonstrates
// basic variable declarations and console output.

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "=== Hello World Program ===\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        name = "World";
    }

    std::cout << "Hello, " << name << "! Welcome to C++.\n";
    return 0;
}
