// stack_demo.cpp
// A Stack (LIFO) implemented from scratch using a dynamic array,
// plus a demo of matching parentheses using the stack.

#include <iostream>
#include <stdexcept>
#include <string>

class Stack {
private:
    int* data;
    int capacity;
    int topIndex;

    void resize() {
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i <= topIndex; ++i) newData[i] = data[i];
        delete[] data;
        data = newData;
    }

public:
    explicit Stack(int initialCapacity = 4)
        : data(new int[initialCapacity]), capacity(initialCapacity), topIndex(-1) {}

    ~Stack() { delete[] data; }

    void push(int value) {
        if (topIndex + 1 == capacity) resize();
        data[++topIndex] = value;
    }

    int pop() {
        if (isEmpty()) throw std::runtime_error("Stack underflow: pop() on empty stack");
        return data[topIndex--];
    }

    int peek() const {
        if (isEmpty()) throw std::runtime_error("Stack is empty: peek() failed");
        return data[topIndex];
    }

    bool isEmpty() const { return topIndex == -1; }
    int size() const { return topIndex + 1; }
};

// Practical use case: checking balanced parentheses using a character stack
bool isBalanced(const std::string& expr) {
    std::string stack;
    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push_back(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (stack.empty()) return false;
            char last = stack.back();
            stack.pop_back();
            if ((c == ')' && last != '(') ||
                (c == ']' && last != '[') ||
                (c == '}' && last != '{')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    std::cout << "=== Stack Demo (LIFO) ===\n";
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << "Pushed: 10, 20, 30\n";
    std::cout << "Top element: " << s.peek() << "\n";
    std::cout << "Popped: " << s.pop() << "\n";
    std::cout << "Popped: " << s.pop() << "\n";
    std::cout << "Size after pops: " << s.size() << "\n";

    std::cout << "\n=== Practical Use: Balanced Parentheses ===\n";
    std::string tests[] = {"(a+b)*(c-d)", "([{}])", "(a+b]", "((("};
    for (const auto& t : tests) {
        std::cout << t << " -> " << (isBalanced(t) ? "Balanced" : "Not Balanced") << "\n";
    }

    return 0;
}
