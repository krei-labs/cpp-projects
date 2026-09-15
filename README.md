<h1 align="center">C++ Projects Showcase</h1>

<p align="center">
  A structured collection of standalone C++ mini-projects, organized by topic — from basic syntax through data structures and algorithms — each one self-contained, documented, and ready to compile.
</p>

<p align="center">
  <img alt="C++" src="https://img.shields.io/badge/C%2B%2B-17-blue?logo=cplusplus&logoColor=white">
  <img alt="Build" src="https://img.shields.io/badge/Build-g%2B%2B%20%7C%20clang%2B%2B-informational?logo=gnu&logoColor=white">
  <img alt="Platform" src="https://img.shields.io/badge/Platform-Linux%20%7C%20Windows%20%7C%20macOS-lightgrey">
  <img alt="Projects" src="https://img.shields.io/badge/Projects-10-success">
  <img alt="License" src="https://img.shields.io/badge/License-Personal%20Project-lightgrey">
</p>

---

This repository is a personal reference/learning collection: seven topic folders, each covering one C++ fundamental in isolation with working, compiled-and-tested code and its own README. It's meant to be read top to bottom as a mini-curriculum, or dipped into folder-by-folder as a quick refresher on a specific concept.

> Looking for these same concepts combined into **one cohesive application** instead of separate demos? See my [Library Management System](https://github.com/krei-labs) project, which wires OOP, a linked list, a stack, a queue, sorting/searching, file persistence, and authentication together into a single working program.

---

## 📑 Table of Contents

- [Repository Structure](#-repository-structure)
- [Concepts Demonstrated](#-concepts-demonstrated)
- [Requirements](#-requirements)
- [Build & Run](#-build--run)
- [Suggested Learning Order](#-suggested-learning-order)
- [Learning Context](#-learning-context)
- [Future Improvements](#-future-improvements)
- [License](#-license)
- [Author](#-author)

---

## 📂 Repository Structure

```text
cpp-projects/
│
├── 01-basic-programming/        Fundamentals: I/O, variables, control flow
│   ├── hello_world.cpp
│   ├── calculator.cpp
│   ├── temperature_converter.cpp
│   └── README.md
│
├── 02-oop/                      Classes, inheritance, polymorphism, abstraction
│   ├── oop_demo.cpp
│   └── README.md
│
├── 03-data-structures/          Arrays, structs, 2D arrays
│   ├── arrays_structs.cpp
│   └── README.md
│
├── 04-algorithms/                Sorting and searching algorithms
│   ├── sorting_searching.cpp
│   └── README.md
│
├── 05-file-handling/             Reading/writing files with <fstream>
│   ├── file_io.cpp
│   └── README.md
│
├── 06-stack-queue/               Stack and Queue implemented from scratch
│   ├── stack_demo.cpp
│   ├── queue_demo.cpp
│   └── README.md
│
├── 07-linked-list/               Singly linked list implemented from scratch
│   ├── linked_list.cpp
│   └── README.md
│
└── README.md                     You are here
```

Every subfolder is self-contained — no cross-folder includes or shared headers — so any single folder can be copied out and used on its own.

---

## 🧩 Concepts Demonstrated

| Folder | Concept | Key File(s) | Highlights |
|---|---|---|---|
| `01-basic-programming` | I/O, control flow, functions | `hello_world.cpp`, `calculator.cpp`, `temperature_converter.cpp` | `std::cin`/`getline`, `switch`, `do-while`, basic input validation |
| `02-oop` | Encapsulation, inheritance, polymorphism, abstraction | `oop_demo.cpp` | Abstract `Animal` base class, `Dog`/`Cat`/`Bird` subclasses, `std::unique_ptr` + dynamic dispatch |
| `03-data-structures` | Arrays & structs | `arrays_structs.cpp` | 1D/2D arrays, `struct` records, array of structs, formatted table output |
| `04-algorithms` | Sorting & searching | `sorting_searching.cpp` | Bubble sort, selection sort, linear search, binary search — with a complexity comparison table |
| `05-file-handling` | File I/O | `file_io.cpp` | `std::ofstream`/`ifstream`, write/append/read, error checking |
| `06-stack-queue` | Stack (LIFO) & Queue (FIFO) | `stack_demo.cpp`, `queue_demo.cpp` | Array-based stack with a balanced-parentheses checker; circular-buffer queue |
| `07-linked-list` | Singly linked list | `linked_list.cpp` | Manual node management, insert/delete/search/reverse, RAII cleanup |

---

## ✅ Requirements

- A C++ compiler supporting **C++17** (`g++`, `clang++`, or Embarcadero's Clang-enhanced `bcc32c`/`bcc64`)
- No external libraries — everything uses only the C++ Standard Library

---

## 🚀 Build & Run

Every project compiles the same way — there's no shared Makefile, since each file is meant to be standalone:

```bash
g++ -std=c++17 -Wall -o program source_file.cpp
./program
```

Concretely, for example:

```bash
cd 02-oop
g++ -std=c++17 -Wall -o oop_demo oop_demo.cpp
./oop_demo
```

Each subfolder's own `README.md` gives the exact filenames, expected output, and any notes specific to that project.

---

## 📈 Suggested Learning Order

1. **`01-basic-programming`** — get comfortable with syntax, I/O, and control flow
2. **`02-oop`** — learn how C++ structures larger programs around classes
3. **`03-data-structures`** — understand how data is laid out in memory
4. **`04-algorithms`** — learn to process that data efficiently
5. **`05-file-handling`** — persist data outside the running program
6. **`06-stack-queue`** — build classic linear data structures manually
7. **`07-linked-list`** — understand pointer-based dynamic structures

---

## 🎓 Learning Context

This collection was built as a personal reference while working through core C++ and data-structures fundamentals — one concept per folder, kept deliberately small and dependency-free so each idea is easy to isolate, read, and re-run without wading through unrelated code.

---

## 📈 Future Improvements

- Add a shared top-level `Makefile`/`CMakeLists.txt` to build every project in one pass
- Add a recursion & pointers folder
- Add a templates/generics folder
- Add unit tests (e.g. with Catch2) for the algorithm and data-structure implementations
- Add a trees/graphs folder as a natural follow-on to `07-linked-list`

---

## 📄 License

This is a personal learning project. Free to use, copy, or adapt for your own learning — attribution appreciated but not required.

---

## 👤 Author

**Christian G. Maranan**
Computer Engineering Student — Major in Machine Learning
at Tanauan City College

- **GitHub:** [@krei-labs](https://github.com/krei-labs)
- **Instagram:** [@krei_in](https://instagram.com/krei_in)
- **Email:** [christianmaranan0303@gmail.com](mailto:christianmaranan0303@gmail.com)

---

<p align="center"><strong>Build. Learn. Experiment.</strong> — kréi / Krei Labs</p>
