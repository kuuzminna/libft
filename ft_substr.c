#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
				size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (len == 0)
		return (NULL);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && i <= (start + len - 1))
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
