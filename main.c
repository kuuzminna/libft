#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\f'
		|| c == '\t' || c == '\v' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * neg);
}

int main(void)
{
    int c = 5;
    printf("%d\n", atoi("99999999999999999999999999"));
	printf("%d\n", ft_atoi("99999999999999999999999999"));
    return 0;
}
