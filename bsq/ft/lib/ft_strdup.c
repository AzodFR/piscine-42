/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsylvest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:38:37 by lsylvest          #+#    #+#             */
/*   Updated: 2020/10/27 08:51:50 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *s)
{
	int		i;
	char	*duppage;

	if (!(duppage = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		duppage[i] = s[i];
		i++;
	}
	duppage[i] = '\0';
	return (duppage);
}
