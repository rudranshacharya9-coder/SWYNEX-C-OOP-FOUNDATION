# SWYNEX-C-OOP-FOUNDATION
# C++ OOP Foundation: Library Book Example

A beginner-friendly C++ console program that models a library item and a book. It demonstrates classes, objects, constructors, encapsulation, inheritance, and calling a base-class function.

## What the program does

The program creates a `Book` object for *The Hobbit* by J.R.R. Tolkien. It prints the item's name and the book's author.

## C++ concepts in this project

- **Class:** `Item` and `Book` describe the data and behavior their objects have.
- **Object:** `book` is an instance of the `Book` class.
- **Constructor:** The `Item` and `Book` constructors initialize an object's name and author when it is created.
- **Encapsulation:** `name` and `author` are private, so outside code cannot change them directly.
- **Inheritance:** `Book` publicly inherits from `Item`, so a book has the behavior of a general item.
- **Base-class function call:** `Item::display()` reuses the `Item` display function inside `Book::display()`.
- **Standard library:** `<iostream>` provides `std::cout`; `<string>` provides `std::string`.

## Project files

- `main.cpp` — source code for the program.
- `README.md` — project description and build instructions.

## Requirements

- A C++ compiler such as MinGW-w64 `g++`.
- Visual Studio Code or another text editor (optional; the compiler builds the program).

> VS Code is an editor and does not include a C++ compiler by itself. The `g++` command must be available in your terminal.

## Build and run on Windows

1. Open this folder in VS Code.
2. Open **Terminal → New Terminal**.
3. In the terminal, compile the program:

   ```powershell
   g++ -std=c++17 -Wall -Wextra -o app.exe main.cpp
   ```

4. If compilation succeeds, run it:

   ```powershell
   .\app.exe
   ```

## Expected output

```text
Item: The Hobbit
Author: J.R.R. Tolkien
```

## Try it yourself

Change the book title and author in `main()`:

```cpp
Book book("Charlotte's Web", "E. B. White");
```

Compile and run again to see the new values.
