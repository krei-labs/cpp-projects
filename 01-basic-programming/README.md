# 01 - Basic Programming

Foundational C++ concepts: input/output, variables, operators, control flow
(if/switch), loops, and functions.

## Files

| File | Description |
|---|---|
| `hello_world.cpp` | Prints a greeting; reads user input with `std::getline`. |
| `calculator.cpp` | Performs +, -, *, / using a `switch` statement and helper functions. |
| `temperature_converter.cpp` | Menu-driven loop converting between Celsius, Fahrenheit, and Kelvin. |

## Concepts covered

- `std::cin` / `std::cout` / `std::getline`
- Variables and data types (`int`, `double`, `char`, `std::string`)
- `if`, `switch`, `do-while` loops
- Functions with return values
- Basic input validation (division by zero, invalid menu choice)
- Output formatting with `<iomanip>`

## How to build and run

```bash
g++ -std=c++17 -Wall -o hello_world hello_world.cpp
./hello_world

g++ -std=c++17 -Wall -o calculator calculator.cpp
./calculator

g++ -std=c++17 -Wall -o temp_converter temperature_converter.cpp
./temp_converter
```
