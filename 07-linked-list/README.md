# 07 - Linked List

A singly linked list built entirely from raw `Node` pointers (no
`std::list`), covering the operations you'd implement in a data structures
course or interview.

## Files

| File | Description |
|---|---|
| `linked_list.cpp` | `LinkedList` class with insertion, deletion, search, and reversal. |

## Concepts covered

- Manual node management with `new`/`delete` (and a `clear()` destructor to avoid leaks)
- **Insertion**: `pushFront` (O(1)), `pushBack` (O(n)), `insertAfter` (O(n))
- **Deletion**: `remove(value)` handling head, middle, and tail cases
- **Search**: linear traversal, O(n)
- **Reversal**: iterative in-place pointer reversal, O(n) time, O(1) space
- RAII: destructor frees all nodes automatically when the list goes out of scope

## How to build and run

```bash
g++ -std=c++17 -Wall -o linked_list linked_list.cpp
./linked_list
```

## Expected output (abridged)

```
After pushBack 10, 20, 30: [ 10 20 30 ] (head -> ... -> nullptr)
After pushFront 5:         [ 5 10 20 30 ] (head -> ... -> nullptr)
After insertAfter(20, 25): [ 5 10 20 25 30 ] (head -> ... -> nullptr)
After remove(10):          [ 5 20 25 30 ] (head -> ... -> nullptr)
Search 25: Found
Search 99: Not Found
After reverse():           [ 30 25 20 5 ] (head -> ... -> nullptr)
```
