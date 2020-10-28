/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgoudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 09:04:48 by pgoudet           #+#    #+#             */
/*   Updated: 2020/10/11 10:32:12 by pgoudet          ###   ########lyon.fr   */
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
			if ((i == 1 && j == 1) || (i == a && j == b))
				ft_putchar('/');
			else if ((i == 1 && j == b) || (i == a && j == 1))
				ft_putchar('\\');
			else if ((i == 1 || i == a || j == 1 || j == b))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
