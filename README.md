# 42 Network: C++ Modules (CPP 00 - 09)

This repository contains my solutions for the **C++ Modules** curriculum at 42 Istanbul. The curriculum is designed to provide a deep, foundational understanding of **Object-Oriented Programming (OOP)** and low-level memory management using **C++98**, without relying on modern C++ abstractions.

Each module focuses on a specific pillar of software engineering, progressing from basic syntax to advanced Standard Template Library (STL) container optimizations and algorithm implementations.

---

## 🛠️ Technical Specifications & Rigorous Rules

* **Language Standard:** Strictly compiled using **C++98** (Orthodox Canonical Form required for most classes).
* **Compiler Flags:** `-Wall -Wextra -Werror` (Zero warnings or errors allowed).
* **Memory Management:** Handled manually without smart pointers. Tested extensively with `Valgrind` to ensure 0 memory leaks.
* **Architecture:** Adherence to robust class design, separation of interface (`.hpp`) and implementation (`.cpp`).

---

## 🚀 Module Overview

| Module | Core Competencies & Software Concepts | Key Projects / Implementations |
| :--- | :--- | :--- |
| **cpp00** | **Introduction to OOP: Class blueprints (Orthodox Canonical Form), basic I/O streams, and class state management.. | `megaphone`, `phonebook`, `account` |
| **cpp01** | **Memory Allocation & Pointers:** Stack vs. Heap allocation, references, pointers to members, and stream manipulation. | `zombie_horde`, `weapon_system`, `Harl_logger` |
| **cpp02** | **Ad-hoc Polymorphism & Fixed-Point:** Operator overloading, fixed-point number representation, and precision control. | `Fixed_point_arithmetic` |
| **cpp03** | **Inheritance & Hierarchy:** Base/Derived classes, constructors/destructors chaining, and resolving the Diamond Problem. | `ClapTrap`, `ScavTrap`, `FragTrap`, `DiamondTrap` |
| **cpp04** | **Subtype Polymorphism:** Virtual functions, abstract classes, pure virtual destructors, and deep vs. shallow copying. | `Polymorphism_Simulation` (Animal, Brain) |
| **cpp05** | **Exception Handling:** Robust error management using `try-catch` blocks, custom exceptions, and hierarchical form processing. | `Bureaucrat`, `Robotomy_Request`, `Intern` |
| **cpp06** | **Type Casting & RTTI:** C++ style type conversions (`scalar_cast`, `static_cast`, `dynamic_cast`, `reinterpret_cast`), serialization, and Runtime Type Identification. | `Scalar_Converter`, `Data_Serializer` |
| **cpp07** | **Templates:** Generic programming, function templates, class templates, and dynamic generic arrays. | `whatever_generic`, `array_template` |
| **cpp08** | **STL Containers & Iterators:** Working with Standard Template Library containers, algorithms (`easyfind`), and modifying container behaviors. | `Span_finder`, `MutantStack` (Iterable Stack) |
| **cpp09** | **Advanced STL & Algorithmic Optimization:** Data structures, tokenization, Reverse Polish Notation (RPN), and high-performance sorting. Features the **Ford-Johnson merge-insertion sort algorithm** using Jacobsthal numbers optimization for benchmark comparison. | `Bitcoin_Exchange`, `RPN_Calculator`, `PmergeMe` |

---

## ⚙️ How to Compile and Run

Every exercise is self-contained in its own directory and includes a rigorous `Makefile`. 

To compile and run a specific project (e.g., `PmergeMe` algorithm optimization inside `cpp09`):

```bash
# Navigate to the specific project directory
cd cpp09/ex02

# Compile the project with C++98 flags
make

# Run the executable with arguments
./PmergeMe 3 5 9 1 4 2

```
