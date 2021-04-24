#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include "stddef.h"
#include <stdio.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_isspace(char c);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);

char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char	*ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int     ft_putchar(int c);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr(int nb);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl(char *s);
void    ft_putendl_fd(char *s, int fd);
void    ft_putstr(char *str);
void    ft_putstr_fd(char *s, int fd);

char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif