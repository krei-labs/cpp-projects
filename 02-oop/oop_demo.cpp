// oop_demo.cpp
// Demonstrates the four pillars of OOP in C++:
//   Encapsulation, Inheritance, Polymorphism, Abstraction.

#include <iostream>
#include <string>
#include <vector>
#include <memory>

// ---------- Abstraction + Encapsulation ----------
// Abstract base class defines a common interface (pure virtual function).
// Data members are private; access is controlled through public methods.
class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& n, int a) : name(n), age(a) {}
    virtual ~Animal() = default;

    std::string getName() const { return name; }
    int getAge() const { return age; }

    // Pure virtual function -> makes Animal an abstract class
    virtual void makeSound() const = 0;

    virtual void describe() const {
        std::cout << name << " (" << age << " yrs old): ";
        makeSound();
    }
};

// ---------- Inheritance ----------
class Dog : public Animal {
public:
    Dog(const std::string& n, int a) : Animal(n, a) {}

    // ---------- Polymorphism ----------
    // Overrides the base class behavior
    void makeSound() const override {
        std::cout << "Woof! Woof!\n";
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& n, int a) : Animal(n, a) {}

    void makeSound() const override {
        std::cout << "Meow!\n";
    }
};

class Bird : public Animal {
public:
    Bird(const std::string& n, int a) : Animal(n, a) {}

    void makeSound() const override {
        std::cout << "Tweet tweet!\n";
    }
};

int main() {
    std::cout << "=== OOP Demo: Animal Shelter ===\n\n";

    // Store different derived types via base class pointers -> polymorphism
    std::vector<std::unique_ptr<Animal>> shelter;
    shelter.push_back(std::make_unique<Dog>("Rex", 3));
    shelter.push_back(std::make_unique<Cat>("Whiskers", 2));
    shelter.push_back(std::make_unique<Bird>("Tweety", 1));

    for (const auto& animal : shelter) {
        animal->describe();  // calls the correct overridden makeSound() at runtime
    }

    return 0;
}
