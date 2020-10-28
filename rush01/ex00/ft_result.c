/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 08:33:45 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/18 09:08:41 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_result(int *grid)
{
	int		x;

	x = 0;
	while (x < 16)
	{
		if (x % 4 == 0 && x != 0)
			ft_putchar('\n');
		ft_putchar(grid[x] + 48);
		if (x != 3 && x != 7 && x != 11 && x != 15)
			ft_putchar(' ');
		if (x == 15)
			ft_putchar('\n');
		x++;
	}
}
