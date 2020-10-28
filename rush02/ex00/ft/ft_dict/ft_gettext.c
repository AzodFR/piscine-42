/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gettext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaronch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:46:50 by jlaronch          #+#    #+#             */
/*   Updated: 2020/10/25 19:29:36 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

char	*ft_gettext(char **dict, int j, char *dest)
{
	char	**splitted;
	char	*text;
	int		i;

	i = 0;
	splitted = ft_split(dict[j], " :");
	while (splitted[i])
		i++;
	if (i > 2)
	{
		splitted[0] = "\0";
		text = ft_strjoin(i, splitted, " ");
		i = 0;
		while (text[i])
			i++;
	}
	else
	{
		i = 0;
		while (splitted[1][i])
			i++;
	}
	if (!(dest = malloc((i + 1) * sizeof(char))))
		return (NULL);
	return ((!splitted[0]) ? text : splitted[1]);
}
