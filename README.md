# 42 ft_printf

Welcome to 42 ft_printf! This project challenges you to implement your own version of the `printf` function in C. The goal is to gain a deeper understanding of variadic functions, parsing, and formatting in C.

## Table of Contents

1. [Introduction](#introduction)
2. [Getting Started](#getting-started)
3. [Usage](#usage)
4. [Format Specifiers](#format-specifiers)
5. [Contributing](#contributing)
6. [License](#license)

## Introduction

The `ft_printf` project requires you to implement a custom version of the `printf` function, allowing you to format and print data to the console. This involves handling various format specifiers, modifiers, and flags.

## Getting Started

To get started with ft_printf, simply clone this repository to your local machine:

```bash
git clone https://github.com/T-001v2r3/ft_printf.git
```
Once you have the repository cloned, you can compile the library by running:

```bash
make # to build the project
make re # to re-build the project
```
If you want to delete the compiled files:
```bash
make clean # to clean up objects
make fclean # to clean up everything
```
This will generate the libftprintf.a static library, which you can then link to your projects.
Usage

To use the ft_printf function in your projects, include the ft_printf.h header file and link against the libftprintf.a library. For example:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
Compile your program with the ft_printf library:

```bash
gcc -o my_program my_program.c -L. -lftprintf
```
## Format Specifiers
ft_printf supports a variety of format specifiers, such as %s for strings, %d for integers, %f for floats, %p for pointers and %x or %X for hexadecimal. Refer to the format specifiers documentation for a complete list and usage examples.

## Contributing

Contributions to ft_printf are welcome! If you have ideas for new features, improvements, or bug fixes, feel free to open an issue or submit a pull request.

Before submitting a pull request, please make sure your code follows the 42 Norm coding style.

## License
This project is licensed under the terms of the MIT license.
