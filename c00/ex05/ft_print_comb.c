/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 11:16:51 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/06 16:44:56 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char *num)
{
	write(1, num, 3);
	if (num[0] < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] < '8')
	{
		while (num[1] < '9')
		{
			while (num[2] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
					ft_print_numbers(num);
				num[2]++;
			}
			num[2] = '0';
			num[1]++;
		}
		num[2] = '0';
		num[1] = '0';
		num[0]++;
	}
}
