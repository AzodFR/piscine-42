/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 08:30:29 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/19 18:08:09 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

void	ft_putchar(char c, int out)
{
	write(out, &c, 1);
}

void	ft_putstr(char *str, int out)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], out);
}

void	ft_error(char **av, int file, int isdir, int error)
{
	ft_putstr(basename(av[0]), 2);
	ft_putstr(": ", 2);
	if (isdir)
		ft_putstr(basename(av[file]), 2);
	else
		ft_putstr(basename(av[file]), 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(error), 2);
	ft_putchar('\n', 2);
}

void	ft_cat(char **files, int size)
{
	int		i;
	int		file;
	char	c;

	i = 1;
	while (i < size)
	{
		if ((file = open(files[i], O_DIRECTORY)) == -1)
		{
			if ((file = open(files[i], O_RDONLY)) == -1)
			{
				ft_error(files, i, 0, ENOENT);
				close(file);
			}
			else
			{
				while (read(file, &c, 1) > 0)
					ft_putchar(c, 1);
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
	char	c;

	if (ac < 2)
	{
		while (read(0, &c, 1) > 0)
			ft_putchar(c, 1);
	}
	else
	{
		ft_cat(av, ac);
	}
	return (0);
}
