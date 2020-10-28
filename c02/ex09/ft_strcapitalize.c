/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:22:19 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/10 17:52:00 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_get_case(str[i - 1]) == 0 && ft_get_case(str[i]) == 1)
			str[i] -= 32;
		else if (ft_get_case(str[i - 1]) && ft_get_case(str[i]) == 2)
			str[i] += 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
