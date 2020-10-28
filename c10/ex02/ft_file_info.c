/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:13:35 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 15:15:35 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_get_file_len(char *filename)
{
	int		i;
	char	c;
	int		file;

	i = 0;
	file = open(filename, O_RDONLY);
	while (read(file, &c, 1) > 0)
		i++;
	close(file);
	return (i);
}

void	ft_printfiles(char *filename, int nb, int limit)
{
	char	c;
	int		i;
	int		j;
	int		file;

	j = 0;
	i = 0;
	file = open(filename, O_RDONLY);
	nb = (limit - nb < 0) ? limit : nb;
	while (read(file, &c, 1))
	{
		if (i >= limit - nb)
			ft_putchar(c, 1);
		i++;
	}
	close(file);
}
