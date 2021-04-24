#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	int		i;
	int		j;
	size_t lenN;
	if (*haystack || *needle)
		return ()
	h = (char *)haystack;
	i = 0;
	j = 0;
	lenN = ft_strlen(*needle)
	if (!lenN)
		return (h);
    if (lenN > ft_strlen(*haystack) || lenN > len )
        return (NULL);
    while (haystack[i] && i < len)
	{
    	while (haystack[j + i] == needle[j] && j <= lenN)
		{
    		if (j == lenN - 1)
    			return()
    		j++;
    		i++;
		}
    	i++;
	}
    if (count == len)
    	return (h);
    else if (count > = 1)
    	return (*h)
}
