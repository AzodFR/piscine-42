/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slarcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:00:56 by slarcher          #+#    #+#             */
/*   Updated: 2020/10/25 11:23:13 by slarcher         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

	char *digits[]	= {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	char *tens_digits[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
	char *multiples[] = { "", "Thousand", "Million", "Billion", "Trillion", "Quadrillion", "Quintillion", "Sextillion", "Septillion", "Octillion", "Nonillion", "Decillion", "Undecillion" };

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (*str)
	{
		cpt++;
		str++;
	}
	return (cpt);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int id;
	int is;

	id = 0;
	is = 0;
	while (dest[id])
		++id;
	while (src[is])
	{
		dest[id] = src[is];
		++id;
		++is;
	}
	dest[id] = '\0';
	return (dest);
}

char	*group_to_words(int digit_group)
{
	char *group_text;
	int hundreds = digit_group / 100;
	int tens_units = digit_group % 100;
	int tens = tens_units / 10;
	int units = tens_units % 10;

	group_text = malloc(sizeof(char) * 200);
	if (hundreds)
	{
		ft_strcat(group_text, digits[hundreds]);	
		ft_strcat(group_text, " Hundred");
		if (tens_units)
			ft_strcat(group_text, " and ");
	}
	if (tens >= 2)
	{
		ft_strcat(group_text, tens_digits[tens]);
		if (units)
		{
			ft_strcat(group_text, " ");
			ft_strcat(group_text, digits[units]);
		}
	}
	else if (tens_units)
		ft_strcat(group_text, digits[tens_units]);
	return (group_text);
}

char	*convert_groups_to_words(int *digit_group_tab, int size)
{
	char **str = 0;
	char *combined = 0;
	char *prefix = 0;
	int append_and;
	int i;
	int j;

	str = malloc(sizeof(**str) * size);
	i = 0;
	while (i < size)
	{
		str[i] = malloc(sizeof(char) * 200);
		ft_strcpy(str[i], group_to_words(digit_group_tab[i]));
		++i;
	}
	combined = malloc(sizeof(char) * 5000);
	ft_strcpy(combined, str[0]);
	if (digit_group_tab[0] > 0 && digit_group_tab[0] < 100)
		append_and = 1;
	else
		append_and = 0;
	j = 1;
	prefix = malloc(sizeof(char) * 5000);
	while (j < size)
	{
		if (digit_group_tab[j])
		{
			ft_strcpy(prefix, str[j]);
			ft_strcat(prefix, " ");
			ft_strcat(prefix, multiples[j]);
			if (ft_strlen(combined))
			{
				if (append_and)
					ft_strcat(prefix, " and ");
				else
					ft_strcat(prefix, ", ");
			}
			append_and = 0;
			ft_strcat(prefix, combined);
			ft_strcpy(combined, prefix);
		}
		++j;
	}
	return (combined);
}

int main(int argc, char **argv)
{	
	int tab[] = { 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 9 };
	int size = 13;

	(void)argc;
	(void)**argv;
	ft_putstr(convert_groups_to_words(tab, size));
	return (0);
}
