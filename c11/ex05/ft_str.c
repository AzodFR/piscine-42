/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:13:44 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/21 11:14:22 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_atoi(char *str)
{
	int		numb;
	int		neg;
	int		i;

	numb = 0;
	neg = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb *= 10;
		numb += str[i] - '0';
		i++;
	}
	return ((neg % 2 == 0) ? numb : -numb);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
