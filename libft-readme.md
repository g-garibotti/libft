# Libft

![C](https://img.shields.io/badge/language-C-blue.svg)

A custom C library implementing various standard library functions and additional utilities.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Function List](#function-list)
  - [Libc Functions](#libc-functions)
  - [Additional Functions](#additional-functions)
  - [Bonus Functions](#bonus-functions)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Overview

Libft is a project that aims to recreate various standard C library functions, as well as implement additional utility functions. This library serves as a foundation for future C projects, providing a set of reliable and well-implemented functions.

## Features

- Reimplementation of various libc functions
- Additional utility functions for string manipulation, memory management, and more
- Bonus functions for linked list manipulation
- Makefile for easy compilation and management
- Adherence to 42 school coding standards

## Getting Started

### Prerequisites

- GCC compiler
- Make

### Installation

1. Clone the repository:
   ```
   git clone https://github.com/g-garibotti/libft.git
   ```
2. Navigate to the project directory:
   ```
   cd libft
   ```
3. Compile the library:
   ```
   make
   ```

## Usage

To use the library in your C projects:

1. Include the header in your C files:
   ```c
   #include "libft.h"
   ```
2. Compile your project with the libft library:
   ```
   gcc -L. -lft your_c_file.c -o your_program
   ```

## Function List

### Libc Functions

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`
- `ft_atoi`
- `ft_calloc`, `ft_strdup`

### Additional Functions

- `ft_substr`: Extract substring from string.
- `ft_strjoin`: Concatenate two strings.
- `ft_strtrim`: Trim beginning and end of string with specified characters.
- `ft_split`: Split string into an array of substrings.
- `ft_itoa`: Convert integer to string.
- `ft_strmapi`: Create new string from modifying string with specified function.
- `ft_striteri`: Modify string with specified function.
- `ft_putchar_fd`: Output a char to a file descriptor.
- `ft_putstr_fd`: Output a string to a file descriptor.
- `ft_putendl_fd`: Output a string to a file descriptor, followed by a newline.
- `ft_putnbr_fd`: Output a number to a file descriptor.

### Bonus Functions

- `ft_lstnew`: Create new list.
- `ft_lstadd_front`: Add new element at beginning of list.
- `ft_lstsize`: Count elements of a list.
- `ft_lstlast`: Find last element of list.
- `ft_lstadd_back`: Add new element at end of list.
- `ft_lstdelone`: Delete element from list.
- `ft_lstclear`: Delete sequence of elements of list from a starting point.
- `ft_lstiter`: Apply function to content of all list's elements.
- `ft_lstmap`: Apply function to content of all list's elements into new list.

## Testing

To ensure the correct functionality of the library, it's recommended to create test programs for each function. These tests are not included in the final submission but are crucial for development and debugging.
