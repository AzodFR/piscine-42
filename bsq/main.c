/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:57:20 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 08:38:54 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*user_line(int fd, char *file, int *sizefd)
{
	int		i;
	char	*str;
	char	c[420];
	int		filed;

	i = 0;
	while (read(fd, c, 420))
		i += 420;
	if (!(str = malloc((i + 1) * sizeof(char))))
		return (NULL);
	close(fd);
	if ((filed = open(file, O_RDONLY)) < 3)
	{
		write(1, "map error\n", 10);
		return (NULL);
	}
	read(filed, str, i);
	close(filed);
	*sizefd = i;
	return (str);
}

void	auto_bsq(void)
{
	char	*file;
	int		fdsize;

	file = just_lineread(0, &fdsize);
	bsq(file, fdsize);
}

char	*check_rep(char *file, int *fdsize)
{
	int		fd;
	char	*filename;

	if ((fd = open(file, O_DIRECTORY)) == -1)
	{
		if ((fd = open(file, O_RDONLY)) < 3)
		{
			write(1, "map error\n", 10);
			exit(EXIT_FAILURE);
		}
		filename = ft_strdup(file);
		free(file);
		file = user_line(fd, filename, fdsize);
		return (file);
	}
	write(1, "map error\n", 10);
	return (NULL);
}

int		main(int ac, char **av)
{
	int		i;
	char	*line;
	int		fdsize;

	i = 1;
	fdsize = 0;
	if (ac == 1)
		auto_bsq();
	while (i < ac)
	{
		line = ft_strdup(av[i]);
		line = check_rep(line, &fdsize);
		if (line != NULL)
			bsq(line, fdsize);
		i++;
	}
	return (0);
}
