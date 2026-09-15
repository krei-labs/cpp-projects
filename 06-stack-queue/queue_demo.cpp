// queue_demo.cpp
// A Queue (FIFO) implemented from scratch using a circular array.

#include <iostream>
#include <stdexcept>

class Queue {
private:
    int* data;
    int capacity;
    int frontIdx;
    int count;

    void resize() {
        int newCapacity = capacity * 2;
        int* newData = new int[newCapacity];
        for (int i = 0; i < count; ++i) {
            newData[i] = data[(frontIdx + i) % capacity];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
        frontIdx = 0;
    }

public:
    explicit Queue(int initialCapacity = 4)
        : data(new int[initialCapacity]), capacity(initialCapacity), frontIdx(0), count(0) {}

    ~Queue() { delete[] data; }

    void enqueue(int value) {
        if (count == capacity) resize();
        int backIdx = (frontIdx + count) % capacity;
        data[backIdx] = value;
        ++count;
    }

    int dequeue() {
        if (isEmpty()) throw std::runtime_error("Queue underflow: dequeue() on empty queue");
        int value = data[frontIdx];
        frontIdx = (frontIdx + 1) % capacity;
        --count;
        return value;
    }

    int front() const {
        if (isEmpty()) throw std::runtime_error("Queue is empty: front() failed");
        return data[frontIdx];
    }

    bool isEmpty() const { return count == 0; }
    int size() const { return count; }
};

int main() {
    std::cout << "=== Queue Demo (FIFO) ===\n";
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    std::cout << "Enqueued: 1, 2, 3\n";
    std::cout << "Front element: " << q.front() << "\n";

    std::cout << "Dequeued: " << q.dequeue() << "\n";
    std::cout << "Dequeued: " << q.dequeue() << "\n";

    q.enqueue(4);
    q.enqueue(5);
    std::cout << "Enqueued: 4, 5\n";

    std::cout << "Remaining elements (size=" << q.size() << "): ";
    while (!q.isEmpty()) {
        std::cout << q.dequeue() << " ";
    }
    std::cout << "\n";

    return 0;
}
