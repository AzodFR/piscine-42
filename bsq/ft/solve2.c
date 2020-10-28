/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:21:22 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 11:40:58 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		isprintable(char c)
{
	return (c >= ' ' && c <= '~');
}

int		checkerr(t_bsq *bsq)
{
	if (bsq->wall == bsq->full || bsq->wall == bsq->vide ||
			bsq->vide == bsq->full)
		return (0);
	else if (!isprintable(bsq->full) || !isprintable(bsq->wall) ||
			!isprintable(bsq->vide))
		return (0);
	return (1);
}

int		cleanfdsize(int fdsize, char *line)
{
	while (!line[fdsize])
		fdsize -= 420;
	while (line[fdsize])
		fdsize++;
	return (fdsize);
}

void	bsq(char *line, int fdsize)
{
	t_bsq	*bsq;
	char	**c_tab;
	int		i;
	int		y;

	i = 1;
	y = 0;
	if (!(bsq = malloc(sizeof(t_bsq))))
		exit(EXIT_FAILURE);
	fdsize = cleanfdsize(fdsize, line);
	c_tab = ft_split(line, "\n", fdsize);
	if (map(c_tab, bsq) == 0 || !checkerr(bsq))
		clean_shortcut(c_tab, bsq);
	else
	{
		algo(bsq, c_tab);
		while (c_tab[i])
		{
			write(1, c_tab[i], bsq->size_line);
			free(c_tab[i++]);
			ft_putstr("\n");
		}
		free(c_tab);
	}
}
