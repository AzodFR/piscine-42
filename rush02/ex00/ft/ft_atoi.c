/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:52:06 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 19:36:29 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int				ft_check(char *str, int i)
{
	int		j;

	j = i + 1;
	if (str[i] == '1')
	{
		while (str[j] == '0')
			j++;
		if ((str[j] == ' ' || str[j] == ':') && j > i + 2)
			return (-1);
	}
	return (1);
}

long int		ft_atoi(char *str)
{
	long int		numb;
	int				i;

	numb = -1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (-1);
	if (!ft_check(str, i))
		return (-1);
	if (str[i] >= '0' && str[i] <= '9')
		numb++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb *= 10;
		numb += str[i] - '0';
		i++;
	}
	if (numb % 10 == 0 && numb >= 100)
		return (-1);
	return (numb);
}
