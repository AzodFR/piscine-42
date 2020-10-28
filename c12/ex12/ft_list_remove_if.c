/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:50:43 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 17:31:33 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*actual;
	t_list	*prec;

	prec = NULL;
	actual = *begin_list;
	while (actual != NULL)
	{
		if ((*cmp)((*begin_list)->data, data_ref))
		{
			if (prec)
				prec->next = actual->next;
			else
				prec->next = (*begin_list)->next;
			(*free_fct)(actual->data);
			free(actual);
			actual = (prec != NULL) ? prec->next : (*begin_list)->next;
		}
		else
		{
			prec = actual;
			actual = actual->next;
		}
	}
}
