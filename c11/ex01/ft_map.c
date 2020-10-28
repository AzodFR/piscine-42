/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 08:51:56 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/21 09:00:35 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*newtab;
	int		i;

	i = -1;
	if (!(newtab = malloc(length * sizeof(int))))
		return (NULL);
	while (++i < length)
		newtab[i] = (*f)(tab[i]);
	return (newtab);
}
