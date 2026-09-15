// arrays_structs.cpp
// Demonstrates: 1D arrays, 2D arrays, structs, and arrays of structs.

#include <iostream>
#include <iomanip>
#include <string>

struct Student {
    std::string name;
    int age;
    double gpa;
};

void print1DArray(const int arr[], int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i < size - 1 ? ", " : "\n");
    }
}

int arraySum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) sum += arr[i];
    return sum;
}

void print2DArray(const int matrix[][3], int rows) {
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < 3; ++c) {
            std::cout << std::setw(4) << matrix[r][c];
        }
        std::cout << "\n";
    }
}

int main() {
    std::cout << "=== 1D Array Demo ===\n";
    int numbers[5] = {10, 20, 30, 40, 50};
    print1DArray(numbers, 5);
    std::cout << "Sum = " << arraySum(numbers, 5) << "\n\n";

    std::cout << "=== 2D Array Demo (3x3 matrix) ===\n";
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    print2DArray(matrix, 3);

    std::cout << "\n=== Struct Demo ===\n";
    Student students[3] = {
        {"Alice", 20, 3.8},
        {"Bob", 22, 3.5},
        {"Carol", 21, 3.9}
    };

    std::cout << std::left << std::setw(10) << "Name"
              << std::setw(6) << "Age"
              << "GPA\n";
    std::cout << "-----------------------\n";
    for (const auto& s : students) {
        std::cout << std::left << std::setw(10) << s.name
                  << std::setw(6) << s.age
                  << std::fixed << std::setprecision(2) << s.gpa << "\n";
    }

    return 0;
}
