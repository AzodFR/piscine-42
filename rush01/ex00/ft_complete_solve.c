/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_solve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 10:15:20 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 18:58:32 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve2_1(int *tab, int *grid)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == 1 && i < 4)
			grid[0 + i] = 4;
		else if (tab[i] == 1)
			grid[8 + i] = 4;
		i++;
	}
}

void	ft_basic_solve2_2(int *tab, int *grid)
{
	if (tab[8] == 1)
		grid[0] = 4;
	if (tab[9] == 1)
		grid[4] = 4;
	if (tab[10] == 1)
		grid[8] = 4;
	if (tab[11] == 1)
		grid[12] = 4;
	if (tab[12] == 1)
		grid[3] = 4;
	if (tab[13] == 1)
		grid[7] = 4;
	if (tab[14] == 1)
		grid[11] = 4;
	if (tab[15] == 1)
		grid[15] = 4;
}

void	ft_basic_solve3_1(int *tab, int *grid)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == 2 && grid[0 + i] == 1 && i < 4)
			grid[4 + i] = 4;
		else if (tab[i] == 2 && grid[8 + i] == 1)
			grid[i + 4] = 4;
		i++;
	}
}

void	ft_basic_solve3_2(int *tab, int *grid)
{
	if (tab[8] == 2 && grid[0] == 1)
		grid[1] = 4;
	if (tab[9] == 2 && grid[4] == 1)
		grid[5] = 4;
	if (tab[10] == 2 && grid[8] == 1)
		grid[9] = 4;
	if (tab[11] == 2 && grid[12] == 1)
		grid[13] = 4;
	if (tab[12] == 2 && grid[3] == 1)
		grid[2] = 4;
	if (tab[13] == 2 && grid[7] == 1)
		grid[6] = 4;
	if (tab[14] == 2 && grid[11] == 1)
		grid[10] = 4;
	if (tab[15] == 2 && grid[15] == 1)
		grid[14] = 4;
}
