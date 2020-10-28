/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_line_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:15:18 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/27 19:33:32 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*just_lineread(int fd, int *sizefd)
{
	static char	line[420];
	char		*str;
	char		*temp;
	int			i;

	str = ft_strdup("");
	while ((i = read(fd, line, 420)) > 0)
	{
		line[i] = '\0';
		temp = ft_strjoin(str, line);
		free(str);
		str = ft_strdup(temp);
		free(temp);
		*sizefd += 420;
	}
	return (str);
}
