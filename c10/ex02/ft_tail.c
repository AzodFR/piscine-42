/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:18:41 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 15:09:46 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printfile(char *file, int nb, int j, int size)
{
	int		limit;

	limit = ft_get_file_len(file);
	if (size > 1)
	{
		if (j > 0)
			ft_putchar('\n', 1);
		ft_putstr("==> ", 1);
		ft_putstr(basename(file), 1);
		ft_putstr(" <==\n", 1);
	}
	ft_printfiles(file, nb, limit);
}

void	ft_tail(char **files, int size, int nb)
{
	int		i;
	int		file;
	int		j;
	int		k;

	j = 0;
	i = 3;
	k = i;
	while (i < size)
	{
		if ((file = open(files[i], O_DIRECTORY)) == -1)
		{
			if ((file = open(files[i], O_RDONLY)) == -1)
				ft_error(files, i, 0, ENOENT);
			else
			{
				ft_printfile(files[i], nb, j++, size - k);
				close(file);
			}
		}
		else
			ft_error(files, i, 1, EISDIR);
		i++;
	}
}

int		main(int ac, char **av)
{
	char	loop[0];

	if (ac < 2)
		ft_info_cmd(av[0]);
	else if (ft_strcmp(av[1], "-c") == 0)
	{
		if (ac == 2)
			ft_info_cmd(av[0]);
		else if (ac == 3 && ft_isnumb(av[2]))
			while (read(0, loop, 1))
			{
			}
		else if (!ft_isnumb(av[2]))
			ft_illegal(av[0], av[2]);
		else
			ft_tail(av, ac, ft_atoi(av[2]));
	}
	else if (ac > 1)
		ft_tail(av, ac, -1);
	return (0);
}
