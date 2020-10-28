/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:43:37 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 13:52:57 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_hexdump(char *text, int size)
{
	int		i;
	char	*actual;
	char	*prev;
	int		k;
	int		j;

	i = 0;
	k = 0;
	actual = ft_strdup("");
	prev = ft_strdup("");
	while (i < size - 16)
	{
		j = -1;
		while (++j < 16)
			actual[j] = text[i + j];
		k = ft_hexdump2(prev, actual, k, i);
		prev = ft_strdup(actual);
		i += 16;
	}
	ft_endump(i, text, size);
	free(actual);
	free(prev);
	free(text);
}

void	ft_get_entire_text(char **files, int *valid, int size)
{
	char	*text;
	int		i;

	i = -1;
	if (!(text = malloc((size) * sizeof(char))))
		return ;
	while (valid[++i] != -1)
		ft_gettext(files, valid[i], text);
	ft_hexdump(text, size);
}

void	ft_getentirelen(char **files, int *valid)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (valid[i] != -1)
		size += ft_get_file_len(files, valid[i++]);
	ft_get_entire_text(files, valid, size);
}

void	ft_get_files(char **files, int size)
{
	int		i;
	int		file;
	int		valid[size - 1];
	int		j;

	i = 1;
	j = 0;
	while (++i < size)
	{
		if ((file = open(files[i], O_DIRECTORY)) == -1)
		{
			if ((file = open(files[i], O_RDONLY)) == -1)
				ft_error(files, i, 0, ENOENT);
			else
			{
				valid[j++] = i;
				close(file);
			}
		}
		else
			ft_error(files, i, 1, EISDIR);
	}
	valid[j] = -1;
	if (valid[0] != -1)
		ft_getentirelen(files, valid);
}

int		main(int ac, char **av)
{
	if (ac < 3)
		return (0);
	else if (ft_strcmp(av[1], "-C") != 0)
		return (0);
	else
		ft_get_files(av, ac);
	return (0);
}
