/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 06:17:39 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/15 14:19:48 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_error(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || (base[i] <= 13 && base[i] >= 9)
				|| base[i] == ' ')
			return (0);
		else
		{
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int		ft_inbase(char *base, char str)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int		ft_found_inbase(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		numb;
	int		baselen;
	int		i;
	int		neg;
	char	found;

	neg = 0;
	numb = 0;
	i = 0;
	if (!(baselen = ft_check_error(base)))
		return (0);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			neg++;
	while (str[i] && ((found = ft_found_inbase(str[i], base)) >= 0))
	{
		numb = numb * baselen + found;
		i++;
	}
	return ((neg % 2 == 0) ? numb : -numb);
}

int		ft_intsize(int nbr, int basesize)
{
	if (nbr < basesize)
		return (1);
	return (1 + ft_intsize(nbr / basesize, basesize));
}
