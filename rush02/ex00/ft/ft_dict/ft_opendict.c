/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opendict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:03:06 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/24 17:59:13 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

int		ft_open_dict(char *av)
{
	int		file;

	if ((file = open(av, O_DIRECTORY) == -1))
	{
		if ((file = open(av, O_RDONLY) == -1))
			return (0);
		close(file);
		return (1);
	}
	return (0);
}
