/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_solve7.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:58:47 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 19:20:00 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve10_1(int *tab, int *grid)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == 2 && grid[i + 8] == 4 && grid[i + 12] == 2 && i < 4)
		{
			grid[i] = 3;
			grid[i + 4] = 1;
		}
		else if (tab[i] == 2 && grid[i] == 4 && grid[i - 4] == 2)
		{
			grid[i + 4] = 1;
			grid[i + 8] = 3;
		}
		i++;
	}
}

void	ft_basic_solve10_2(int *tab, int *grid)
{
	int		i;
	int		j;

	j = 0;
	i = 8;
	while (i < 12)
	{
		if (tab[i] == 2 && grid[j + 2] == 4 && grid[j + 3] == 2)
		{
			grid[j] = 3;
			grid[j + 1] = 1;
		}
		i++;
		j = j + 4;
	}
}

void	ft_basic_solve10_3(int *tab, int *grid)
{
	int		i;
	int		j;

	i = 12;
	j = 0;
	while (i < 16)
	{
		if (tab[i] == 2 && grid[j + 1] == 4 && grid[j] == 2)
		{
			grid[j + 2] = 1;
			grid[j + 3] = 3;
		}
		i++;
		j = j + 4;
	}
}
