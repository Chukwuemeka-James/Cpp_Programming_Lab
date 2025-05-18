# C++ Basics: Foundational Concepts and First Project

Welcome to the `01_Basics/` module! This section introduces you to the fundamental building blocks of C++ programming. You’ll write your first program, explore variables and data types, practice input/output, and complete a mini project to solidify your learning.

## 📂 Directory Structure

```bash
01_Basics/
├── hello_world.cpp             # Your first C++ program: introduction to syntax and output
├── variables.cpp               # Learn how to declare, initialize, and use variables
├── data_types.cpp              # Explore fundamental C++ data types and their usage
├── input_output.cpp            # Practice reading user input and displaying output
├── Project/
│   └── personal_info_summary.cpp  # Student project to apply concepts learned so far (You are to check this file after your attempt)
└── README.md                   # This guide explaining the files and project structure
```

---

## 🔍 File Descriptions

### `hello_world.cpp`
Your very first C++ program!  
It prints `"Hello, World!"` to the terminal and introduces:
- The structure of a C++ program
- `#include` directives
- The `main()` function
- `std::cout` for output

### `variables.cpp`
This file demonstrates how to:
- Declare and initialize variables
- Use basic data types like `int`, `double`, `char`, and `std::string`
- Output values using `std::cout`

### `data_types.cpp`
An exploration of common C++ data types:
- Integer types (`int`)
- Floating-point numbers (`float`, `double`)
- Characters (`char`)
- Boolean (`bool`)
- Strings (`std::string`)

Each type is displayed using `std::cout` to help visualize the differences.

### `input_output.cpp`
You’ll learn how to get user input using:
- `std::cin` for basic inputs (like numbers)
- `std::getline()` for full lines of text (e.g., names with spaces)
- How to manage the input buffer properly using `std::cin.ignore()`

---

## How to Compile and Run

Make sure you have a C++ compiler like `g++` installed.

From your terminal:

```bash
g++ hello_world.cpp -o hello
./hello_world
````

Repeat for any of the files to test them individually.
```

## Recommended Practice

* Modify the values in `variables.cpp` and recompile
* Add new variables to `data_types.cpp`
* Extend `input_output.cpp` to ask for more details
* Challenge yourself by improving the project with new features

---

## Student Project

### **Problem Statement: Personal Info Summary Tool**

As a beginner C++ developer, your task is to build a **console-based application** that interacts with the user to collect and display a personalized profile summary.

The program should prompt the user to input personal information including their full name, age, height, favorite number, favorite quote, and occupation. Once all the inputs are collected, the program should output a clean, structured summary that combines this information into a friendly and readable format.

This project is designed to reinforce your understanding of:

* Declaring and using different **data types** (`int`, `double`, `string`, `char`, `bool`)
* Reading input using both `std::cin` and `std::getline`
* Performing **basic I/O formatting**
* Applying conditional logic (e.g., determining if the user is an adult based on age)

**Key Functional Requirements:**

* Collect at least **six different inputs** of various types
* Display the information back using proper formatting and labels
* Include a basic conditional to output an age-related message (e.g., "You are an adult.")

**Constraints:**

* Inputs should handle spaces where needed (e.g., full name, quotes)
* Avoid using advanced concepts like loops or functions at this stage — keep it simple and based on foundational syntax


### You are expected to check the solution only after you have tried it by yourself:

```
01_Basics/Project/personal_info_summary.cpp
```

**MacOS or Linux**
```bash
cd 01_Basics/Project
g++ personal_info_summary.cpp -o personal_info_summary
./personal_info_summary
```

**Windows**
```bash
cd 01_Basics\Project
g++ personal_info_summary.cpp -o personal_info_summary.exe
personal_info_summary.exe
````