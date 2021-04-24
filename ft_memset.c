#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char d;
    char a;

    while (len--)
    {
        *a++ = c;
    }
    return (b);
}