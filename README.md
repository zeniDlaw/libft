# libft

## About

This repository contains my implementation of the libft project, a fundamental assignment at 42 School. libft is a C library consisting of various functions commonly used in programming. These functions serve as replacements for standard C library functions and include additional utility functions helpful in various programming tasks.

## Functions

### String Manipulation

- **ft_strlen**: Computes the length of a string.
  - **Prototype**: `size_t ft_strlen(const char *s);`
  - **Example**:
    ```c
    size_t length = ft_strlen("Hello");
    // length = 5
    ```

- **ft_strcpy**: Copies a string.
  - **Prototype**: `char *ft_strcpy(char *dst, const char *src);`
  - **Example**:
    ```c
    char dest[50];
    ft_strcpy(dest, "Hello");
    // dest = "Hello"
    ```

- **ft_strcat**: Concatenates two strings.
  - **Prototype**: `char *ft_strcat(char *s1, const char *s2);`
  - **Example**:
    ```c
    char dest[50] = "Hello, ";
    ft_strcat(dest, "world!");
    // dest = "Hello, world!"
    ```

- **ft_strchr**: Locates the first occurrence of a character in a string.
  - **Prototype**: `char *ft_strchr(const char *s, int c);`
  - **Example**:
    ```c
    char *ptr = ft_strchr("Hello, world!", 'w');
    // ptr points to the 'w' in "Hello, world!"
    ```

- **ft_strcmp**: Compares two strings.
  - **Prototype**: `int ft_strcmp(const char *s1, const char *s2);`
  - **Example**:
    ```c
    int result = ft_strcmp("Hello", "Hello");
    // result = 0 (strings are equal)
    ```

- **ft_strjoin**: Concatenates two strings.
  - **Prototype**: `char *ft_strjoin(char const *s1, char const *s2);`
  - **Example**:
    ```c
    char *joined = ft_strjoin("Hello, ", "world!");
    // joined = "Hello, world!"
    ```

- **ft_strsplit**: Splits a string into an array of substrings.
  - **Prototype**: `char **ft_strsplit(char const *s, char c);`
  - **Example**:
    ```c
    char **result = ft_strsplit("Hello world example", ' ');
    // result = ["Hello", "world", "example"]
    ```

### Memory Management

- **ft_memset**: Fills memory with a constant byte.
  - **Prototype**: `void *ft_memset(void *b, int c, size_t len);`
  - **Example**:
    ```c
    char buffer[10];
    ft_memset(buffer, 'A', 10);
    // buffer = "AAAAAAAAAA"
    ```

- **ft_memcpy**: Copies memory area.
  - **Prototype**: `void *ft_memcpy(void *dst, const void *src, size_t n);`
  - **Example**:
    ```c
    char dest[10];
    ft_memcpy(dest, "Hello", 5);
    // dest = "Hello"
    ```

- **ft_memmove**: Copies memory area, even if the memory areas overlap.
  - **Prototype**: `void *ft_memmove(void *dst, const void *src, size_t len);`
  - **Example**:
    ```c
    char str[] = "memmove can be very useful";
    ft_memmove(str + 20, str + 15, 11);
    // str = "memmove can be very memmove can be useful"
    ```

- **ft_memchr**: Locates the first occurrence of a character in a memory block.
  - **Prototype**: `void *ft_memchr(const void *s, int c, size_t n);`
  - **Example**:
    ```c
    char *ptr = ft_memchr("Hello, world!", 'w', 13);
    // ptr points to the 'w' in "Hello, world!"
    ```

- **ft_memcmp**: Compares two memory blocks.
  - **Prototype**: `int ft_memcmp(const void *s1, const void *s2, size_t n);`
  - **Example**:
    ```c
    int result = ft_memcmp("Hello", "Hello", 5);
    // result = 0 (memory blocks are equal)
    ```

### Character Manipulation

- **ft_isalpha**: Checks if a character is alphabetic.
  - **Prototype**: `int ft_isalpha(int c);`
  - **Example**:
    ```c
    int result = ft_isalpha('A');
    // result = 1 (true)
    ```

- **ft_isdigit**: Checks if a character is a digit.
  - **Prototype**: `int ft_isdigit(int c);`
  - **Example**:
    ```c
    int result = ft_isdigit('5');
    // result = 1 (true)
    ```

- **ft_isalnum**: Checks if a character is alphanumeric.
  - **Prototype**: `int ft_isalnum(int c);`
  - **Example**:
    ```c
    int result = ft_isalnum('A');
    // result = 1 (true)
    ```

- **ft_isascii**: Checks if a character is ASCII.
  - **Prototype**: `int ft_isascii(int c);`
  - **Example**:
    ```c
    int result = ft_isascii(65);
    // result = 1 (true)
    ```

- **ft_isprint**: Checks if a character is printable.
  - **Prototype**: `int ft_isprint(int c);`
  - **Example**:
    ```c
    int result = ft_isprint(' ');
    // result = 1 (true)
    ```

- **ft_tolower**: Converts a character to lowercase.
  - **Prototype**: `int ft_tolower(int c);`
  - **Example**:
    ```c
    int result = ft_tolower('A');
    // result = 'a'
    ```

- **ft_toupper**: Converts a character to uppercase.
  - **Prototype**: `int ft_toupper(int c);`
  - **Example**:
    ```c
    int result = ft_toupper('a');
    // result = 'A'
    ```

### Additional Functions

- **ft_putchar**: Outputs a character to the standard output.
  - **Prototype**: `void ft_putchar(char c);`
  - **Example**:
    ```c
    ft_putchar('A');
    // Output: A
    ```

- **ft_putstr**: Outputs a string to the standard output.
  - **Prototype**: `void ft_putstr(char const *s);`
  - **Example**:
    ```c
    ft_putstr("Hello, world!");
    // Output: Hello, world!
    ```

- **ft_putnbr**: Outputs an integer to the standard output.
  - **Prototype**: `void ft_putnbr(int n);`
  - **Example**:
    ```c
    ft_putnbr(12345);
    // Output: 12345
    ```

- **ft_itoa**: Converts an integer to a string.
  - **Prototype**: `char *ft_itoa(int n);`
  - **Example**:
    ```c
    char *str = ft_itoa(12345);
    // str = "12345"
    ```

### Bonus Functions

- **ft_lstnew**: Allocates and returns a new element of a linked list.
  - **Prototype**: `t_list *ft_lstnew(void const *content, size_t content_size);`
  - **Example**:
    ```c
    t_list *node = ft_lstnew("content", 7);
    // node->content = "content", node->content_size = 7
    ```

- **ft_lstadd_front**: Adds an element to the beginning of a linked list.
  - **Prototype**: `void ft_lstadd_front(t_list **alst, t_list *new);`
  - **Example**:
    ```c
    ft_lstadd_front(&list, new_node);
    // list now starts with new_node
    ```

- **ft_lstsize**: Counts the number of elements in a linked list.
  - **Prototype**: `int ft_lstsize(t_list *lst);`
  - **Example**:
    ```c
    int size = ft_lstsize(list);
    // size = number of elements in list
    ```

- **ft_lstlast**: Returns the last element of a linked list.
  - **Prototype**: `t_list *ft_lstlast(t_list *lst);`
  - **Example**:
    ```c
    t_list *last = ft_lstlast(list);
    // last = last element of list
    ```

- **ft_lstadd_back**: Adds an element to the end of a linked list.
  - **Prototype**: `void ft_lstadd_back(t_list **alst, t_list *new);`
  - **Example**:
    ```c
    ft_lstadd_back(&list, new_node);
    // list now ends with new_node
    ```

- **ft_lstdelone**: Deletes an element from a linked list.
  - **Prototype**: `void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));`
  - **Example**:
    ```c
    ft_lstdelone(&node, del_function);
    // node is deleted
    ```

- **ft_lstclear**: Deletes all elements from a linked list.
  - **Prototype**: `void ft_lstclear(t_list **lst, void (*del)(void *, size_t));`
  - **Example**:
    ```c
    ft_lstclear(&list, del_function);
    // all elements of list are deleted
    ```

- **ft_lstiter**: Iterates over a linked list and applies a function to each element.
  - **Prototype**: `void ft_lstiter(t_list *lst, void (*f)(t_list *elem));`
  - **Example**:
    ```c
    ft_lstiter(list, iter_function);
    // iter_function is applied to each element of list
    ```

- **ft_lstmap**: Iterates over a linked list, applies a function to each element, and creates a new list with the results.
  - **Prototype**: `t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));`
  - **Example**:
    ```c
    t_list *new_list = ft_lstmap(list, map_function);
    // new_list contains the results of applying map_function to each element of list
    ```

## Usage

To use libft in your projects, include the `libft.h` header file and link your project with the `libft.a` static library. Then, you can start using any of the functions provided by libft in your code.

### Example

```c
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