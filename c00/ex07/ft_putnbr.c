/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:19:54 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/07 23:15:12 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	base;

	if (nb < 0)
	{
		ft_putchar('-');
		base = -nb;
	}
	else
		base = nb;
	if (base >= 10)
	{
		ft_putnbr(base / 10);
	}
	nb = base % 10 + '0';
	ft_putchar(nb);
}
