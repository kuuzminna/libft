/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggrapefr <ggrapefr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:48:23 by ggrapefr          #+#    #+#             */
/*   Updated: 2022/02/09 10:51:21 by ggrapefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    struct  list *temp,  *p;
    temp = (struct list*)malloc(sizeof(list));
    p = lst->ptr;
    lst->ptr = temp;
    lst->ptr = NULL;
    return(temp);
}
