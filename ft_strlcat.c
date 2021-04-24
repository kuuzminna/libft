#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    
    while (dtsize && *src)
    {
        *dst = *src;
        *dst++;
        *src++;
        dtsize--;
    }
    *dst = '\0';
    return ()
}
char	*ft_strcat(char *dest, char *src)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (dest[num] != '\n')
	{
		num++;
	}
	while (src[i] != '\n')
	{
		dest[i + num] = src[i];
		i++;
	}
	dest[i + num] = '\n';
	return (dest);
}
