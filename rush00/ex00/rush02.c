/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebertea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 08:49:49 by lebertea          #+#    #+#             */
/*   Updated: 2020/10/11 09:46:17 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (j++ < b)
	{
		i = 1;
		while (i != a + 1)
		{
			if ((j == 1 && i == 1) || (j == 1 && i == a))
				ft_putchar('A');
			else if ((j == b && i == 1) || (j == b && i == a))
				ft_putchar('C');
			else if ((j == 1) || (i == 1) || (j == b) || (i == a))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
	}
}
