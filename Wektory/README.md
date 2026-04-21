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