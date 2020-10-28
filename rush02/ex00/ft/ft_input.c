/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaronch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:35:48 by jlaronch          #+#    #+#             */
/*   Updated: 2020/10/25 19:08:00 by jlaronch         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

int			check_nb(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (-1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	if (i > 36)
		return (-1);
	return (1);
}

int			check_input(int argc, char **av)
{
	int i;

	i = 0;
	if (argc == 1 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (argc == 2)
	{
		if (!check_nb(av[1]))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
	}
	else
	{
		if (!check_nb(av[2]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

int			*fill_tab_int(char *str, int *tab_int, int *size)
{
	int nb_len;
	int i;

	nb_len = ft_strlen(str);
	*size = nb_len / 3;
	if (nb_len % 3 != 0)
		*size += 1;
	tab_int = malloc(sizeof(int) * *size);
	i = 0;
	while (i < *size)
	{
		nb_len = ft_strlen(str);
		if (nb_len > 3)
		{
			tab_int[i] = ft_atoi(&str[nb_len - 3]);
			str[nb_len - 3] = '\0';
		}
		else
			tab_int[i] = ft_atoi(str);
		i++;
	}
	return (tab_int);
}

int			*ft_input(int argc, char **av, int *tab_int, int *size)
{
	if (!check_input(argc, av))
		return (NULL);
	if (argc == 2)
		tab_int = fill_tab_int(av[1], tab_int, size);
	else
		tab_int = fill_tab_int(av[2], tab_int, size);
	return (tab_int);
}
