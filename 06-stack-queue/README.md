# 06 - Stack & Queue

Both structures are built from scratch (no `std::stack`/`std::queue`) using
a raw dynamic array, so the underlying mechanics are visible.

## Files

| File | Description |
|---|---|
| `stack_demo.cpp` | Array-based `Stack` class (LIFO) + a balanced-parentheses checker built on top of it. |
| `queue_demo.cpp` | Circular-array-based `Queue` class (FIFO). |

## Concepts covered

- **Stack (LIFO)** – `push`, `pop`, `peek`, dynamic resizing (doubling) when full, exceptions on underflow.
- **Queue (FIFO)** – `enqueue`, `dequeue`, `front`, implemented as a **circular buffer** so dequeuing doesn't require shifting all elements.
- Real-world application: using a stack to validate balanced `()`, `[]`, `{}` in an expression.
- Custom exception handling with `std::runtime_error`.

## How to build and run

```bash
g++ -std=c++17 -Wall -o stack_demo stack_demo.cpp
./stack_demo

g++ -std=c++17 -Wall -o queue_demo queue_demo.cpp
./queue_demo
```
