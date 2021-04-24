#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*c;

	d = (unsigned char *) dst;
	c = (unsigned char *) src;
	while (len--)
	{
		*d++ = *c++;
	}
	return (dst);
}
