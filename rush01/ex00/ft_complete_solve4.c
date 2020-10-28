/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_solve4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:00:43 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 18:52:00 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve7_1(int *tab, int *grid)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tab[i] + tab[i + 4] == 5 && tab[i] != 1 && tab[i] != 4)
		{
			grid[(4 * (tab[i] - 1)) + i] = 4;
		}
		i++;
	}
}

void	ft_basic_solve7_2(int *tab, int *grid)
{
	int i;
	int j;

	i = 8;
	j = -3;
	while (i < 12)
	{
		j += 4;
		if (tab[i] + tab[i + 4] == 5 && tab[i] != 1 && tab[i] != 4)
			grid[j + ((tab[i] > tab[i + 4]) ? 1 : 0)] = 4;
		i++;
	}
}
