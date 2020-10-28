/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:29:49 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 10:19:32 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_joinend(char *newstr, char *sep, char **strs, int i)
{
	ft_strcat(newstr, sep);
	ft_strcat(newstr, strs[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		actualen;
	int		i;

	i = 0;
	actualen = 0;
	while (i < size)
		actualen += ft_strlen(strs[i++]);
	if (!(newstr = malloc((actualen + 1 + (ft_strlen(sep) *
		((size <= 0) ? size : size - 1))) * sizeof(char))))
		return (NULL);
	i = 1;
	(size <= 0) ? ft_strcpy(newstr, "") : ft_strcpy(newstr, strs[0]);
	while (i < size - 1)
		if (strs[i])
		{
			ft_strcat(newstr, sep);
			ft_strcat(newstr, strs[i++]);
		}
	if (size > 1)
		ft_joinend(newstr, sep, strs, i);
	return (newstr);
}
