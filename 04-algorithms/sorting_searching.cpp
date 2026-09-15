// sorting_searching.cpp
// Demonstrates: Bubble Sort, Selection Sort, Linear Search, Binary Search.

#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // already sorted, stop early
    }
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        std::swap(arr[i], arr[minIdx]);
    }
}

// Returns index of target, or -1 if not found. O(n)
int linearSearch(const std::vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) return static_cast<int>(i);
    }
    return -1;
}

// Requires a sorted array. O(log n)
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0, high = static_cast<int>(arr.size()) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void printVector(const std::vector<int>& v) {
    std::cout << "[ ";
    for (int x : v) std::cout << x << " ";
    std::cout << "]\n";
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11, 90, 5};

    std::cout << "=== Sorting Algorithms ===\n";
    std::cout << "Original: ";
    printVector(data);

    std::vector<int> bubbleData = data;
    bubbleSort(bubbleData);
    std::cout << "Bubble Sort:    ";
    printVector(bubbleData);

    std::vector<int> selectionData = data;
    selectionSort(selectionData);
    std::cout << "Selection Sort: ";
    printVector(selectionData);

    std::cout << "\n=== Searching Algorithms ===\n";
    int target = 22;

    int linIdx = linearSearch(data, target);
    std::cout << "Linear Search for " << target << " (unsorted array): "
              << (linIdx != -1 ? "found at index " + std::to_string(linIdx) : "not found") << "\n";

    // Binary search needs a sorted array
    int binIdx = binarySearch(bubbleData, target);
    std::cout << "Binary Search for " << target << " (sorted array): "
              << (binIdx != -1 ? "found at index " + std::to_string(binIdx) : "not found") << "\n";

    return 0;
}
