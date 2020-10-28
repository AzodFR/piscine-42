/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:32:20 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/15 18:44:31 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (0);
	while (i + min < max)
	{
		ptr[i] = i + min;
		i++;
	}
	return (ptr);
}
