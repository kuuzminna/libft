/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrapefr <ggrapefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:50:38 by ggrapefr          #+#    #+#             */
/*   Updated: 2022/02/09 10:50:39 by ggrapefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*c;

	if (!(dst) && !(src))
		return (NULL);
	d = (unsigned char *) dst;
	c = (unsigned char *) src;
	if (c < d)
		while (len--)
			d[len] = c[len];
	else
		while (len--)
			*d++ = *c++;
	return (dst);
}
