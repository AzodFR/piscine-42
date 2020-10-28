/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:43:38 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 15:59:36 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*newlist;
	t_list	*begin;

	i = -1;
	begin = NULL;
	while (++i < size)
	{
		newlist = ft_create_elem(strs[i]);
		if (!begin)
			begin = newlist;
		else
		{
			newlist->next = begin;
			begin = newlist;
		}
	}
	return (begin);
}
