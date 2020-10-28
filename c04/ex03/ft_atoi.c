/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:52:06 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/19 11:26:26 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		numb;
	int		neg;
	int		i;

	numb = 0;
	neg = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb *= 10;
		numb += str[i] - '0';
		i++;
	}
	return ((neg % 2 == 0) ? numb : -numb);
}
