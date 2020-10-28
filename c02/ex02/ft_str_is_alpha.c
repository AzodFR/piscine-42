/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:08:09 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/07 12:46:16 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_is_upper_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (ft_is_lower_case(str[i]))
			i++;
		else if (ft_is_upper_case(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
