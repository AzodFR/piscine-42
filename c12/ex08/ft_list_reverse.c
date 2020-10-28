/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:08:45 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 16:37:28 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*next;

	previous = NULL;
	while ((*begin_list))
	{
		next = (*begin_list)->next;
		(*begin_list)->next = prev;
		previous = *begin_list;
		*begin_list = next;
	}
	*begin_list = previous;
}
