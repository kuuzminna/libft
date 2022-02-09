/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrapefr <ggrapefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:48:29 by ggrapefr          #+#    #+#             */
/*   Updated: 2022/02/09 10:48:30 by ggrapefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	sym;

	str = (unsigned char *) s;
	sym = (unsigned char) c;
	while (*str && n)
	{
		if (*str == sym)
			return (str);
		str++;
		n--;
	}
	if (n > 0 && sym == '\0')
		return (str);
	return (NULL);
}
