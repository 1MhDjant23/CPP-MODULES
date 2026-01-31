# 42 CPP Modules

Welcome to my **42 C++ Modules** repository. This collection represents a comprehensive journey through C++ programming, starting from the absolute basics of Object-Oriented Programming (OOP) to advanced Standard Template Library (STL) usage and templating.

The curriculum is designed to facilitate the transition from C to C++, emphasizing the "C++ way" of solving problems—focusing on robustness, reusability, and strict type safety.

## 📂 Repository Structure

The project is organized into two main levels of complexity:

- **LEVEL 1**: Foundational OOP concepts (Modules 00 - 04).
- **LEVEL 2**: Advanced C++ features (Modules 05 - 09).

---

## 🏗️ LEVEL 1: Foundations of OOP

### [CPP Module 00: Basics & Namespaces](./LEVEL-1/CPP-MODULE-00)
*Introduction to C++ syntax and class structure.*
- **Key Concepts**: Namespaces, Classes, Member Functions, stdin/stdout/streams, Initialization Lists, `static` members.
- **Focus**: Moving away from `printf` to `std::cout`, understanding the "Orthodox Canonical Form" for classes.

### [CPP Module 01: Memory Allocation & References](./LEVEL-1/CPP-MODULE-01)
*Memory management and pointer manipulation.*
- **Key Concepts**: `new`/`delete` vs `malloc`/`free`, C++ References vs Pointers, File I/O (`std::ifstream`/`std::ofstream`), Switch statements.
- **Focus**: learning strictly strictly typed memory allocation and preventing memory leaks.

### [CPP Module 02: Ad-hoc Polymorphism](./LEVEL-1/CPP-MODULE-02)
*Operator overloading and number representation.*
- **Key Concepts**: Operator Overloading, Ad-hoc Polymorphism, Fixed-point numbers definition and implementation.
- **Focus**: Making user-defined classes behave naturally like built-in types.

### [CPP Module 03: Inheritance](./LEVEL-1/CPP-MODULE-03)
*Building relationships between classes.*
- **Key Concepts**: Class Inheritance (`public`, `protected`, `private` paths), Diamond Problem, Virtual Inheritance (conceptual).
- **Focus**: Reusing code and creating hierarchical class structures (e.g., `ClapTrap` -> `ScavTrap` -> `FragTrap`).

### [CPP Module 04: Subtype Polymorphism](./LEVEL-1/CPP-MODULE-04)
*Abstract classes and interfaces.*
- **Key Concepts**: Virtual functions, Pure virtual functions, Abstract Classes, Interfaces, Destructors in polymorphism, Deep copy vs Shallow copy.
- **Focus**: Designing flexible systems where derived objects can be treated as base objects.

---

## 🚀 LEVEL 2: Advanced C++ & STL

### [CPP Module 05: Exceptions](./LEVEL-2/CPP-MODULE-05)
*Robust error handling.*
- **Key Concepts**: `try`, `catch`, `throw`, Custom Exception Classes (`std::exception`), Stack Unwinding.
- **Focus**: Managing strict bureaucratic rules in text-based simulations without crashing the program.

### [CPP Module 06: Casts](./LEVEL-2/CPP-MODULE-06)
*Type conversion mastery.*
- **Key Concepts**: `static_cast`, `dynamic_cast`, `reinterpret_cast`, Serialization/Deserialization.
- **Focus**: Understanding the specific use-cases for each C++ casting operator and how strictly C++ treats types compared to C.

### [CPP Module 07: Templates](./LEVEL-2/CPP-MODULE-07)
*Generic programming.*
- **Key Concepts**: Function Templates, Class Templates.
- **Focus**: Writing code that works with any data type (e.g., a generic `Array` class).

### [CPP Module 08: Templated Containers](./LEVEL-2/CPP-MODULE-08)
*Introduction to the Standard Template Library (STL).*
- **Key Concepts**: STL Containers (`std::vector`, `std::list`, `std::map`), Iterators, STL Algorithms (`std::for_each`, `std::find`, `std::binary_search`).
- **Focus**: Leveraging existing standardized tools to write efficient and clean code.

### [CPP Module 09: STL Mastery](./LEVEL-2/CPP-MODULE-09)
*Real-world algorithm implementation using STL.*
- **Key Concepts**: Advanced container usage (`std::deque`, `std::stack`), CSV parsing, Ford-Johnson algorithm (Merge-Insert Sort), Reverse Polish Notation (RPN).
- **Exercises**:
  - **Bitcoin Exchange**: Historical data validation and value calculation.
  - **RPN**: Calculating mathematical expressions.
  - **PmergeMe**: High-performance sorting of large datasets.

---

## 🛠️ Concepts Learned
*   **Object-Oriented Programming**: Encapsulation, Inheritance, Polymorphism.
*   **Memory Management**: RAII (Resource Acquisition Is Initialization), Smart Pointers (conceptual understanding), References.
*   **Generic Programming**: Templates and STL.
*   **Robustness**: Exception handling and const correctness.

## 📝 Usage
Each module directory contains its own Makefile. To run a specific exercise:
1.  Navigate to the exercise folder: `cd LEVEL-X/CPP-MODULE-Y/exZ`
2.  Compile the project: `make`
3.  Run the executable (usually named similarly to the exercise): `./program_name`

---
*Created by [MOHAMED AIT TAJANTE/mait-taj] as part of the 42 Curriculum.*
