/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:29:27 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/21 19:02:47 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

void	ft_info_cmd(char *name)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": option requires an argument -- c\n", 2);
	ft_putstr("usage: ", 2);
	ft_putstr(basename(name), 2);
	ft_putstr(" [-c #] [file ...]\n", 2);
}

void	ft_illegal(char *name, char *arg)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": illegal offset -- ", 2);
	ft_putstr(arg, 2);
	ft_putchar('\n', 2);
}
