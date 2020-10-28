/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slarcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:00:56 by slarcher          #+#    #+#             */
/*   Updated: 2020/10/25 19:42:17 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_dict.h"

char	*group_to_words(int hundreds, int tens_units, int tens, int units)
{
	char *group_text;

	group_text = malloc(sizeof(char) * 100);
	if (hundreds)
	{
		ft_strcat(group_text, g_digits[ft_finddigits(hundreds)].text);
		ft_strcat(group_text, " hundred");
		if (tens_units)
			ft_strcat(group_text, " and ");
	}
	if (tens >= 2)
	{
		ft_strcat(group_text, g_tens_digits[ft_findtens(tens*10)].text);
		if (units)
		{
			ft_strcat(group_text, "-");
			ft_strcat(group_text, g_digits[ft_finddigits(units)].text);
		}
	}
	else if (tens_units)
		ft_strcat(group_text, g_digits[ft_finddigits(tens_units)].text);
	return (group_text);
}

char	*convert_to_words(int digit_group)
{
	int hundreds;
	int tens_units;
	int tens;
	int units;

	hundreds = digit_group / 100;
	tens_units = digit_group % 100;
	tens = tens_units / 10;
	units = tens_units % 10;
	return (group_to_words(hundreds, tens_units, tens, units));
}

char	*build_sentence(int *digit_group_tab, char **strs, int size, int and)
{
	char	*combined;
	char	*prefix;
	int		i;

	combined = malloc(sizeof(char) * 1000);
	ft_strcpy(combined, strs[0]);
	i = 0;
	prefix = malloc(sizeof(char) * 1000);
	while (++i < size)
	{
		if (digit_group_tab[i])
		{
			ft_strcpy(prefix, strs[i]);
			ft_strcat(prefix, " ");
			ft_strcat(prefix, g_multiples[ft_findmultiples(i+2)].text);
			if (ft_strlen(combined))
				and ? ft_strcat(prefix, " and ") : ft_strcat(prefix, ", ");
			and = 0;
			ft_strcat(prefix, combined);
			ft_strcpy(combined, prefix);
		}
	}
	free(strs);
	free(prefix);
	return (combined);
}

char	*convert_groups_to_words(int *digit_group_tab, int size)
{
	char	**strs;
	int		i;
	int		and;

	if (!digit_group_tab[0])
		return (g_digits[ft_finddigits(0)].text);
	strs = malloc(sizeof(**strs) * size);
	i = 0;
	while (i < size)
	{
		strs[i] = convert_to_words(digit_group_tab[i]);
		++i;
	}
	if (digit_group_tab[0] < 100)
		and = 1;
	else
		and = 0;
	return (build_sentence(digit_group_tab, strs, size, and));
}
