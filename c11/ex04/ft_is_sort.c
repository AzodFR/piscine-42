/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:13:30 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 08:21:40 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		j;

	if (length == 1 || length == 0)
		return (1);
	if (length < 0)
		return (0);
	i = 0;
	j = 0;
	while (++i < length)
		if ((*f)(tab[i - 1], tab[i]) <= 0)
			j++;
	if (j == length - 1)
		return (1);
	i = 0;
	j = 0;
	while (++i < length)
		if ((*f)(tab[i - 1], tab[i]) >= 0)
			j++;
	if (j == length - 1)
		return (1);
	return (0);
}
