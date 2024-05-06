libft

About

This repository contains my implementation of the libft project, a fundamental assignment at 42 School. libft is a C library consisting of various functions commonly used in programming. These functions serve as replacements for standard C library functions and include additional utility functions helpful in various programming tasks.

Functions

The libft library includes a wide range of functions categorized into different sections, such as string manipulation, memory management, character manipulation, and more. Here are some examples of functions included in libft:

String Manipulation:

ft_strlen: Computes the length of a string.

ft_strcpy: Copies a string.

ft_strcat: Concatenates two strings.

ft_strchr: Locates the first occurrence of a character in a string.

ft_strcmp: Compares two strings.

ft_strjoin: Concatenates two strings.

ft_strsplit: Splits a string into an array of substrings.

Memory Management:

ft_memset: Fills memory with a constant byte.

ft_memcpy: Copies memory area.

ft_memmove: Copies memory area, even if the memory areas overlap.

ft_memchr: Locates the first occurrence of a character in a memory block.

ft_memcmp: Compares two memory blocks.

Character Manipulation:

ft_isalpha: Checks if a character is alphabetic.

ft_isdigit: Checks if a character is a digit.

ft_isalnum: Checks if a character is alphanumeric.

ft_isascii: Checks if a character is ASCII.

ft_isprint: Checks if a character is printable.

ft_tolower: Converts a character to lowercase.

ft_toupper: Converts a character to uppercase.

Additional Functions:

ft_putchar: Outputs a character to the standard output.

ft_putstr: Outputs a string to the standard output.

ft_putnbr: Outputs an integer to the standard output.

ft_itoa: Converts an integer to a string.

Bonus Functions:

ft_lstnew: Allocates and returns a new element of a linked list.

ft_lstadd_front: Adds an element to the beginning of a linked list.

ft_lstsize: Counts the number of elements in a linked list.

ft_lstlast: Returns the last element of a linked list.

ft_lstadd_back: Adds an element to the end of a linked list.

ft_lstdelone: Deletes an element from a linked list.

ft_lstclear: Deletes all elements from a linked list.

ft_lstiter: Iterates over a linked list and applies a function to each element.

ft_lstmap: Iterates over a linked list, applies a function to each element, and creates a new list with the results.

Usage

To use libft in your projects, include the libft.h header file and link your project with the libft.a static library. Then, you can start using any of the functions provided by libft in your code.

Copy code

#include "libft.h"

int main() 
{
    char *str = "Hello, world!";
    int length = ft_strlen(str);
    ft_putstr("Length of the string: ");
    ft_putnbr(length);
    ft_putchar('\n');
    return 0;
}

Testing

To ensure the correctness of the libft functions, extensive testing is performed. Unit tests are included for each function to verify their functionality in various scenarios.

Contributions

Contributions and improvements to the libft project are welcome. Feel free to submit pull requests or open issues for any bugs or enhancements.

Credits

This project was completed as part of the curriculum at 42 School.
