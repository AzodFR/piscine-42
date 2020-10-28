/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 09:46:42 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 09:19:25 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_get_file_len(char **files, int i)
{
	int		j;
	int		file;
	char	c;

	j = 0;
	file = open(files[i], O_RDONLY);
	while (read(file, &c, 1))
		j++;
	close(file);
	return (j);
}

void	ft_gettext(char **files, int i, char *text)
{
	int		j;
	int		file;
	char	c;

	file = open(files[i], O_RDONLY);
	j = ft_strlen(text);
	while (read(file, &c, 1))
		text[j++] = c;
	close(file);
}
