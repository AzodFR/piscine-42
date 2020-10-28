/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 08:47:16 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/19 18:06:59 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(int ac, char **av)
{
	int		file;
	char	c;

	if (ac == 2)
	{
		file = open(av[1], O_RDONLY);
		if (file == -1)
			ft_putstr("Cannot read file.\n");
		while (read(file, &c, 1) > 0)
			ft_putchar(c);
		close(file);
	}
	else if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
