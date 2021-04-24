#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
	int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;
	unsigned char	sym;

	sym = (unsigned char) c;
	str1 = (unsigned char *) dst;
	str2 = (unsigned char *) src;
	i = 0;
	while (str2[i] && n)
	{
		str1[i] = str2[i];
		if (sym == str1[i])
			return (str1);
		n--;
	}
	return (NULL);
}
