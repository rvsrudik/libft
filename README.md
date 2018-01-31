function          | synopsis       |                                  description
------------------|---------------------------------------------|--------------------
[ft_bzero.c ]     | void  ft_bzero(void *s, size_t n)           
The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing. ||
[ft_memcpy.c]     | void    *ft_memcpy(void *dst, void const *src, size_t n) |  The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
[ft_memccpy.c]    | void    *ft_memccpy(void *dst, const void *src, int c, size_t n)     |    The memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.The source and destination strings should not overlap, as the behavior is undefined.
[ft_memmove.c]    | void    *ft_memmove(void *tmp1, const void *tmp2, size_t len)     |    The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
[ft_memchr.c]     | void    *ft_memchr(const void *s, int c, size_t n)     |   The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
[ft_memcmp.c]     | int     ft_memcmp(const void *s1, const void *s2, size_t n)     |    The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
[ft_memset.c]     | void    *ft_memset(void *b, int c, size_t len)     |  
[ft_strlen.c]     | size_t  ft_strlen(const char *s)     |  
[ft_strdup.c]     | char    *ft_strdup(const char *s1)     |  
[ft_strcpy.c]     | char    *ft_strcpy(char *dest, const char *src)     |  
[ft_strncpy.c]    | char    *ft_strncpy(char *dest, const char *src, size_t len)     |  
[ft_strcat.c]     | char    *ft_strcat(char *s1, const char *s2)     |  
[ft_strncat.c]    | char    *ft_strncat(char *s1, const char *s2, size_t n)     |  
[ft_strlcat.c]    | size_t  ft_strlcat(char *dst, const char *src, size_t size)     |  
[ft_strchr.c]     | char    *ft_strchr(const char *s, int c)     |  
[ft_strrchr.c]    | char    *ft_strrchr(const char *s, int c)     |  
[ft_strstr.c]     | char    *ft_strstr(const char *str, const char *to_find)     |  
[ft_strnstr.c]    | char    *ft_strnstr(const char *str, const char *to_f, size_t len)     |  
[ft_strcmp.c]     | int      ft_strcmp(const char *s1, const char *s2)     |  
[ft_strncmp.c]    | int     ft_strncmp(const char *s1, const char *s2, size_t n)     |  
[ft_atoi.c]       | int     ft_atoi(const char *str)     |  
[ft_isalpha.c]    | int     ft_isalpha(int c)     |  
[ft_isdigit.c]    | int      ft_isdigit(int c)     |  
[ft_isalnum.c]    | int ft_isalnum(int c)     |  
[ft_isascii.c]    | int     ft_isascii(int c)     |  
[ft_isprint.c]    | int     ft_isprint(int c)     |  
[ft_toupper.c]    | int     ft_toupper(int c)     |  
[ft_tolower.c]     | int     ft_tolower(int c)     |  






[ft_bzero.c ]:https://github.com/rvsrudik/libft/blob/master/ft_bzero.c 
[ft_memcpy.c]:https://github.com/rvsrudik/libft/blob/master/ft_memcpy.c
[ft_memccpy.c]:https://github.com/rvsrudik/libft/blob/master/ft_memccpy.c
[ft_memmove.c]:https://github.com/rvsrudik/libft/blob/master/ft_memmove.c
[ft_memchr.c]:https://github.com/rvsrudik/libft/blob/master/ft_memchr.c
[ft_memcmp.c]:https://github.com/rvsrudik/libft/blob/master/ft_memcmp.c
[ft_memset.c]:https://github.com/rvsrudik/libft/blob/master/ft_memset.c
[ft_strlen.c]:https://github.com/rvsrudik/libft/blob/master/ft_strlen.c
[ft_strdup.c]:https://github.com/rvsrudik/libft/blob/master/ft_strdup.c
[ft_strcpy.c]:https://github.com/rvsrudik/libft/blob/master/ft_strcpy.c
[ft_strncpy.c]:https://github.com/rvsrudik/libft/blob/master/ft_strncpy.c
[ft_strcat.c]:https://github.com/rvsrudik/libft/blob/master/ft_strcat.c
[ft_strncat.c]:https://github.com/rvsrudik/libft/blob/master/ft_strncat.c
[ft_strlcat.c]:https://github.com/rvsrudik/libft/blob/master/ft_strlcat.c
[ft_strchr.c]:https://github.com/rvsrudik/libft/blob/master/ft_strchr.c
[ft_strrchr.c]:https://github.com/rvsrudik/libft/blob/master/ft_strrchr.c
[ft_strstr.c]:https://github.com/rvsrudik/libft/blob/master/ft_strstr.c
[ft_strnstr.c]:https://github.com/rvsrudik/libft/blob/master/ft_strnstr.c
[ft_strcmp.c]:https://github.com/rvsrudik/libft/blob/master/ft_strcmp.c
[ft_strncmp.c]:https://github.com/rvsrudik/libft/blob/master/ft_strncmp.c
[ft_atoi.c]:https://github.com/rvsrudik/libft/blob/master/ft_atoi.c 
[ft_isalpha.c]:https://github.com/rvsrudik/libft/blob/master/ft_isalpha.c
[ft_isdigit.c]:https://github.com/rvsrudik/libft/blob/master/ft_isdigit.c
[ft_isalnum.c]:https://github.com/rvsrudik/libft/blob/master/ft_isalnum.c
[ft_isascii.c]:https://github.com/rvsrudik/libft/blob/master/ft_isascii.c
[ft_isprint.c]:https://github.com/rvsrudik/libft/blob/master/ft_isprint.c
[ft_toupper.c]:https://github.com/rvsrudik/libft/blob/master/ft_toupper.c
[ft_tolower.c]:https://github.com/rvsrudik/libft/blob/master/ft_tolower.c


