/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebertea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:36:08 by lebertea          #+#    #+#             */
/*   Updated: 2020/10/11 18:14:52 by lebertea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
			if ((j == 1 && i == 1) || (j == b && i == a))
				ft_putchar('o');
			else if ((j == b && i == 1) || (j == 1 && i == a))
				ft_putchar('o');
			else if ((i == 1) || (i == a))
				ft_putchar('|');
			else if ((j == 1) || (j == b))
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
	}
}
