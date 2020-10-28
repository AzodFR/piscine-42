/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:29:12 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/08 01:42:38 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	first;
	char	last;

	first = 0;
	last = 1;
	while (first < 99)
	{
		ft_putchar(first / 10 + '0');
		ft_putchar(first % 10 + '0');
		ft_putchar(' ');
		ft_putchar(last / 10 + '0');
		ft_putchar(last % 10 + '0');
		if (first < 98)
			write(1, ", ", 2);
		if (++last > 99)
			last = ++first + 1;
	}
}
