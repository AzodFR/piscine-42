/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_solve11.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:57:49 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 19:26:50 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve14_1(int *tab, int *grid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == 2 && grid[i + 12] == 4 && i < 4)
		{
			grid[i] = 3;
		}
		else if (tab[i] == 2 && grid[i - 4] == 4)
		{
			grid[i + 8] = 3;
		}
		i++;
	}
}

void	ft_basic_solve14_2(int *tab, int *grid)
{
	if (tab[8] == 2 && grid[3] == 4)
		grid[0] = 3;
	if (tab[9] == 2 && grid[7] == 4)
		grid[4] = 3;
	if (tab[10] == 2 && grid[11] == 4)
		grid[8] = 3;
	if (tab[11] == 2 && grid[15] == 4)
		grid[12] = 3;
	if (tab[12] == 2 && grid[0] == 4)
		grid[3] = 3;
	if (tab[13] == 2 && grid[4] == 4)
		grid[7] = 3;
	if (tab[14] == 2 && grid[8] == 4)
		grid[11] = 3;
	if (tab[15] == 2 && grid[12] == 4)
		grid[15] = 3;
}
