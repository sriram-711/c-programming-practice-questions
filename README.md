# c-programming-practice-questions

1️⃣ Basics of C

Data types: int, char, float, double, void✅

Constants and literals✅

Variables & scope✅

Operators: arithmetic, logical, bitwise✅

Conditional statements: if, else, switch✅

Loops: for, while, do-while✅

Input/Output: printf, scanf✅

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












Perfect! Here’s a **complete reference table** for **AND (`&`), OR (`|`), XOR (`^`)** in C for bit manipulation.

---

## **1️⃣ AND (`&`) — “Keep / Clear / Check”**

| Operation                | Formula         | Example                     | Result                       |
| ------------------------ | --------------- | --------------------------- | ---------------------------- |
| **Check bit**            | `n & (1<<pos)`  | `n=10 (1010), pos=1`        | `1010 & 0010 = 0010 → bit=1` |
| **Clear bit**            | `n & ~(1<<pos)` | `n=13 (1101), pos=2`        | `1101 & 1011 = 1001`         |
| **Mask bits**            | `n & mask`      | `n=13 (1101), mask=7(0111)` | `1101 & 0111 = 0101`         |
| **Turn off rightmost 1** | `n & (n-1)`     | `n=12(1100)`                | `1100 & 1011 = 1000`         |

---

## **2️⃣ OR (`|`) — “Set / Turn On”**

| Operation             | Formula | Example   | Result                    |       |                              |
| --------------------- | ------- | --------- | ------------------------- | ----- | ---------------------------- |
| **Set bit**           | `n      | (1<<pos)` | `n=10(1010), pos=1`       | `1010 | 0010 = 1010` (bit already 1) |
| **Set bit**           | `n      | (1<<pos)` | `n=10(1010), pos=0`       | `1010 | 0001 = 1011`                 |
| **Set multiple bits** | `n      | mask`     | `n=8(1000), mask=3(0011)` | `1000 | 0011 = 1011`                 |

---

## **3️⃣ XOR (`^`) — “Toggle / Flip / Swap”**

| Operation                | Formula                       | Example                    | Result                       |        |
| ------------------------ | ----------------------------- | -------------------------- | ---------------------------- | ------ |
| **Toggle bit**           | `n ^ (1<<pos)`                | `n=10(1010), pos=1`        | `1010 ^ 0010 = 1000`         |        |
| **Toggle multiple bits** | `n ^ mask`                    | `n=13(1101), mask=3(0011)` | `1101 ^ 0011 = 1110`         |        |
| **Swap two bits**        | `if bits differ → n ^ ((1<<p) | (1<<q))`                   | `n=13(1101), swap pos0,pos2` | `1001` |

---

### **Quick Memory Tip**

* **AND `&`** → keep 1, clear 0, check
* **OR `|`** → set 1
* **XOR `^`** → flip/toggle

---

If you want, I can **give you 10 ready-to-solve C problems** using only **AND, OR, XOR** for practice — perfect for interviews.

Do you want me to do that?

