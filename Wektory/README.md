# Vector_2.cpp
## Modern C++ Vector Operations (Refactored)

This project is a modernized version of a previous assignment ("Vector_1.cpp"). It refactors mathematical vector operations by migrating from raw, dynamically allocated arrays (`double*`) and manual memory management to the Standard Template Library (STL) `std::vector` container.

## 🔄 The Refactoring Process: What Changed?
In the previous iteration, vectors were represented as pointers to dynamically allocated memory. This required manual `new` and `delete[]` operations and passing the `size` of the array to every function. 

This upgraded version utilizes **Modern C++ paradigms**:
- **Zero Memory Leaks:** Complete removal of manual memory management. `std::vector` handles its own lifecycle.
- **No Size Parameters:** The `size` parameter was dropped entirely, as `std::vector` knows its own dimensions.
- **Performance Optimization:** Vectors are passed by reference (`&`) to prevent deep copying of large data structures.
- **Const Correctness:** Functions that only read data enforce read-only access using `const` references (e.g., `const std::vector<double>&`).

## 🛠️ Looping Strategies Demonstrated
A core requirement of this project was to implement different types of C++ loops depending on the specific function's needs:

1. **Range-based for loop (Read-Only):** Used in the `print_vector` function to cleanly iterate over elements without indices.
2. **Iterator-based loop with `auto`:** Used in `scalar_product`. Demonstrates explicit container traversal using `begin()`, `end()`, and pointer dereferencing (`*it`).
3. **Index-based for loop:** Used in `add_vectors` to safely read from two vectors simultaneously and append results to a new vector using `.push_back()`.
4. **Range-based for loop (Mutable):** Used in the `normalize` function. Modifies the vector in-place by capturing elements by standard reference (`double&`).

## 💻 Code Highlight: In-Place Normalization
This function demonstrates calculating the magnitude of a vector and modifying the original object directly without creating a copy.

```cpp
void normalize(std::vector<double>& vec) {
    double sum_of_squares = 0.0;
    
    // Read-only loop to calculate the sum of squares
    for(const double& val : vec) {
        sum_of_squares += val * val;
    }
    
    double length = sqrt(sum_of_squares);

    // Mutable loop to overwrite original values (In-Place modification)
    for(double& val : vec) {
        val = val / length;
    }
}
```

## 📋 Requirements
- **Language:** C++11 or higher (requires support for range-based for loops and the `auto` keyword).
- **Libraries:** `<iostream>`, `<vector>`, `<cmath>`

## 📖 Lessons Learned
Refactoring this code highlighted the massive advantages of Modern C++. By using STL containers and properly understanding references and iterators, the code became much shorter, significantly safer (no risk of memory leaks or dangling pointers), and more expressive.


---

# Vector_1.cpp
## C++ Dynamic Memory & Vector Operations Toolkit

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