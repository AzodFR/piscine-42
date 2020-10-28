/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 09:14:07 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/18 18:30:21 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_fillfourtop(int *tab, int *grid)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (i < 4)
	{
		x = 1;
		if (tab[i] == 4)
		{
			while (x < 5)
			{
				grid[i + y] = x++;
				y += 4;
			}
		}
		i++;
	}
}

void	ft_fillfourbot(int *tab, int *grid)
{
	int		x;
	int		y;
	int		i;

	y = 8;
	i = 4;
	while (i < 8)
	{
		x = 1;
		if (tab[i] == 4)
		{
			while (x < 5)
			{
				grid[i + y] = x++;
				y -= 4;
			}
		}
		i++;
	}
}

void	ft_fillfourleft(int *tab, int *grid)
{
	int		x;
	int		y;
	int		i;
	int		tmp;

	y = -4;
	i = 8;
	while (i < 12)
	{
		y += 4;
		x = 1;
		if (tab[i] == 4)
		{
			tmp = y;
			while (x < 5)
			{
				grid[y] = x++;
				y += 1;
			}
			y = tmp;
		}
		i++;
	}
}

void	ft_fillfourright(int *tab, int *grid)
{
	int		x;
	int		y;
	int		i;
	int		tmp;

	y = -1;
	i = 12;
	while (i < 16)
	{
		y += 4;
		x = 1;
		if (tab[i] == 4)
		{
			tmp = y;
			while (x < 5)
			{
				grid[y] = x++;
				y -= 1;
			}
			y = tmp;
		}
		i++;
	}
}

void	ft_fillfour(int *tab, int *grid)
{
	ft_fillfourtop(tab, grid);
	ft_fillfourbot(tab, grid);
	ft_fillfourleft(tab, grid);
	ft_fillfourright(tab, grid);
}
