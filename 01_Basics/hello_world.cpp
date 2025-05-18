#include <iostream>

int main() {
    std::cout << "Hello, World!" << '\n';
    return 0;
}

/*
### Breakdown of each part:

* `#include <iostream>`
  👉 This tells the compiler to include the standard input/output stream library so you can use `std::cout` for printing to the screen.

* `int main()`
  👉 The main function is the entry point of every C++ program. It must return an integer.

* `{ ... }`
  👉 Curly braces enclose the body of the `main()` function.

* `std::cout << "Hello, World!" << std::endl;`
  👉 `std::cout` is used to print to the console.
  👉 `<<` is the stream insertion operator.
  👉 `"Hello, World!"` is the string being printed.
  👉 '\n' used to end the line and start the next on a new line.

* `return 0;`
  👉 Ends the program and returns 0 to the operating system to indicate successful execution.

*/