/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:58:41 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/27 08:51:16 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_min(int a, int b, int c)
{
	int max;

	if (a > 0 && b > 0 && c > 0)
	{
		max = a;
		if (max > b)
			max = b;
		if (max > c)
			max = c;
		return (max);
	}
	return (0);
}

void	find_max_map(t_bsq *bsq, int i, int **i_map)
{
	int		y;

	if (bsq->size_tab > 1)
	{
		y = 0;
		while (y < bsq->size_line)
		{
			if (i_map[i][y] && i > 1 && y)
				i_map[i][y] = 1 + ft_min(i_map[i - 1][y - 1], i_map[i - 1][y],
					i_map[i][y - 1]);
			if (i_map[i][y] > bsq->max_charmap)
			{
				bsq->x = y;
				bsq->y = i;
				bsq->max_charmap = i_map[i][y];
			}
			y++;
		}
		free(i_map[i]);
		i++;
	}
	else
		else_is_one_line(bsq, i, i_map);
}

void	else_is_one_line(t_bsq *bsq, int i, int **i_map)
{
	int y;

	y = 0;
	bsq->y = i;
	while (y < bsq->size_line)
	{
		if (i_map[i][y] == 1 && !bsq->max_charmap)
		{
			bsq->max_charmap = 1;
			bsq->x = y;
		}
		y++;
	}
	free(i_map[i]);
}

void	finish_map(t_bsq *bsq, char **c_tab)
{
	int		x;
	int		y;
	int		i;
	int		z;

	x = bsq->x;
	y = bsq->y;
	i = 0;
	z = 0;
	while (z < bsq->max_charmap)
	{
		while (i < bsq->max_charmap)
		{
			c_tab[y][x] = bsq->full;
			x--;
			i++;
		}
		i = 0;
		x = bsq->x;
		y--;
		z++;
	}
}

void	algo(t_bsq *bsq, char **c_tab)
{
	int		**i_map;
	int		i;

	bsq->max_charmap = 0;
	i_map = map_char_to_int(bsq, c_tab);
	if (bsq->size_tab > 1)
	{
		i = 1;
		while (i <= bsq->size_tab)
			find_max_map(bsq, i++, i_map);
	}
	else
		find_max_map(bsq, 1, i_map);
	free(i_map);
	finish_map(bsq, c_tab);
}
