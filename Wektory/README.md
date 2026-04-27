# C++ Dynamic Memory & Vector Operations Toolkit

A collection of academic C++ exercises focusing on manual memory management, pointer arithmetic, and custom data structures. This project demonstrates core low-level programming concepts without relying on the Standard Template Library (STL) containers like `std::vector`.

## 🚀 Key Features

### 1. Dynamic Contact Database
- **Implementation:** Custom structures (`Entry` and `Base`) to manage a contact list using raw pointers.
- **Manual Reallocation:** Includes logic to dynamically grow the database capacity by 10 elements whenever the limit is reached, ensuring efficient memory use.
- **Memory Safety:** Implements proper allocation with `new[]` and ensures no memory leaks by using `delete[]` at the end of the program lifecycle.
- **Pointer Operations:** Functions use pointers to pass data efficiently and manipulate the base state directly.

### 2. Linear Algebra Vector Operations
Mathematical operations performed on raw `double` arrays (acting as mathematical vectors):
- **Scalar (Dot) Product:** Calculation of the sum of products of corresponding elements.
- **Vector Addition:** A function that allocates a new array in memory, stores the sum of two vectors, and returns the pointer to the caller.
- **Const Correctness:** Use of `const` pointers to ensure data integrity during read-only operations, following professional C++ standards.

## 🛠 Concepts Applied

* **Manual Memory Management:** Explicit use of `new[]` and `delete[]` operators.
* **Heap vs. Stack:** Demonstrating the difference between static arrays (stack) and dynamic allocation (heap).
* **Namespaces:** Consistent use of `using namespace std;` for streamlined code.
* **Reallocation Logic:** Moving data between memory blocks during array resizing.
* **Pass-by-Pointer:** Efficiently handling structures and arrays in functions to avoid unnecessary data copying.

## 💻 Code Examples

### Vector Addition (Dynamic Allocation)
```cpp
double* add_vectors(const double* vector1, const double* vector2, int size) {
    double* new_vector = new double[size]; // Dynamic allocation on the heap
    for(int i = 0; i < size; i++) {
        new_vector[i] = vector1[i] + vector2[i];
    }
    return new_vector; // Caller is responsible for calling delete[]
}
```

### Scalar Product
```cpp
double scalar_product(const double* v1, const double* v2, int size) {
    double sum = 0.0;
    for(int i = 0; i < size; i++) {
        sum += v1[i] * v2[i];
    }
    return sum;
}
```

## 📋 Requirements
- **Language:** C++11 or higher
- **Compiler:** Any standard C++ compiler (GCC, Clang, MSVC)

## 📖 Lessons Learned
Through this project, I deepened my understanding of how C++ handles memory under the hood. Managing the lifecycle of objects manually is a crucial skill for performance-critical applications, embedded systems, and systems programming. Understanding pointers is the gateway to mastering C++.

---

# Hero Equipment System

A simple C++ program simulating a hero's inventory management system. This project demonstrates the practical application of dynamic containers to handle real-time gameplay events.

### Technologies Used:
* **C++11/17 Standard** – utilizing modern syntax for cleaner code.
* **STL Vector** – implementation of dynamic memory management for the item list.
* **Iterator Operations** – using `begin()` and offsets to manage specific item slots.

### Features:
* **Dynamic Inventory:** Adding items using `push_back`.
* **Gameplay Events:** Simulated item loss via `pop_back` (falling into a trap).
* **Precise Management:** Using `insert` and `erase` to handle specific inventory changes, like finding a potion or breaking a sword in combat.
* **Modern Iteration:** Displaying current status using range-based for loops.