/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsylvest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:38:26 by lsylvest          #+#    #+#             */
/*   Updated: 2020/10/28 10:09:45 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int		ft_splitstrlen(char *str, int sizefd)
{
	if (!str)
		return (0);
	while (!str[sizefd])
		sizefd -= 420;
	while (str[sizefd])
		sizefd++;
	return (sizefd);
}

int		count_tab(char bin[], char *str, int count, int note)
{
	int		i;
	int		hey;

	if (!ft_strlen(str))
		return (0);
	i = 0;
	hey = 0;
	while (bin[i])
	{
		if (bin[i] == '1')
		{
			if (i)
				note++;
			while (bin[i] == '1')
				i++;
			if (note && bin[i] == '0')
				count++;
		}
		else
		{
			hey = 1;
			i++;
		}
	}
	return (count + hey);
}

void	ft_search(char *str, char *chrs, char bin[], int sizefd)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (!ft_splitstrlen(str, sizefd))
		return ;
	while (str[i])
	{
		bin[i] = '0';
		while (chrs && chrs[y])
		{
			if (str[i] == chrs[y])
				bin[i] = '1';
			y++;
		}
		y = 0;
		i++;
	}
}

char	*ft_line(char *str, int *i, char bin[])
{
	int		y;
	int		lost;
	char	*ret;

	lost = 0;
	y = 0;
	if (*i == 0)
		while (bin[*i] == '1')
			*i += 1;
	while (bin[*i] == '0')
	{
		*i += 1;
		y++;
	}
	if (!(ret = malloc(sizeof(char) * y + 1)))
		return (NULL);
	ret[y--] = '\0';
	while (y && *i - lost > -1)
		ret[y--] = str[*i - ++lost];
	ret[y] = str[*i - ++lost];
	while (bin[*i] == '1')
		*i += 1;
	return (ret);
}

char	**ft_split(char *str, char *charset, int sizefd)
{
	int		i;
	int		max;
	int		count;
	char	*bin;
	char	**tab;

	i = 0;
	max = 0;
	if (!(bin = malloc((sizefd + 1) * sizeof(char))))
		return (NULL);
	ft_search(str, charset, bin, sizefd);
	count = count_tab(bin, str, 0, 0);
	if (!(tab = malloc(sizeof(char *) * count + 1)))
		return (NULL);
	i = 0;
	while (max < count)
	{
		tab[max] = ft_line(str, &i, bin);
		max++;
	}
	tab[max] = NULL;
	free(bin);
	return (tab);
}
