#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *a;

    while (*s)
    {
        if (c == *s)
            a = s;
        s++;
    }
    return (a);
}