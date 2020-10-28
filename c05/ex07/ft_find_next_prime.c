/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 14:01:23 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/12 19:13:12 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	while (i <= nb / 2 && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		ft_is_prime(int nb)
{
	int		i;
	int		max;

	if (nb < 2)
		return (0);
	else if (nb == 2 || nb == 3 || nb == 5 || nb == 7 ||
		nb == 11 || nb == 13 || nb == 17 || nb == 19 || nb == 2147483647)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0 ||
		nb % 11 == 0 || nb % 13 == 0 || nb % 17 == 0 || nb % 19 == 0)
		return (0);
	else
	{
		max = ft_sqrt(nb);
		i = 20;
		if (max != 0)
			return (0);
		while (i != nb && i < 46341)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
