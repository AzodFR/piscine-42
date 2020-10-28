/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_solve10.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:51:55 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 19:35:06 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve13_1(int *tab, int *grid)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == 3 && grid[i + 8] == 1 && grid[i + 12] == 4 && i < 4)
		{
			grid[i] = 2;
			grid[i + 4] = 3;
		}
		else if (tab[i] == 3 && grid[i] == 1 && grid[i - 4] == 4)
		{
			grid[i + 4] = 3;
			grid[i + 8] = 2;
		}
		i++;
	}
}

void	ft_basic_solve13_2(int *tab, int *grid)
{
	int		i;
	int		j;

	j = 0;
	i = 8;
	while (i < 12)
	{
		if (tab[i] == 3 && grid[j + 2] == 1 && grid[j + 3] == 4)
		{
			grid[j] = 2;
			grid[j + 1] = 3;
		}
		i++;
		j = j + 4;
	}
}

void	ft_basic_solve13_3(int *tab, int *grid)
{
	int		i;
	int		j;

	i = 12;
	j = 0;
	while (i < 16)
	{
		if (tab[i] == 3 && grid[j + 1] == 1 && grid[j] == 4)
		{
			grid[j + 2] = 3;
			grid[j + 3] = 2;
		}
		i++;
		j = j + 4;
	}
}
