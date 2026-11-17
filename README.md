*This project has been created as part of the 42 curriculum by saissani*

# Libft

## Description

**Libft** is my first own C library. The goal of the project is to understand how the standard C functions work by re-implementing them from scratch, and to build a collection of general-purpose helpers (string, memory, output and linked-list utilities) that will be reused in future 42 projects.

The library is compiled into a static archive, `libft.a`, built with the `ar` command, and exposes all its prototypes through a single header, `libft.h`.

Overview of the three parts:

1. **Libc functions**: re-implementation of classic `libc` functions, with the same prototypes and behaviors as the originals (only prefixed with `ft_`).
2. **Additional functions**: useful functions that are either not in the `libc` or exist in a different form (string manipulation, conversion, file-descriptor output).
3. **Linked list**: a `t_list` structure and the functions to manipulate singly linked lists.

### Technical choices

- Written in C, compliant with the 42 Norm.
- Compiled with `cc -Wall -Wextra -Werror`.
- No global variables.
- Helper functions are declared `static` to limit their scope to their file.
- The `restrict` qualifier is not used in prototypes (C99 only), and `-std=c99` is not used.
- The archive is created with `ar` (`libtool` is forbidden).
- All files are at the root of the repository.

## Instructions

### Compilation

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

The Makefile provides the rules `$(NAME)`, `all`, `clean`, `fclean` and `re`, and does not relink unnecessarily.

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

### Testing against the system functions

Some functions (`strlcpy`, `strlcat`, `bzero`) are not part of the default glibc. To compare your implementation with the system one on glibc, include `<bsd/string.h>` and compile with `-lbsd`.

## Library description

### Part 1: Libc functions

| Category | Functions |
|---|---|
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String length / search | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strnstr` |
| String comparison | `ft_strncmp` |
| String copy / concatenation | `ft_strlcpy`, `ft_strlcat` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Conversion | `ft_atoi` |
| Allocation (uses `malloc`) | `ft_calloc`, `ft_strdup` |

Note: `ft_calloc` returns a unique pointer that can be passed to `free()` if `nmemb` or `size` is 0.

### Part 2: Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of `s` starting at index `start`, with a maximum length `len`. |
| `ft_strjoin` | Returns a new string resulting from the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with the characters from `set` removed from the beginning and the end. |
| `ft_split` | Splits `s` using `c` as a delimiter and returns a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer (negatives included) to a string. |
| `ft_strmapi` | Applies `f(index, char)` to each character of `s` and returns the new string. |
| `ft_striteri` | Applies `f(index, &char)` to each character of `s` in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

All functions returning allocated memory return `NULL` if the allocation fails.

### Part 3: Linked list

The following structure is declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content; `next` is set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a node's content with `del`, then the node itself (not the next one). |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies `f` to the content of each node. |
| `ft_lstmap` | Builds a new list by applying `f` to each node's content; uses `del` on failure. |

## Resources

### References

- `man` pages of the re-implemented functions (`man 3 strlen`, `man 3 memmove`, etc.)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language), Kernighan & Ritchie
- [GNU `ar` documentation](https://sourceware.org/binutils/docs/binutils/ar.html)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- 42 Norm (available on the intranet)

### Use of AI

 All the code was written and understood by me.
 AI was only used to help write this README (structure, wording and formatting of the library description).