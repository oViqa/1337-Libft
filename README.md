# 📚 Libft - My First C Library

> *"The beginning of wisdom is the definition of terms."* - Socrates

**Libft** is my implementation of essential C standard library functions, created as the foundational project at **1337 School**. This project taught me the fundamentals of C programming by rebuilding core functions from scratch.

## 🎯 Project Overview

The goal was to create my own C library containing a collection of functions that are essential for C programming. This library serves as the foundation for all future projects at 1337 School.

### What I Built
- **42 functions** recreating essential libc functions
- **Memory management** functions 
- **String manipulation** utilities
- **Character validation** functions
- **Linked list** manipulation functions (bonus part)

## 🛠️ Functions Implemented

### Part 1 - Libc Functions
Functions that exist in the C standard library:

| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculate string length |
| `ft_strcpy` | Copy strings |
| `ft_strcmp` | Compare strings |
| `ft_memset` | Fill memory with bytes |
| `ft_memcpy` | Copy memory area |
| `ft_isalpha` | Check if alphabetic |
| `ft_isdigit` | Check if digit |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |
| And many more... |

### Part 2 - Additional Functions
Functions not in libc or with different prototypes:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract substring |
| `ft_strjoin` | Concatenate strings |
| `ft_strtrim` | Trim characters from string |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Convert integer to string |
| `ft_putchar_fd` | Output char to file descriptor |
| `ft_putstr_fd` | Output string to file descriptor |

### Bonus Part - Linked Lists
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new list element |
| `ft_lstadd_front` | Add element at beginning |
| `ft_lstsize` | Count list elements |
| `ft_lstlast` | Get last element |
| `ft_lstadd_back` | Add element at end |
| `ft_lstclear` | Delete and free list |

## 🚀 How to Use

### Compilation
```bash
# Compile the library
make

# Compile with bonus functions
make bonus

# Clean object files
make clean

# Clean everything
make fclean

# Recompile everything
make re
```

### Usage Example
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 1337!";
    char *substr;
    
    printf("Original: %s\n", str);
    printf("Length: %zu\n", ft_strlen(str));
    
    substr = ft_substr(str, 7, 4);
    printf("Substring: %s\n", substr);
    
    free(substr);
    return (0);
}
```

### Compilation with Your Project
```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

## 📋 Requirements & Norms

- **Language**: C
- **Norm**: 1337/42 School coding standard
- **Functions**: No global variables
- **Memory**: All heap-allocated memory must be freed
- **Error handling**: Functions should not crash unexpectedly

### Compilation Flags
```bash
-Wall -Wextra -Werror
```

## 🎓 What I Learned

This project was crucial for understanding:

- **Memory Management**: Manual allocation and deallocation
- **Pointer Manipulation**: Working with different levels of indirection  
- **String Operations**: Understanding how strings work at a low level
- **Linked Lists**: Dynamic data structures and memory allocation
- **Makefile**: Automating compilation process
- **Code Organization**: Structuring a library project
- **Testing**: Writing comprehensive tests for each function

## 🧪 Testing

I created comprehensive tests to verify each function works correctly:

```bash
# Example test structure
make test
./test_libft
```

## 📁 Project Structure

```
libft/
├── src/           # Source files (.c)
├── include/       # Header files (.h)  
├── Makefile       # Compilation rules
└── README.md      # This file
```

## 💭 Reflections

Building Libft from scratch gave me a deep appreciation for the standard library functions we often take for granted. Every `strlen()` call, every `malloc()`, every string operation - I now understand what happens under the hood.

This project laid the foundation for all my subsequent C projects at 1337 School and taught me the importance of:
- Writing clean, readable code
- Proper memory management  
- Comprehensive testing
- Following coding standards

---

*This project was completed as part of the 1337 School curriculum (42 Network).*

**Author**: Hiba  
**School**: 1337 (42 Network)  
**Year**: 2024
