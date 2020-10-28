/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:44:12 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 11:39:43 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	cleaner_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	while (i >= 0)
		free(tab[i--]);
	free(tab);
}

void	clean_shortcut(char **tab, t_bsq *bsq)
{
	cleaner_tab(tab);
	free(bsq);
	write(1, "map error\n", 10);
}
