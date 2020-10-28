/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:46:26 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 19:37:23 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

t_dict_unit		*ft_init_unit(char **dict)
{
	int				i;
	int				j;
	int				nb;
	t_dict_unit		*tab;

	i = -1;
	j = 0;
	while (dict[++i])
		if ((nb = ft_atoi(dict[i])) != -1)
			if (nb % 10 != 0 || nb == 0)
				j++;
	tab = malloc((j + 1) * sizeof(t_dict_unit));
	i = -1;
	j = -1;
	while (dict[++i])
		if ((nb = ft_atoi(dict[i])) != -1)
		{
			if (nb % 10 != 0 || nb == 0)
			{
				tab[++j].nb = (int)malloc(sizeof(int));
				tab[j].nb = nb;
				tab[j].text = ft_gettext(dict, i, tab[j].text);
			}
		}
	return (tab);
}

t_dict_dec		*ft_init_dec(char **dict)
{
	int				i;
	int				j;
	int				nb;
	t_dict_dec		*tab;

	i = -1;
	j = 0;
	while (dict[++i])
		if ((nb = ft_atoi(dict[i])) != -1)
			if (nb % 10 == 0 && nb < 100 && nb != 0)
				j++;
	tab = malloc((j + 1) * sizeof(t_dict_dec));
	i = -1;
	j = -1;
	while (dict[++i])
		if ((nb = ft_atoi(dict[i])) != -1)
		{
			if (nb % 10 == 0 && nb < 100 && nb != 0)
			{
				tab[++j].nb = (int)malloc(sizeof(int));
				tab[j].nb = nb;
				tab[j].text = ft_gettext(dict, i, tab[j].text);
			}
		}
	return (tab);
}

t_dict_mil		*ft_malo_mil(char **dict)
{
	int			i;
	int			j;
	int			nb;
	t_dict_mil	*tab;

	i = -1;
	nb = 0;
	while (dict[++i])
	{
		j = 1;
		if (dict[i][0] == '1')
		{
			while (dict[i][j] == '0')
				j++;
			if ((dict[i][j] == ' ' || dict[i][j] == ':') && j > 2)
				nb++;
		}
	}
	if (!(tab = malloc((nb + 1) * sizeof(t_dict_mil))))
		return (NULL);
	return (tab);
}

t_dict_mil		*ft_init_mil(char **dict)
{
	int			i;
	int			j;
	int			nb;
	t_dict_mil	*tab;

	tab = ft_malo_mil(dict);
	i = -1;
	nb = -1;
	while (dict[++i])
	{
		j = 1;
		if (dict[i][0] == '1')
		{
			while (dict[i][j] == '0')
				j++;
			if ((dict[i][j] == ' ' || dict[i][j] == ':') && j > 2)
			{
				tab[++nb].nb = (int)malloc(sizeof(int));
				tab[nb].nb = j - 1;
				tab[nb].text = ft_gettext(dict, i, tab[nb].text);
			}
		}
	}
	return (tab);
}
