# Introduction to C++ Programming

## What is C++?

* **C++** is a **general-purpose, high-performance programming language** developed by Bjarne Stroustrup in the early 1980s.
* It is an **extension of the C language**, with added features such as **Object-Oriented Programming**.
* C++ is known for:

  * Speed and efficiency
  * Fine control over hardware
  * Being widely used in systems software, game engines, embedded devices, finance, AI, and more.

## Why Learn C++?

* It helps you **understand the core of programming and memory**.
* Powers major software like **Adobe, Microsoft Office, and parts of Windows, Linux, and Chrome**.
* It's the **foundation of many other programming languages**.
* Teaches both **procedural** and **object-oriented programming**.

## Features of C++

* **Compiled Language** – It is translated to machine code using a compiler.
* **Statically Typed** – Variable types must be declared.
* **Object-Oriented** – Supports classes, inheritance, and more.
* **Low-level capabilities** – Offers memory-level control using pointers.
* **Standard Template Library (STL)** – Comes with powerful reusable components (like vectors, maps).

## What You Need to Know Before Writing C++ Code

1. **Structure of a Program**

   * Every C++ program must have a `main()` function.
   * Code blocks are enclosed in curly braces `{}`.

2. **Case Sensitivity**

   * C++ is case-sensitive. `main`, `Main`, and `MAIN` are all different.

3. **Semicolons**

   * Every instruction (statement) ends with a semicolon `;`.

4. **Comments**

   * Single-line: `//`
   * Multi-line: `/* ... */`

---

# Introduction to `g++` — The GNU C++ Compiler

##  What is `g++`?

* `g++` stands for **GNU C++ Compiler**.
* It is the **tool used to convert C++ source code into machine code** that a computer can understand and execute.
* It is part of the **GNU Compiler Collection (GCC)**, which includes compilers for other languages like C (`gcc`), Fortran, and Ada.

## Why Do You Need `g++`?

* Computers don’t understand C++ code directly.
* You write your program in a `.cpp` file (e.g., `main.cpp`).
* `g++` **translates** that human-readable code into a binary file (executable), which the operating system can run.
* It checks for **syntax errors** and helps catch mistakes before running your program.

## Basic Workflow

1. **Write C++ Code** in a file (e.g., `program.cpp`)

2. **Compile with `g++`**:

   ```bash
   g++ hello_world.cpp -o hello
   ```

3. **Run the Executable**:

   ```bash
   ./program
   ```

---

## File Extensions

| File Type                    | Description                   |
| ---------------------------- | ----------------------------- |
| `.cpp`                       | C++ source code               |
| `.h`                         | Header file                   |
| Executable (no ext on Linux) | Compiled program (`program`)  |
| `.exe` (Windows)             | Executable file on Windows OS |

## Compilation Phases (Behind the Scenes)

When you run `g++`, it performs several steps:

1. **Preprocessing** – Handles `#include` and macros.
2. **Compilation** – Converts C++ code to assembly language.
3. **Assembly** – Converts assembly code to machine code (object file).
4. **Linking** – Combines object files with libraries into an executable.

All this is hidden unless you explicitly tell it to stop at a certain stage using flags.