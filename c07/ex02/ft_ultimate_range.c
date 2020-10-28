/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 11:10:17 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/12 19:07:34 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*intab;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	intab = malloc((max - min) * sizeof(int*));
	if (intab == NULL)
		return (-1);
	while (min < max)
	{
		intab[i] = min;
		min++;
		i++;
	}
	*range = intab;
	return (i);
}
