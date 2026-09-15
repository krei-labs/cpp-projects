// file_io.cpp
// Demonstrates: writing to a file, reading from a file, and appending,
// using <fstream>.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

const std::string FILENAME = "records.txt";

void writeRecords() {
    std::ofstream outFile(FILENAME); // truncates/creates the file
    if (!outFile) {
        std::cerr << "Error: could not open file for writing.\n";
        return;
    }

    outFile << "Alice,20,3.8\n";
    outFile << "Bob,22,3.5\n";
    outFile << "Carol,21,3.9\n";

    outFile.close();
    std::cout << "Wrote 3 records to " << FILENAME << "\n";
}

void appendRecord(const std::string& line) {
    std::ofstream outFile(FILENAME, std::ios::app); // append mode
    if (!outFile) {
        std::cerr << "Error: could not open file for appending.\n";
        return;
    }
    outFile << line << "\n";
    outFile.close();
    std::cout << "Appended: " << line << "\n";
}

void readRecords() {
    std::ifstream inFile(FILENAME);
    if (!inFile) {
        std::cerr << "Error: could not open file for reading.\n";
        return;
    }

    std::cout << "\n--- Contents of " << FILENAME << " ---\n";
    std::string line;
    int lineNum = 1;
    while (std::getline(inFile, line)) {
        std::cout << lineNum++ << ": " << line << "\n";
    }
    inFile.close();
}

int main() {
    std::cout << "=== File Handling Demo ===\n";

    writeRecords();
    appendRecord("Dave,23,3.2");
    readRecords();

    return 0;
}
