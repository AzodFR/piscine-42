/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:11:39 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 17:14:12 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*begin;

	begin = (*begin_list1)->next;
	while (begin->next)
		begin = begin->next;
	begin->next = begin_list2;
}
