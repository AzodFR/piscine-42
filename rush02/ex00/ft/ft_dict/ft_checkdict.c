/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:24:05 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/24 18:08:58 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

int		ft_get_splitted_size(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		ft_check_dict_split(char **av)
{
	int		i;
	int		j;

	i = -1;
	while (av[++i])
	{
		if (av[i][0] <= '0' || av[i][0] >= '9')
			return (0);
		j = 0;
		while (av[i][j] && (av[i][j] >= '0' && av[i][j] <= '9'))
			j++;
		while (av[i][j] == ' ')
			j++;
		if (av[i][j] != ':')
			return (0);
		while (av[i][j] == ' ')
			j++;
		while (av[i][j] >= ' ' && av[i][j] <= '~')
			j++;
		if (av[i][j] != '\0')
			return (0);
	}
	return (1);
}

int		ft_check_dict(char *av)
{
	int		size;
	char	**dict;

	if (!ft_open_dict(av))
		return (0);
	dict = ft_splitdict(av);
	size = ft_get_splitted_size(dict);
	if (!size)
	{
		free(dict);
		return (0);
	}
	return (ft_check_dict_split(dict));
}
