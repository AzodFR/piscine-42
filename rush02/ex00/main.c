/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 09:10:55 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 19:37:58 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char			**dict;
	int				*tab_int;
	int				size;
	char			*str;

	tab_int = NULL;
	if (!(tab_int = ft_input(ac, av, tab_int, &size)))
		ft_error();
	else
	{
		dict = ft_splitdict("dict/numbers.dict");
		g_digits = ft_init_unit(dict);
		g_tens_digits = ft_init_dec(dict);
		g_multiples = ft_init_mil(dict);
		str = convert_groups_to_words(tab_int, size);
		ft_putstr(str);
		free(str);
	}
	return (0);
}
