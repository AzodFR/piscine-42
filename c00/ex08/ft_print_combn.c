/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:38:02 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 08:28:03 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int tab[], int n)
{
	int		i;

	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + '0');
	if (tab[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_loop(int i, int tab[], int n)
{
	if (i == 0)
		tab[i] = 0;
	else
		tab[i] = tab[i - 1] + 1;
	while (tab[i] < 10 - n + i + 1)
	{
		if (i < n - 1)
			ft_loop(i + 1, tab, n);
		if (i == n - 1)
			ft_print_tab(tab, n);
		tab[i] = tab[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int tab[n];

	ft_loop(0, tab, n);
}
