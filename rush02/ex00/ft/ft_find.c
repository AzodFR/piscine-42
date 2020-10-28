/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:33:19 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 19:01:13 by jlaronch         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

int		ft_finddigits(int nb)
{
	int		i;

	i = -1;
	while (g_digits[i].nb != nb)
		i++;
	return (i);
}

int		ft_findtens(int nb)
{
	int		i;

	i = -1;
	while (g_tens_digits[i].nb != nb)
		i++;
	return (i);
}

int		ft_findmultiples(int nb)
{
	int		i;

	i = -1;
	while (g_multiples[i].nb != nb)
		i++;
	return (i);
}
