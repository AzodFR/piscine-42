/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgoudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 12:09:42 by pgoudet           #+#    #+#             */
/*   Updated: 2020/10/11 12:10:37 by pgoudet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (j <= b)
	{
		i = 1;
		while (i != a + 1)
		{
			if ((j == 1 && i == 1) || (j == b && i == a))
				ft_putchar('A');
			else if ((j == 1 && i == a) || (j == b && i == 1))
				ft_putchar('C');
			else if ((i == 1) || (i == a) || (j == b) || (j == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
