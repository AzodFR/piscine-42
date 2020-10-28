/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete_solve9.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:49:05 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 19:36:11 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve12_1(int *tab, int *grid)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (tab[i] == 3 && grid[i + 8] == 2 && grid[i + 12] == 4 && i < 4)
		{
			grid[i] = 1;
			grid[i + 4] = 3;
		}
		else if (tab[i] == 3 && grid[i] == 2 && grid[i - 4] == 4)
		{
			grid[i + 4] = 3;
			grid[i + 8] = 1;
		}
		i++;
	}
}

void	ft_basic_solve12_2(int *tab, int *grid)
{
	int		i;
	int		j;

	j = 0;
	i = 8;
	while (i < 12)
	{
		if (tab[i] == 3 && grid[j + 2] == 2 && grid[j + 3] == 4)
		{
			grid[j] = 1;
			grid[j + 1] = 3;
		}
		i++;
		j = j + 4;
	}
}

void	ft_basic_solve12_3(int *tab, int *grid)
{
	int		i;
	int		j;

	i = 12;
	j = 0;
	while (i < 16)
	{
		if (tab[i] == 3 && grid[j + 1] == 2 && grid[j] == 4)
		{
			grid[j + 2] = 3;
			grid[j + 3] = 1;
		}
		i++;
		j = j + 4;
	}
}
