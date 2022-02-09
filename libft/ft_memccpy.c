/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrapefr <ggrapefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:48:26 by ggrapefr          #+#    #+#             */
/*   Updated: 2022/02/09 10:48:27 by ggrapefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
	int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) dst;
	str2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if ((unsigned char)c == str1[i])
			return (&str1[i + 1]);
		i++;
	}
	return (NULL);
}
