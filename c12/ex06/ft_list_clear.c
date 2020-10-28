/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:22:49 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 16:05:59 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*todelete;

	while (begin_list->next)
	{
		todelete = begin_list;
		if (free_fct)
			(*free_fct)(begin_list->data);
		begin_list = begin_list->next;
		free(todelete);
	}
}
