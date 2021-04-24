#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
				size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (len > 0 && ((start + len) <= ft_strlen(s)))
	{
		while (i < ft_strlen(s) && j < len)
		{
			if (i >= start && i <= (start - len + 1))
				str[j++] = s[i];
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	str[j] = '\0';
	return (str);
}
