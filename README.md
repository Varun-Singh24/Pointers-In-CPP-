# Understanding Pointers and Double Pointers in C++

This repository contains fundamental examples of memory management in C++ using pointers and pointer-to-pointer (double pointer) logic.


## 1. Basic Pointers

* **The Address-of Operator (`&`):** This tells you *where* in the RAM a variable is living. Every variable has a unique hexadecimal address (like `0x61ff08`).
* **The Pointer Variable (`*`):** A pointer is a special variable type that can hold those hexadecimal addresses.
* **Type Matching:** A pointer must match the data type of the variable it points to. An `int*` can only point to an `int`, and a `float*` can only point to a `float`.

---

## 2. Pointer to Pointer (Double Pointers)

* **The Hierarchy:** 1.  `a` stores the value `10`.
    2.  `ptr` stores the **address of `a`**.
    3.  `parPtr` (Parent Pointer) stores the **address of `ptr`**.



**Why use this?**
Double pointers are commonly used when you need to change the address stored in a pointer from inside a function, or when dealing with 2D dynamic arrays (an array of arrays).

---


## 📍 Concept 1: Basic Pointers
A pointer is a variable that stores the memory address of another variable.

### Code Logic:
- `int a = 10;` creates an integer.
- `int* ptr = &a;` stores the address of `a` in `ptr`.
- Printing `&a` and `ptr` will yield the same hexadecimal memory address.

## 📍 Concept 2: Pointer to Pointer
A double pointer is a variable that stores the address of a pointer. This creates a chain of references.

### Code Logic:
- `int** parPtr = &ptr;`
- `parPtr` holds the address of the pointer `ptr`.
- `*parPtr` would give you the address of `a`.
- `**parPtr` would give you the actual value `10`.

---

## 💻 Code Examples

### Basic Pointer Usage
```cpp
int a = 10;
int* ptr = &a;
cout << "Address of a: " << &a << endl;
cout << "Value in ptr: " << ptr << endl;
```

### Pointer to Pointer Usage
```cpp
int a = 10;
int* ptr = &a;
int** parPtr = &ptr;
cout << "Address of ptr: " << &ptr << endl;
cout << "Value in parPtr: " << parPtr << endl;
```

## 🛠️ Key Operators to Remember
- `&` (Address-of): Returns the memory address of a variable.
- `*` (Dereference): When used in a declaration, it creates a pointer. When used on an existing pointer, it accesses the value at that address.  
