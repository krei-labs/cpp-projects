# 02 - Object-Oriented Programming

An "Animal Shelter" example that demonstrates the four pillars of OOP
in a single, runnable program.

## Files

| File | Description |
|---|---|
| `oop_demo.cpp` | Abstract `Animal` base class with `Dog`, `Cat`, and `Bird` subclasses. |

## Concepts covered

- **Encapsulation** – `name` and `age` are `protected`, accessed via getters.
- **Abstraction** – `Animal` is an abstract class (pure virtual `makeSound()`), so it can't be instantiated directly.
- **Inheritance** – `Dog`, `Cat`, `Bird` all inherit common behavior/state from `Animal`.
- **Polymorphism** – a `std::vector<std::unique_ptr<Animal>>` calls the correct overridden `makeSound()` for each concrete type at runtime (dynamic dispatch via `virtual`).
- Smart pointers (`std::unique_ptr`) for safe, automatic memory management.

## How to build and run

```bash
g++ -std=c++17 -Wall -o oop_demo oop_demo.cpp
./oop_demo
```

## Expected output

```
=== OOP Demo: Animal Shelter ===

Rex (3 yrs old): Woof! Woof!
Whiskers (2 yrs old): Meow!
Tweety (1 yrs old): Tweet tweet!
```
