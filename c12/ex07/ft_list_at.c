/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:03:50 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 16:07:39 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (begin_list == NULL)
		return (NULL);
	while (begin_list->next)
	{
		if (nbr == i)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	if (i > nbr)
		return (NULL);
}
