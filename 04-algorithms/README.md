# 04 - Algorithms

Classic sorting and searching algorithms, implemented from scratch on
`std::vector<int>`.

## Files

| File | Description |
|---|---|
| `sorting_searching.cpp` | Bubble Sort, Selection Sort, Linear Search, Binary Search. |

## Concepts covered

- **Bubble Sort** – O(n²), repeatedly swaps adjacent out-of-order elements; includes an early-exit optimization when no swaps occur.
- **Selection Sort** – O(n²), repeatedly selects the minimum remaining element.
- **Linear Search** – O(n), scans every element; works on unsorted data.
- **Binary Search** – O(log n), requires a sorted array; repeatedly halves the search range.

## How to build and run

```bash
g++ -std=c++17 -Wall -o sorting_searching sorting_searching.cpp
./sorting_searching
```

## Complexity summary

| Algorithm | Best | Average | Worst | Space |
|---|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Linear Search | O(1) | O(n) | O(n) | O(1) |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) |
