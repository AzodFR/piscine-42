/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:26:22 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 11:41:13 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		config_map(char **c_tab, t_bsq *bsq)
{
	int		i;
	int		y;

	i = ft_strlen(c_tab[0]);
	y = 0;
	bsq->full = c_tab[0][--i];
	c_tab[0][i] = 'b';
	bsq->wall = c_tab[0][--i];
	c_tab[0][i] = 's';
	bsq->vide = c_tab[0][--i];
	c_tab[0][i] = 'q';
	bsq->size_tab = ft_atoi(c_tab[0]);
	while (y < i - 3)
	{
		if (c_tab[0][y] > '9' || c_tab[0][y] < '0')
			return (0);
		y++;
	}
	return (1);
}

int		map(char **c_tab, t_bsq *bsq)
{
	int		i;
	int		y;

	i = 1;
	y = 0;
	bsq->size_line = ft_strlen(c_tab[1]);
	if (config_map(c_tab, bsq) == 0)
		return (0);
	while (c_tab[i])
	{
		if (ft_strlen(c_tab[i]) != bsq->size_line)
			return (0);
		else
		{
			while (y < bsq->size_line)
			{
				if (c_tab[i][y] != bsq->vide && c_tab[i][y] != bsq->wall)
					return (0);
				y++;
			}
			y = 0;
			i++;
		}
	}
	return (!(i != bsq->size_tab + 1));
}

int		**map_char_to_int(t_bsq *bsq, char **c_tab)
{
	int		i;
	int		max;
	int		**i_map;

	i = 1;
	max = 0;
	while (c_tab[max])
		max++;
	if (!(i_map = malloc(sizeof(char *) * (max))))
		clean_shortcut(c_tab, bsq);
	i_map[max] = NULL;
	while (i < max)
		i_map = map_char_to_pt_two(bsq, c_tab, i++, i_map);
	return (i_map);
}

int		**map_char_to_pt_two(t_bsq *bsq, char **c_tab, int i, int **i_map)
{
	int		y;

	y = 0;
	if (!(i_map[i] = malloc(sizeof(int) * ft_strlen(c_tab[i]) - 1)))
	{
		while (i)
			free(i_map[i--]);
		clean_shortcut(c_tab, bsq);
	}
	while (c_tab[i][y])
	{
		if (c_tab[i][y] == bsq->wall)
			i_map[i][y] = 0;
		else
			i_map[i][y] = 1;
		y++;
	}
	return (i_map);
}
