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

Function declaration, definition, and call✅

Parameter passing:✅

Call by value✅

Call by reference (pointers)✅

Recursion (important for algorithmic problems)

inline functions

static functions and variables✅

3️⃣ Arrays and Strings

Single and multi-dimensional arrays✅

Strings as character arrays✅

Pointer and array relationship

Passing arrays to functions

String manipulation: strcpy, strlen, strcat, strcmp (understand, but in embedded often custom implementations are used)✅

4️⃣ Pointers

Pointers are critical in embedded programming.✅

Pointer basics: declaration, initialization, dereferencing✅

Pointer arithmetic

Pointer to pointer

Function pointers (callbacks)

Pointers and arrays

Dynamic memory allocation:

malloc(), calloc(), realloc(), free()

Embedded C may not use dynamic allocation often, but understanding is useful.

5️⃣ Structures & Unions

struct and union✅

Nested structures

Bit fields (very common in register manipulation)

Array of structures

typedef for readability

volatile keyword (important for hardware registers)✅

6️⃣ Enums and Macros

enum for readable constants

#define macros for constants

const keyword✅

#ifdef, #ifndef, #endif (conditional compilation)

7️⃣ Memory Management & Storage Classes

Storage classes:

auto, register, static, extern✅

Stack vs Heap memory✅

Understanding memory layout: Code, Data, BSS, Stack, Heap

8️⃣ Advanced C Concepts

Bitwise operations (very important for embedded)

&, |, ^, ~, <<, >>✅

Type casting

Volatile and const usage✅

Preprocessor directives✅

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
//////////////////////////////////////////////////////////////////////////////////////////




// 🔹 Basic variables
int var;                           // normal variable → read/write freely

const int cvar;                    // constant → cannot modify in code

volatile int vvar;                 // volatile → may change externally, read/write allowed

const volatile int cvvar;          // constant + volatile → cannot modify in code, may change externally



// 🔹 Simple pointers
int *p;                            // pointer to int → *p and pointer can change

const int *cp;                     // pointer to const int → *cp cannot change, pointer can

int * const pc;                     // const pointer → pointer cannot change, *pc can

const int * const cpc;             // const pointer to const int → pointer & value cannot change



// 🔹 Volatile pointers
volatile int *vp;                  // pointer to volatile → *vp may change externally

const volatile int *cvp;           // pointer to const volatile → *cvp cannot change in code, may change externally

int * volatile pv;                 // volatile pointer → pointer itself may change externally

int * const volatile pcv;          // const + volatile pointer → pointer cannot change in code, may change externally



// 🔹 Pointer to pointer
int **pp;                           // pointer to pointer → both levels can change

const int **cpp;                    // pointer to pointer to const int → second level cannot change value

int * const *pcp;                   // pointer to const pointer → second pointer cannot change, value can

const int * const *cpccp;           // pointer to const pointer to const int → second pointer & value cannot change

volatile int **vpp;                 // pointer to pointer to volatile → second level may change externally

const volatile int **cvpp;          // pointer to pointer to const volatile → second level cannot change, may change externally



// 🔹 Arrays and pointers
int arr[5];                          // normal array → read/write

int *arrp = arr;                     // pointer to first element

arrp++;                              // pointer arithmetic → move to next element

*(arrp + 2);                         // access third element



// 🔹 Function pointers
void func(int x);

void (*fptr)(int) = func;            // pointer to function

fptr(5);                             // call function via pointer



// 🔹 Embedded / hardware style
volatile int *REG = (int*)0x40021000;       // memory-mapped register

*REG = 1;                                   // write to register

int val = *REG;                             // read from register

const volatile int *SENSOR = (int*)0x40021004; // read-only hardware sensor

int val2 = *SENSOR;                         // always reads current value







//////////////////////////////////////////////////////////////////////////////
| Type / Declaration           | Value Can Change? | Pointer Can Change? | May Change Externally? |
| ---------------------------- | ----------------- | ------------------- | ---------------------- |
| `int var`                    | ✅ Yes             | –                   | ❌ No                   |
| `const int cvar`             | ❌ No              | –                   | ❌ No                   |
| `volatile int vvar`          | ✅ Yes             | –                   | ✅ Yes                  |
| `const volatile int cvvar`   | ❌ No              | –                   | ✅ Yes                  |
| `int *p`                     | ✅ Yes             | ✅ Yes               | ❌ No                   |
| `const int *cp`              | ❌ No              | ✅ Yes               | ❌ No                   |
| `int * const pc`             | ✅ Yes             | ❌ No                | ❌ No                   |
| `const int * const cpc`      | ❌ No              | ❌ No                | ❌ No                   |
| `volatile int *vp`           | ✅ Yes             | ✅ Yes               | ✅ Yes                  |
| `const volatile int *cvp`    | ❌ No              | ✅ Yes               | ✅ Yes                  |
| `int * volatile pv`          | ✅ Yes             | ✅ Yes (volatile)    | ❌ No                   |
| `int * const volatile pcv`   | ✅ Yes             | ❌ No (volatile)     | ❌ No                   |
| `int **pp`                   | ✅ Yes             | ✅ Yes               | ❌ No                   |
| `const int **cpp`            | ❌ No              | ✅ Yes               | ❌ No                   |
| `int * const *pcp`           | ✅ Yes             | ❌ No                | ❌ No                   |
| `const int * const *cpccp`   | ❌ No              | ❌ No                | ❌ No                   |
| `volatile int **vpp`         | ✅ Yes             | ✅ Yes               | ✅ Yes                  |
| `const volatile int **cvpp`  | ❌ No              | ✅ Yes               | ✅ Yes                  |
| `volatile int *REG`          | ✅ Yes             | ✅ Yes               | ✅ Yes (hardware)       |
| `const volatile int *SENSOR` | ❌ No              | ✅ Yes               | ✅ Yes (hardware)       |











```
┌──────────────────────────────────────────────────────────────┐
│                    C PROGRAMMING TOPICS                      │
│                                                              │
│  ✔ Data types & qualifiers                                   │
│  ✔ Storage classes                                           │
│  ✔ Const correctness                                         │
│  ✔ Arrays & strings                                          │
│  ✔ Pointer basics                                            │
│  ✔ Advanced pointers                                         │
│  ✔ Memory layout                                             │
│  ✔ Bitwise operations                                        │
│  ✔ Structs, unions, bitfields                                │
│  ✔ Preprocessor & macros                                     │
│  ✔ Function pointers                                         │
│  ✔ Void pointers                                             │
│  ✔ Undefined behavior                                        │
│  ✔ Typedef usage                                             │
│  ✔ Compilation & linking                                     │
│  ✔ Static vs extern                                          │
│  ✔ Const + volatile combos                                   │
│  ✔ Reentrancy                                                │
│  ✔ Inline functions                                          │
│  ✔ Memory allocation                                         │
│  ✔ Header file architecture                                  │
│                                                              │
└──────────────────────────────────────────────────────────────┘
```




```
┌──────────────────────────────────────────────────────────────────────────────┐
│                          C PROGRAMMING – CORE TOPICS                          │
│                                                                              │
│  1️⃣ C BASICS (STRONG FOUNDATION)                                             │
│     • Keywords                                                               │
│     • Data types & sizes                                                     │
│     • Operators (arithmetic, logical, relational)                            │
│     • Control flow                                                           │
│     • Loops                                                                  │
│     • switch-case                                                           │
│     • Type casting                                                           │
│     • Integer promotions                                                     │
│     • Endianness                                                             │
│                                                                              │
│  2️⃣ STORAGE CLASSES                                                         │
│     • auto                                                                  │
│     • static                                                                │
│     • extern                                                                │
│     • register                                                              │
│     • Scope, lifetime, linkage                                               │
│                                                                              │
│  3️⃣ CONST, VOLATILE, RESTRICT                                               │
│     • const int *p                                                          │
│     • int * const p                                                         │
│     • const int * const p                                                   │
│     • Why volatile for hardware registers                                   │
│     • volatile in ISR / shared variables                                    │
│     • const volatile registers                                              │
│     • restrict (optimization keyword)                                       │
│                                                                              │
│  4️⃣ ARRAYS & STRINGS                                                        │
│     • 1D, 2D arrays                                                         │
│     • Array vs pointer difference                                           │
│     • Array passing to function                                             │
│     • String operations                                                     │
│     • Common bugs: overflow, no null terminator                              │
│                                                                              │
│  5️⃣ POINTER MASTERY                                                         │
│     • Basic pointers                                                        │
│     • Pointer declaration                                                   │
│     • Pointer arithmetic                                                    │
│     • NULL, wild, dangling pointers                                         │
│     • Pointer to pointer (int **p)                                          │
│     • Function arguments with pointers                                      │
│     • Pointers to arrays                                                     │
│     • Arrays of pointers                                                     │
│     • Pointer to functions                                                   │
│     • void * usage                                                           │
│     • Memory-mapped registers using pointers                                 │
│                                                                              │
│  6️⃣ MEMORY MANAGEMENT                                                       │
│     • Stack vs heap                                                         │
│     • Static memory                                                         │
│     • malloc, calloc, free                                                   │
│     • Why dynamic memory avoided in embedded                                 │
│     • Fragmentation                                                         │
│     • Memory leaks                                                          │
│                                                                              │
│  7️⃣ MEMORY LAYOUT OF C PROGRAM                                              │
│     • Text / Code segment                                                    │
│     • .data                                                                 │
│     • .bss                                                                  │
│     • Static                                                               │
│     • Heap                                                                 │
│     • Stack                                                                │
│     • Linker overview                                                       │
│                                                                              │
│  8️⃣ STRUCTURES & UNIONS                                                     │
│     • Struct declaration                                                    │
│     • Nested structs                                                        │
│     • Struct passing to functions                                           │
│     • Padding & alignment                                                   │
│     • #pragma pack                                                         │
│     • Unions & overlapping memory                                           │
│     • Memory mapping with structs                                           │
│                                                                              │
│  9️⃣ BITWISE OPERATIONS (VERY IMPORTANT)                                    │
│     • AND, OR, XOR                                                          │
│     • NOT                                                                  │
│     • Left / Right shift                                                    │
│     • Bit masking                                                          │
│     • Set / Clear / Toggle / Check macros                                   │
│     • Register-level programming                                            │
│                                                                              │
│ 🔟 BITFIELDS                                                                │
│     • Syntax                                                                │
│     • Signed / unsigned bitfields                                           │
│     • Alignment issues                                                      │
│     • Accessing hardware registers using bitfields                           │
│     • Why bitfields can be dangerous                                        │
│                                                                              │
└──────────────────────────────────────────────────────────────────────────────┘
```


```text
┌──────────────────────────────────────────────────────┐
│                    LINKED LIST                       │
│                                                      │
│  1. Create                                           │
│  2. Traverse / Print                                 │
│  3. Count / Length                                   │
│  4. Insert at Beginning                              │
│  5. Insert at End                                    │
│  6. Insert at Specific Position                      │
│  7. Delete from Beginning                            │
│  8. Delete from End                                  │
│  9. Delete by Value                                  │
│ 10. Reverse Linked List                              │
│                                                      │
└──────────────────────────────────────────────────────┘
```

