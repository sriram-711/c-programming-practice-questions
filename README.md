# c-programming-practice-questions

1️⃣ Basics of C

Data types: int, char, float, double, void

Constants and literals

Variables & scope

Operators: arithmetic, logical, bitwise

Conditional statements: if, else, switch

Loops: for, while, do-while

Input/Output: printf, scanf

These are mandatory, since everything else builds on them.

2️⃣ Functions

Function declaration, definition, and call

Parameter passing:

Call by value

Call by reference (pointers)

Recursion (important for algorithmic problems)

inline functions

static functions and variables

3️⃣ Arrays and Strings

Single and multi-dimensional arrays

Strings as character arrays

Pointer and array relationship

Passing arrays to functions

String manipulation: strcpy, strlen, strcat, strcmp (understand, but in embedded often custom implementations are used)

4️⃣ Pointers

Pointers are critical in embedded programming.

Pointer basics: declaration, initialization, dereferencing

Pointer arithmetic

Pointer to pointer

Function pointers (callbacks)

Pointers and arrays

Dynamic memory allocation:

malloc(), calloc(), realloc(), free()

Embedded C may not use dynamic allocation often, but understanding is useful.

5️⃣ Structures & Unions

struct and union

Nested structures

Bit fields (very common in register manipulation)

Array of structures

typedef for readability

volatile keyword (important for hardware registers)

6️⃣ Enums and Macros

enum for readable constants

#define macros for constants

const keyword

#ifdef, #ifndef, #endif (conditional compilation)

7️⃣ Memory Management & Storage Classes

Storage classes:

auto, register, static, extern

Stack vs Heap memory

Understanding memory layout: Code, Data, BSS, Stack, Heap

8️⃣ Advanced C Concepts

Bitwise operations (very important for embedded)

&, |, ^, ~, <<, >>

Type casting

Volatile and const usage

Preprocessor directives

Inline assembly (optional for advanced embedded)

9️⃣ Data Structures (Embedded-friendly)

Arrays, linked lists

Stack and queue

Circular queue (common in buffers, UART, SPI)

Simple sorting/searching algorithms

Hash tables (optional)

🔟 Embedded C Specific Concepts

Register-level programming (using pointers)

GPIO, timers, ADC/DAC control (with C)

Interrupts handling (writing ISRs)

Writing bare-metal code without OS

Understanding volatile and const in context of hardware

Fixed-point arithmetic (for MCUs without FPU)
