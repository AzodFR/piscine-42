/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:48:32 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/07 16:15:48 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_locase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_locase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
