/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:52:39 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 14:53:09 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_tab(char **one, char **two)
{
	char *swap;

	swap = *one;
	*one = *two;
	*two = swap;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = 0;
		while (tab[j])
		{
			if ((*cmp)(tab[i], tab[j]) < 0)
				ft_swap_tab(&tab[i], &tab[j]);
			j++;
		}
	}
}
