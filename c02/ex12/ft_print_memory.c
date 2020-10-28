/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:40:23 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/26 08:38:17 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void				ft_print_ascii(unsigned char *str, unsigned int size)
{
	int		i;

	i = 0;
	while (size-- && str[i++])
		ft_putchar((str[i - 1] >= 32 && str[i - 1] <= 126) ? str[i - 1] : '.');
}

void				ft_puthex(unsigned char c)
{
	ft_putchar((c > 9) ? 'a' + c - 10 : 48 + c);
}

unsigned int		ft_print_line(void *addr, unsigned long addr_long,
		unsigned int *size)
{
	int					i;
	unsigned int		l;

	i = -1;
	while (++i < 16)
		ft_puthex((addr_long >> 4 * (16 - i - 1)) % 16);
	ft_putchar(':');
	i = -1;
	while (++i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if ((int)(*size)-- > 0)
		{
			l = i + 1;
			ft_puthex(((unsigned char*)addr)[i] / 16);
			ft_puthex(((unsigned char*)addr)[i] % 16);
		}
		else
			ft_print_ascii((unsigned char*)" ", 2);
	}
	return (l);
}

void				*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	l;

	if (size < 1)
		return (addr);
	while ((int)size > 0)
	{
		l = ft_print_line(addr, (unsigned long)addr, &size);
		ft_putchar(' ');
		ft_print_ascii((unsigned char*)addr, l);
		ft_putchar('\n');
		addr += 16;
	}
	return (addr);
}
