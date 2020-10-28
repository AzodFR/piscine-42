/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dump.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 11:56:08 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/21 13:40:57 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_addr(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c % 16], 1);
}

void	ft_addr(int i)
{
	int		j;

	j = -1;
	while (++j < 8)
	{
		ft_print_addr(i >> (4 * (8 - j - 1)));
	}
	ft_putstr("  ", 1);
}

int		ft_strdumpcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (++i < 16)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}

void	ft_print_dump(char *src)
{
	int		j;

	j = -1;
	while (++j < 16)
	{
		ft_puthex(src[j]);
		if (j == 7)
			ft_putchar(' ', 1);
	}
	ft_putstr(" |", 1);
	j = -1;
	while (++j < 16)
	{
		if (src[j] < 32 || src[j] > 126)
			ft_putchar('.', 1);
		else
			ft_putchar(src[j], 1);
	}
	ft_putstr("|\n", 1);
}

int		ft_hexdump2(char *prev, char *actual, int k, int i)
{
	if (ft_strdumpcmp(actual, prev) == 0)
	{
		k++;
		if (k == 1)
			ft_putstr("*\n", 1);
	}
	else
	{
		ft_addr(i);
		ft_print_dump(actual);
		k = 0;
	}
	return (k);
}
