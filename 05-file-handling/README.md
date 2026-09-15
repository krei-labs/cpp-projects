# 05 - File Handling

Demonstrates persisting and retrieving data from disk using `<fstream>`.

## Files

| File | Description |
|---|---|
| `file_io.cpp` | Writes records to a text file, appends a new record, then reads and prints all records. |

## Concepts covered

- `std::ofstream` for writing (default mode truncates the file)
- `std::ios::app` for appending without overwriting
- `std::ifstream` and `std::getline` for line-by-line reading
- Basic error checking (`if (!file)`) when a stream fails to open

## How to build and run

```bash
g++ -std=c++17 -Wall -o file_io file_io.cpp
./file_io
```

Running the program creates `records.txt` in the same directory. Each run
overwrites it first, then appends one line, then prints the full contents.
