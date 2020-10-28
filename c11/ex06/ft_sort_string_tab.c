/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:25:39 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/21 11:41:15 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap_tab(char **one, char **two)
{
	char *swap;

	swap = *one;
	*one = *two;
	*two = swap;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i])
	{
		j = 0;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) < 0)
				ft_swap_tab(&tab[i], &tab[j]);
			j++;
		}
	}
}
