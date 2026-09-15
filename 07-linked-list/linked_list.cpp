// linked_list.cpp
// A singly linked list implemented from scratch, supporting insertion
// (front/back/at position), deletion, search, reversal, and traversal.

#include <iostream>

struct Node {
    int data;
    Node* next;
    explicit Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        clear();
    }

    void pushFront(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void pushBack(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next) curr = curr->next;
        curr->next = newNode;
    }

    // Insert `value` right after the first occurrence of `afterValue`
    bool insertAfter(int afterValue, int value) {
        Node* curr = head;
        while (curr && curr->data != afterValue) curr = curr->next;
        if (!curr) return false; // not found
        Node* newNode = new Node(value);
        newNode->next = curr->next;
        curr->next = newNode;
        return true;
    }

    bool remove(int value) {
        Node* curr = head;
        Node* prev = nullptr;
        while (curr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }
        if (!curr) return false; // not found
        if (!prev) head = curr->next;
        else prev->next = curr->next;
        delete curr;
        return true;
    }

    bool search(int value) const {
        Node* curr = head;
        while (curr) {
            if (curr->data == value) return true;
            curr = curr->next;
        }
        return false;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    void print() const {
        Node* curr = head;
        std::cout << "[ ";
        while (curr) {
            std::cout << curr->data << " ";
            curr = curr->next;
        }
        std::cout << "] (head -> ... -> nullptr)\n";
    }

    void clear() {
        Node* curr = head;
        while (curr) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
        head = nullptr;
    }
};

int main() {
    std::cout << "=== Singly Linked List Demo ===\n";
    LinkedList list;

    list.pushBack(10);
    list.pushBack(20);
    list.pushBack(30);
    std::cout << "After pushBack 10, 20, 30: ";
    list.print();

    list.pushFront(5);
    std::cout << "After pushFront 5:         ";
    list.print();

    list.insertAfter(20, 25);
    std::cout << "After insertAfter(20, 25): ";
    list.print();

    list.remove(10);
    std::cout << "After remove(10):          ";
    list.print();

    std::cout << "Search 25: " << (list.search(25) ? "Found" : "Not Found") << "\n";
    std::cout << "Search 99: " << (list.search(99) ? "Found" : "Not Found") << "\n";

    list.reverse();
    std::cout << "After reverse():           ";
    list.print();

    return 0;
}
