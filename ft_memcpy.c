#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*d;
	unsigned char	*c;

	d = (unsigned char *) dst;
	c = (unsigned char *) src;
	while (n--)
	{
		*d++ = *c++;
	}
	return (dst);
}
