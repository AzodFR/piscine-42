/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:04:47 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/21 08:03:46 by thjacque         ###   ########lyon.fr   */
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

void	ft_puthex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16], 1);
	ft_putchar(base[c % 16], 1);
	ft_putchar(' ', 1);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!(ptr = (char*)malloc(16 * sizeof(char))))
		return (NULL);
	while (i < 16)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
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
