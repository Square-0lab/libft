#ifndef libft_h
# define libft_h
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
size_t  ft_strlen(const char *str);
char *strdup(const char *s);
void		*ft_memmove(void *dest, const void *src, size_t n);
char *ft_strstr(const char *haystack, const char *needle);
char    *ft_strrchr(const char *str, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strncat(char *dest, const char *src, size_t n);
size_t  ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strdup(const char *s);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *str1, const char *str2);
char    *ft_strchr(const char *str, int c);
char *ft_strcat(char *dest, const char *src);
int ft_atoi(const char *str);
int ft_isascii(int x);
int ft_isalpha(int  x);
int ft_isalnum(int  x);
int ft_isdigit(int x);
int ft_isprint(int x);
int ft_toupper(int x);
int ft_tolower(int x);
void *ft_calloc( size_t elementCount, size_t elementSize );
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
#endif