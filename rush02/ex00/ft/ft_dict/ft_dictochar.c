/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictochar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:01:08 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 10:33:48 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include "ft.h"

int		ft_dictsize(char *av)
{
	int		file;
	int		size;
	char	c;

	size = 0;
	file = open(av, O_RDONLY);
	while (read(file, &c, 1))
		size++;
	close(file);
	return (size);
}

char	*ft_convertdict(char *av)
{
	char	*dict;
	int		file;
	int		i;
	int		dictsize;

	i = 0;
	dictsize = ft_dictsize(av);
	if (!(dict = malloc((dictsize + 1) * sizeof(char))))
		return (NULL);
	file = open(av, O_RDONLY);
	read(file, dict, dictsize);
	return (dict);
}

char	**ft_splitdict(char *av)
{
	return (ft_split(ft_convertdict(av), "\n"));
}
