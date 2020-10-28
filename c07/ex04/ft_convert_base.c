/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 01:09:16 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/16 11:17:58 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_error(char *base);
int		ft_inbase(char *base, char str);
int		ft_found_inbase(char c, char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_intsize(int nbr, int basesize);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int					numb;
	int					basesize;
	int					size;
	char				*converted;
	unsigned int		realnumb;

	basesize = ft_check_error(base_to);
	if (!ft_check_error(base_from) || !basesize)
		return (NULL);
	numb = ft_atoi_base(nbr, base_from);
	realnumb = (numb < 0) ? -numb : numb;
	size = ft_intsize(realnumb, basesize) + ((numb < 0) ? 1 : 0);
	if (!(converted = malloc((size + 1) * sizeof(char))))
		return (NULL);
	converted[size] = 0;
	while (size--)
	{
		converted[size] = base_to[realnumb % basesize];
		realnumb /= basesize;
	}
	if (numb < 0)
		converted[0] = '-';
	return (converted);
}
