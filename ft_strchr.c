#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t 	i;

	str = (char *)s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (*str == c)
			return (str);
		else
			str++;
	}
	return (NULL);
}
