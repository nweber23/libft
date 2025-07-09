# libft

`libft` is a foundational C library developed as part of the 42 School curriculum. It reimplements a selection of standard C library functions, as well as additional utility functions, to provide a solid base for future C projects.

## Features

- **Standard C Library Functions:**  
  Reimplementation of common functions such as `memset`, `memcpy`, `strcpy`, `strcat`, `strlen`, `atoi`, and more.

- **Memory Management:**  
  Functions for memory allocation, deallocation, and manipulation.

- **String Manipulation:**  
  Tools for handling and modifying C strings.

- **Character Checks:**  
  Functions to check character types (alphabetic, digit, printable, etc.).

- **Linked List Utilities:**  
  Basic singly linked list implementation and operations.

## Usage

1. **Clone the repository:**
   ```sh
   git clone <repo-url>
   cd libft
   ```

2. **Build the library:**
   ```sh
   make
   ```

3. **Include in your project:**
   - Add `libft.a` to your project.
   - Include the header in your source files:
     ```c
     #include "libft.h"
     ```

## Project Structure

- `libft.h` — Header file with function prototypes.
- `src/` — Source files for all implemented functions.
- `Makefile` — Build instructions.

## License

This project is for educational purposes as part of the 42 School curriculum.
