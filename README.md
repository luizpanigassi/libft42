# libft42

These are the exercises done in the first project at 42SP. It's basically an emulation of a lot of functions from `libc.h`, designed for us to study the basic codes in C, and build a library of functions for our projects.

## Overview

This project is a custom implementation of many standard C library functions. The goal is to understand how these functions work under the hood and to provide a reusable library (`libft.a`) for use in other C projects at 42SP.

## Implemented Functions

The library includes reimplementations of functions for:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String manipulation: `ft_strlen`, `ft_strchr`, `ft_strncmp`, `ft_strdup`, `ft_strjoin`, etc.
- Memory management: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_bzero`
- List operations: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`, `ft_lstsize`, `ft_lstlast`
- Conversion: `ft_atoi`, `ft_itoa`
- Output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- And more...

See the [libftdeliver](libftdeliver) folder for the full list of implemented functions.

## Usage

1. **Build the library:**
   ```
   make
   ```

2. **Include in your project:**
   - Add `libft.a` to your project.
   - Include the appropriate header in your C files.

3. **Example:**
   ```c
   #include "libft.h"

   int main(void) {
       char *s = ft_strdup("Hello, libft!");
       ft_putendl_fd(s, 1);
       free(s);
       return 0;
   }
   ```

## Project Structure

- [`libftdeliver/`](libftdeliver): Contains all source files for the library functions.

---
Feel free to use and adapt these functions for your own C projects!
