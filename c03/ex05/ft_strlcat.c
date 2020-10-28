/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:37:28 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/10 16:33:40 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		destsize;
	unsigned int		i;

	destsize = 0;
	i = 0;
	while (dest[destsize] && destsize < size)
		destsize++;
	while (src[i] && i + destsize + 1 < size)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	if (destsize != size)
		dest[destsize + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (destsize + i);
}
