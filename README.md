![codam logo](https://www.datocms-assets.com/4526/1560770259-logocodamblack-copy.svg)

## ❔ Basic Overview

`libft` is a part of Codam (42 network) curriculum for 2020 cohort. The aim of this project is to re-code a set of the `libc` functions as well as a set of functions that are either not included in the libc, or included in a different form.

## ❕ Must Have Functions

| Function | Description |
| --- | --- |
| `memset(void *s, int c, size_t n)` | The `memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte c. |
| `bzero(void *s, size_t n)` | The `bzero()` function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing '\0') to that area. |
| `memcpy(void *dest, const void *src, size_t n)` | The `memcpy()` function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. |
| `memccpy(void *dest, const void *src, int c, size_t n)` | The `memccpy()` function copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. |
| `memmove(void *dest, const void *src, size_t n)` | The `memmove()` function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest. |
| `memchr(const void *s, int c, size_t n)` | The `memchr()` function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char. |
| `memcmp(const void *s1, const void *s2, size_t n)` | The `memcmp()` function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2. |
| `strlen(const char *s)` | The `strlen` function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0'). |
| `strlcpy(char *dst, const char *src, size_t size)` | The `strlcpy()` function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. |
| `strlcat(char *dst, const char *src, size_t size)` | The `strlcat()` function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. |
| `strchr(const char *s, int c)` | The `strchr()` function returns a pointer to the first occurrence of the character c in the string s. |
| `strrchr(const char *s, int c)` | The `strrchr()` function returns a pointer to the last occurrence of the character c in the string s. |
| `strnstr(const char *big, const char *little, size_t len)` | The `strnstr()` function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched. |
| `strncmp(const char *s1, const char *s2, size_t n)` | The `strncmp()` function is similar, except it compares only the first (at most) n bytes of s1 and s2. |
| `atoi(const char *nptr)` | The `atoi()` function converts the initial portion of the string pointed to by nptr to int. |
| `isalpha(int c)` | Checks for an alphabetic character. |
| `isdigit(int c)` | Checks for a digit (0 through 9). |
| `isalnum(int c)` | Checks for an alphanumeric character. |
| `isascii(int c)` | Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. |
| `isprint(int c)` | Checks for any printable character including space. |
| `toupper(int c)` | If c is a lowercase letter, `toupper()` returns its uppercase equivalent, if an uppercase representation exists in the current locale. Otherwise, it returns c. |
| `tolower(int c)` | If c is an uppercase letter, `tolower()` returns its lowercase equivalent, if a lowercase representation exists in the current locale. Otherwise, it returns c. |
| `calloc(size_t nmemb, size_t size)` | The `calloc()` function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then `calloc()` returns either NULL, or a unique pointer value that can later be successfully passed to `free()`. |
| `strdup(const char *s)` | The `strdup()` function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with `malloc()`, and can be freed with `free()`. |
| `ft_substr(char const *s, unsigned int start, size_t len)` | Allocates (with `malloc()`) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
| `ft_strjoin(char const *s1, char const *s2)` | Allocates (with `malloc()`) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| `ft_strtrim(char const *s1, char const *set)` | Allocates (with `malloc()`) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| `ft_split(char const *s, char c)` | Allocates (with `malloc()`) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. |
| `ft_itoa(int n)` | Allocates (with `malloc()`) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| `ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies the function ’f’ to each character of the string ’s’ to create a new string (with `malloc()`)resulting from successive applications of ’f’. |
| `ft_putchar_fd(char c, int fd)` | Outputs the character ’c’ to the given file descriptor. |
| `ft_putstr_fd(char *s, int fd)` | Outputs the string ’s’ to the given file descriptor. |
| `ft_putendl_fd(char *s, int fd)` | Outputs the string ’s’ to the given file descriptor, followed by a newline. |
| `ft_putnbr_fd(int n, int fd)` | Outputs the integer ’n’ to the given file descriptor. |

## 🎰 Bonus Functions

| Function | Description |
| --- | --- |
| `ft_lstnew(void *content)` | Allocates (with `malloc()`) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |
| `ft_lstadd_front(t_list **lst, t_list *new)` | Adds the element ’new’ at the beginning of the list. |
| `ft_lstsize(t_list *lst)` | Counts the number of elements in a list. |
| `ft_lstlast(t_list *lst)` | Returns the last element of the list. |
| `ft_lstadd_back(t_list **lst, t_list *new)` | Adds the element ’new’ at the end of the list. |
| `ft_lstdelone(t_list *lst, void (*del)(void *))` | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed. |
| `ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees the given element and every successor of that element, using the function ’del’ and `free()`. Finally, the pointer to the list must be set to NULL. |
| `ft_lstiter(t_list *lst, void (*f)(void *))` | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |
| `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed. |

## 💩 Moulinette Results

![Moulinette](https://github.com/kmoroz/ft_shrek/blob/master/other/Capture.JPG?raw=true)

