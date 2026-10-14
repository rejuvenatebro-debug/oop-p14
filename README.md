# OOP Practical 4 - Dynamic Memory Allocation

SY B.Tech. (AI & ML) - Object Oriented Programming

## Aim
To understand dynamic memory allocation in C++ using the `new` and `delete` operators, and to access data using pointers and references.

## Description
The program has two classes.

- `Student` - declares an integer variable and prints its value directly, through a pointer, and through a reference, showing that all three refer to the same memory location.
- `Product` - allocates an integer on the heap using `new`, stores and prints a value, then releases the memory using `delete`.

## Files
- `practical4.cpp` - source code
- `sample_output.txt` - output of a sample run
- `screenshots/` - screenshot of the program running

## How to compile and run
```
g++ -std=c++17 practical4.cpp -o practical4
./practical4
```
On Windows, run `practical4.exe` instead of `./practical4`.

The program takes no user input.

## Requirements
A C++ compiler (g++) with C++11 or later. No external libraries or dataset are used, only `iostream` from the C++ Standard Library.
