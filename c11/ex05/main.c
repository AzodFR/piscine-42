/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:36:19 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 11:40:25 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_result(int res)
{
	ft_putnbr(res);
	ft_putstr("\n");
}

void	ft_doop(int a, int b, char c)
{
	int		(*ft_op[5])(int, int);
	int		sign;

	ft_op[0] = &sum;
	ft_op[1] = &sub;
	ft_op[2] = &mul;
	ft_op[3] = &div;
	ft_op[4] = &mod;
	if (c == '+')
		sign = 0;
	else if (c == '-')
		sign = 1;
	else if (c == '*')
		sign = 2;
	else if (c == '/')
		sign = 3;
	else if (c == '%')
		sign = 4;
	else
		return (ft_putstr("0\n"));
	if (sign > 2 && b == 0)
		return ((sign == 3) ? ft_putstr("Stop : division by zero\n")
				: ft_putstr("Stop : modulo by zero\n"));
	else
		ft_print_result(ft_op[sign](a, b));
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (ft_strlen(av[2]) == 1)
			ft_doop(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]);
		else
			ft_putstr("0\n");
	}
	return (0);
}
