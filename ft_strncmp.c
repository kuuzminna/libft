#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*str1 == *str2) && *str1 && *str2 && n - 1)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
