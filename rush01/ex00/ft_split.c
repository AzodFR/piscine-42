/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spli.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:39:34 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/17 00:13:08 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_find_next_sep(char *str, char *charset, int index)
{
	while (str[index])
	{
		if ((ft_is_sep(str[index], charset)))
			return (index);
		index++;
	}
	return (index);
}

int		ft_count_malloc(char *str, char *charset, int atword, int getindex)
{
	int		i;
	int		count;
	int		on_sep;

	i = 0;
	count = 0;
	on_sep = 0;
	while (str[i])
	{
		if ((on_sep || i == 0) && !ft_is_sep(str[i], charset))
		{
			on_sep = 0;
			if (atword == count)
			{
				if (getindex)
					return (i);
				return (ft_find_next_sep(str, charset, i) - i);
			}
			count++;
		}
		else if (ft_is_sep(str[i], charset))
			on_sep = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**tab;
	int		index;
	int		next;
	int		i;

	count = ft_count_malloc(str, charset, -1, 0);
	if (!(tab = malloc((count + 1) * sizeof(char*))))
		return (NULL);
	if (!(tab[count] = malloc(1 * sizeof(char))))
		return (NULL);
	tab[count] = 0;
	while (count-- >= 0)
	{
		i = ft_count_malloc(str, charset, count, 0);
		if (!(tab[count] = malloc((i + 1) * sizeof(char))))
			return (NULL);
		index = ft_count_malloc(str, charset, count, 1);
		next = ft_find_next_sep(str, charset, index);
		if (next - index != 1)
			return (NULL);
		tab[count][0] = str[index];
		tab[count][i] = '\0';
	}
	return (tab);
}
