/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:14:56 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 14:41:36 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_get_last_printable(char *str)
{
	int		i;

	i = 16;
	while (i-- >= 0)
		if (str[i] != 0)
			return (i);
	return (0);
}

int		ft_check_str(char *str, int size)
{
	int		i;

	i = 15;
	if (str[i] == str[i - 1] && str[i] == 0)
		return (ft_get_last_printable(str));
	return (size - 1);
}

void	ft_printend(char *actual, int k, int addr)
{
	int		m;

	m = -1;
	ft_addr(addr);
	while (++m <= k)
	{
		if (m == 8 && k > 7)
			ft_putstr(" ", 1);
		else
			ft_puthex(actual[m]);
	}
	while (++m < 49 - k * 3)
		ft_putstr(" ", 1);
	(k % 2 == 0) ? ft_putstr("  |", 1) : ft_putstr(" |", 1);
	m = -1;
	while (++m <= k)
	{
		if (actual[m] < 32 || actual[m] > 126)
			ft_putchar('.', 1);
		else
			ft_putchar(actual[m], 1);
	}
	ft_putstr("|\n", 1);
	ft_addr(addr + k + 1);
	ft_putstr("\n", 1);
}

void	ft_endump(int i, char *text, int size)
{
	char	*actual;
	int		j;
	int		k;

	actual = ft_strdup("");
	j = -1;
	if (text[size] == 0)
		k = size - i - 1;
	while (++j < 16)
		actual[j] = text[i + j];
	if (!k)
		k = ft_check_str(actual, size);
	if (k >= 0)
		ft_printend(actual, k, i);
	else
	{
		ft_addr(i + k);
		ft_putstr("\n", 1);
	}
}
