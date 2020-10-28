/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:57:51 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/23 11:12:07 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_error(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
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
	return (1);
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

	baselen = ft_strlen(base);
	neg = 0;
	numb = 0;
	i = 0;
	if (!ft_check_error(base))
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
