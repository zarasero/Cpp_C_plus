# Cpp_C_plus

A comprehensive collection of C++ exercises spanning from **Module 00** to **Module 09**, progressively building knowledge from the basics of C++ to advanced concepts including object-oriented programming, templates, STL containers, and algorithmic problem-solving.

This repository follows the curriculum structure of **School 42**, with each module focusing on specific C++ topics and gradually increasing in complexity.

---

## Table of Contents

- [Project Structure](#project-structure)
- [Modules Overview](#modules-overview)
  - [Module 00: Namespaces, Classes, and I/O](#module-00-namespaces-classes-and-io)
  - [Module 01: Memory Allocation, References, and Pointers](#module-01-memory-allocation-references-and-pointers)
  - [Module 02: Orthodox Canonical Class Form](#module-02-orthodox-canonical-class-form)
  - [Module 03: Inheritance](#module-03-inheritance)
  - [Module 04: Polymorphism, Abstract Classes, and Interfaces](#module-04-polymorphism-abstract-classes-and-interfaces)
  - [Module 05: Exceptions and Bureaucracy](#module-05-exceptions-and-bureaucracy)
  - [Module 06: Type Casting and Serialization](#module-06-type-casting-and-serialization)
  - [Module 07: C++ Templates](#module-07-c-templates)
  - [Module 08: STL Containers and Iterators](#module-08-stl-containers-and-iterators)
  - [Module 09: Algorithms and Performance](#module-09-algorithms-and-performance)
- [Compilation and Usage](#compilation-and-usage)
- [Requirements](#requirements)

---

## Project Structure

```
Cpp_C_plus/
├── 00/                        # Module 00: Basics
│   ├── ex00/                  # Megaphone
│   └── ex01/                  # Phonebook
├── 01/                        # Module 01: Memory & References
│   ├── ex00/                  # Zombie (stack vs heap)
│   ├── ex01/                  # Zombie Horde
│   ├── ex02/                  # Brain (references vs pointers)
│   ├── ex03/                  # HumanA & HumanB (Weapon)
│   ├── ex04/                  # File manipulation (sed-like)
│   ├── ex05/                  # Harl (member function pointers)
│   └── ex06/                  # Harl filter
├── 02/                        # Module 02: Fixed-Point Numbers
│   ├── ex00/                  # Fixed class (canonical form)
│   ├── ex01/                  # Fixed with constructors
│   └── ex02/                  # Fixed with operators
├── 03/                        # Module 03: Inheritance
│   ├── ex00/                  # ClapTrap base class
│   ├── ex01/                  # ScavTrap (inheritance)
│   ├── ex02/                  # FragTrap (inheritance)
│   └── ex03/                  # DiamondTrap (multiple inheritance)
├── 04/                        # Module 04: Polymorphism
│   ├── ex00/                  # Animal, Dog, Cat (polymorphism)
│   ├── ex01/                  # Brain (deep vs shallow copy)
│   ├── ex02/                  # Abstract Animal class
│   └── ex03/                  # Materia (interfaces)
├── 05/                        # Module 05: Exceptions
│   ├── ex00/                  # Bureaucrat class
│   ├── ex01/                  # Form class
│   ├── ex02/                  # Abstract Form + concrete forms
│   └── ex03/                  # Intern class
├── 06/                        # Module 06: Type Casting
│   ├── ex00/                  # ScalarConverter
│   ├── ex01/                  # Serializer
│   └── ex02/                  # Base identification (RTTI)
├── 07/                        # Module 07: Templates
│   ├── ex00/                  # swap, min, max templates
│   ├── ex01/                  # iter function template
│   └── ex02/                  # Array class template
├── 08/                        # Module 08: STL
│   ├── ex00/                  # easyfind template function
│   ├── ex01/                  # Span class
│   └── ex02/                  # MutantStack (iterable stack)
└── 09/                        # Module 09: Algorithms
    ├── ex00/                  # BitcoinExchange
    ├── ex01/                  # RPN Calculator
    └── ex02/                  # PmergeMe (Ford-Johnson)
```

---

## Modules Overview

### Module 00: Namespaces, Classes, and I/O

**Topics:** Basic C++ syntax, namespaces, classes, member functions, std::cout, initialization lists, static/const, and basic file structure with Makefiles.

| Exercise | Description |
|----------|-------------|
| **ex00 — Megaphone** | A simple program that converts command-line arguments to uppercase and prints them. If no arguments are provided, it prints `* LOUD AND UNBEARABLE FEEDBACK NOISE *`. Introduces `std::cout`, `toupper()`, and basic C++ I/O. |
| **ex01 — Phonebook** | A classic phonebook application that stores up to 8 contacts. Each contact has fields: first name, last name, nickname, phone number, and darkest secret. Features include `ADD`, `SEARCH`, and `EXIT` commands, formatted column output with truncation, and field-by-field input. Builds understanding of class design, encapsulation, and formatted I/O with `std::setw`. |

### Module 01: Memory Allocation, References, and Pointers

**Topics:** Dynamic memory allocation (`new`/`delete`), references vs pointers, member function pointers, file streams, and string manipulation.

| Exercise | Description |
|----------|-------------|
| **ex00 — Zombie** | Creates a `Zombie` class that announces itself. Demonstrates the difference between stack (`randomChump()`) and heap (`newZombie()`) allocation. |
| **ex01 — Zombie Horde** | Allocates an array of `Zombie` objects on the heap using `new[]`. Tests understanding of dynamic arrays and proper deallocation with `delete[]`. |
| **ex02 — Brain** | A simple program that declares a string, a pointer to it, and a reference to it, then prints their memory addresses and values. Clarifies the relationship between pointers, references, and the data they refer to. |
| **ex03 — Weapon (HumanA vs HumanB)** | Two human classes that can attack with a weapon. `HumanA` holds a **reference** to a weapon (always armed), while `HumanB` holds a **pointer** to a weapon (can be unarmed or swap weapons). Highlights the critical difference between references (non-null, non-rebindable) and pointers (nullable, rebindable). |
| **ex04 — Sed is for losers** | A file manipulation program that replaces all occurrences of a string `s1` with `s2` in a file. Uses `std::ifstream`/`std::ofstream` and `std::string::find`/`std::string::substr`. |
| **ex05 — Harl 2.0** | Implements the `Harl` class with four complaint levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`). Uses an **array of member function pointers** for efficient dispatch instead of a long if-else chain. |
| **ex06 — Harl filter** | Extends Harl with log-level filtering. Only displays messages from a given severity level and above, using a `switch` statement with intentional fall-through. |

### Module 02: Orthodox Canonical Class Form

**Topics:** Fixed-point numbers, Orthodox Canonical Form (default constructor, copy constructor, copy assignment operator, destructor), operator overloading, type conversion, and static members.

| Exercise | Description |
|----------|-------------|
| **ex00 — My First Class in Orthodox Canonical Form** | Implements a `Fixed` class representing a fixed-point number with 8 fractional bits. Includes canonical form members, `getRawBits()`, and `setRawBits()`. |
| **ex01 — Toward a more useful fixed-point class** | Extends `Fixed` with constructors from `int` and `float`, plus `toInt()`, `toFloat()`, and the stream insertion operator (`<<`) for `std::ostream`. |
| **ex02 — Fixed-point operator overloading** | Adds full arithmetic (`+`, `-`, `*`, `/`), comparison (`>`, `<`, `>=`, `<=`, `==`, `!=`), and increment/decrement operators (pre/post). Also introduces static `min()` and `max()` functions. |

### Module 03: Inheritance

**Topics:** Public inheritance, virtual base classes, the diamond problem, method overriding, and constructor/destructor call order.

| Exercise | Description |
|----------|-------------|
| **ex00 — ClapTrap** | A base class `ClapTrap` with attributes (`name`, `hitPoints`, `energyPoints`, `attackDamage`) and actions (`attack()`, `takeDamage()`, `beRepaired()`). |
| **ex01 — ScavTrap** | A derived class `ScavTrap` that inherits from `ClapTrap`, overriding `attack()` and adding `guardGate()` mode. Demonstrates constructor delegation and method overriding. |
| **ex02 — FragTrap** | Another derived class `FragTrap` with a unique `highFivesGuys()` function. Demonstrates multiple independent derivations from the same base class. |
| **ex03 — DiamondTrap** | Uses multiple inheritance to create `DiamondTrap` from both `ScavTrap` and `FragTrap`. Resolves the diamond problem with **virtual inheritance**. Features a unique `whoAmI()` method and its own `name` attribute, using `using` declarations to disambiguate inherited members. |

### Module 04: Polymorphism, Abstract Classes, and Interfaces

**Topics:** Virtual functions, polymorphism, abstract classes, pure virtual functions, deep vs shallow copy, and interface design.

| Exercise | Description |
|----------|-------------|
| **ex00 — Animal, Dog, Cat** | Simple polymorphic hierarchy with `Animal` as the base class and `Dog`/`Cat` as derived classes. Includes `WrongAnimal`/`WrongCat` to demonstrate what happens when functions are **not** declared `virtual`. |
| **ex01 — Brain** | Adds a `Brain` class (100 ideas as `std::string` array) to `Dog` and `Cat`. Demonstrates **deep copying** — each `Dog`/`Cat` owns its own dynamically allocated `Brain` to avoid shared state when copying. |
| **ex02 — Abstract Animal** | Makes the `Animal` class **abstract** by declaring `makeSound()` as a pure virtual function, preventing direct instantiation of `Animal` objects. |
| **ex03 — Materia** | Implements an interface-based system with `AMateria` (abstract base), `Ice` and `Cure` (concrete materia), `ICharacter`/`Character` (interface/implementation), and `IMateriaSource`/`MateriaSource` (factory pattern). Features cloning, equip/unequip mechanics, and floor management for unequipped materia. Demonstrates full interface-based design in C++. |

### Module 05: Exceptions and Bureaucracy

**Topics:** Exception handling (`try`/`catch`/`throw`), custom exception classes, class hierarchies with exceptions, and advanced class design patterns.

| Exercise | Description |
|----------|-------------|
| **ex00 — Bureaucrat** | A `Bureaucrat` class with a constant name and a grade (1–150). Throws `GradeTooHighException` or `GradeTooLowException` on invalid construction or increment/decrement operations. |
| **ex01 — Form** | A `Form` class that requires a bureaucrat with sufficient grade to sign it. Uses exception classes for grade validation (`GradeTooHighException`, `GradeTooLowException`). |
| **ex02 — Abstract Form** | Converts `Form` to `AForm` (abstract). Adds three concrete form types: `ShrubberyCreationForm` (creates an ASCII tree file), `RobotomyRequestForm` (50% success rate), and `PresidentialPardonForm`. All implement the `execute()` method with grade and signature checks. |
| **ex03 — Intern** | An `Intern` class with a `makeForm()` factory method that creates forms by name string. Uses a lookup table (array of structs with function pointers) instead of if-else chains, demonstrating the factory design pattern. |

### Module 06: Type Casting and Serialization

**Topics:** C++ type casting operators (`static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`), serialization, RTTI (Run-Time Type Identification).

| Exercise | Description |
|----------|-------------|
| **ex00 — ScalarConverter** | A static class that converts a string literal to `char`, `int`, `float`, and `double`. Handles edge cases: pseudo-literals (`nan`, `inf`, `+inf`, `-inf`), overflow, non-displayable characters, and precision formatting. Uses `static_cast` for type conversions. |
| **ex01 — Serializer** | A static class that uses `reinterpret_cast` to convert a pointer to/from an unsigned integer. Demonstrates low-level memory representation and the `Data` struct serialization/deserialization pattern. |
| **ex02 — Real Type Identifier** | Implements a `Base` class with virtual destructor and derived classes `A`, `B`, `C`. Uses `dynamic_cast` with pointers and references to identify the actual derived type at runtime. Demonstrates RTTI without explicitly using `typeinfo`. |

### Module 07: C++ Templates

**Topics:** Function templates, class templates, template specialization, and generic programming.

| Exercise | Description |
|----------|-------------|
| **ex00 — Start with a few functions** | Template functions `swap`, `min`, and `max` that work with any type supporting comparison operators. Demonstrates basic function template syntax. |
| **ex01 — Iter** | A template function `iter` that applies a given function to each element of an array. Demonstrates passing function pointers to templates. |
| **ex02 — Array** | A template class `Array<T>` that mimics `std::array` with: default construction (empty array), parameterized construction (size `n`), copy construction (deep copy), assignment operator (deep copy), `operator[]` with bounds checking, and a `size()` method. |

### Module 08: STL Containers and Iterators

**Topics:** STL containers (`vector`, `list`, `deque`, `stack`), iterators, algorithm functions (`std::find`, `std::sort`), and custom container wrappers.

| Exercise | Description |
|----------|-------------|
| **ex00 — Easy Find** | A template function `easyfind` that searches for an integer in any STL container (vector, list, deque). Uses `std::find` and throws an exception if the value is not found. |
| **ex01 — Span** | The `Span` class stores a collection of integers and can find the shortest and longest spans (differences between closest and farthest numbers). Features `addNumber()` (single and range-based via iterators), `shortestSpan()`, and `longestSpan()`. |
| **ex02 — Mutated Abomination** | `MutantStack<T>`, a template class that extends `std::stack` to expose iterators (`begin()`/`end()`). Accesses the underlying container via `this->c`, making the stack iterable while preserving all standard stack operations. |

### Module 09: Algorithms and Performance

**Topics:** Algorithm design, performance analysis, STL algorithm complexity, merge-insert sort, and data structure comparison.

| Exercise | Description |
|----------|-------------|
| **ex00 — Bitcoin Exchange** | Reads a CSV database of historical Bitcoin prices and an input file with dates/values. For each valid entry, calculates the value of Bitcoin at the closest available date. Demonstrates `std::map` usage, file I/O, date validation, and efficient lookup (`std::map::lower_bound`). |
| **ex01 — Reverse Polish Notation** | A calculator that evaluates RPN (Reverse Polish Notation) expressions. Supports integers and operators (`+`, `-`, `*`, `/`) using a `std::stack`. Handles division by zero and invalid expressions with proper error handling. |
| **ex02 — PmergeMe (Ford-Johnson Algorithm)** | Implements the **merge-insert sort** (Ford-Johnson algorithm) using two different STL containers (`std::vector` and `std::deque`). Compares sorting performance across containers using `Jacobsthal numbers` for optimal insertion order. Demonstrates advanced algorithm implementation, container performance analysis, and precise timing with `std::clock`. |

---

## Compilation and Usage

Each exercise includes its own **Makefile**. To compile and run any exercise:

```bash
# Navigate to the module and exercise
cd 00/ex00

# Build the program
make

# Run it
./megaphone "Hello, World!"
```

**Common Makefile targets:**
- `make` / `make all` — Compile the program
- `make clean` — Remove object files
- `make fclean` — Remove object files and the binary
- `make re` — Rebuild from scratch

**Example run for each module:**

```bash
# Module 00 — Megaphone
cd 00/ex00 && make && ./megaphone "Hello World"

# Module 01 — Weapon
cd 01/ex03 && make && ./violence

# Module 02 — Fixed-point
cd 02/ex02 && make && ./fixed

# Module 03 — DiamondTrap
cd 03/ex03 && make && ./diamondtrap

# Module 04 — Materia
cd 04/ex03 && make && ./materia

# Module 05 — Bureaucrat & Intern
cd 05/ex03 && make && ./intern

# Module 06 — ScalarConverter
cd 06/ex00 && make && ./convert 42.0f