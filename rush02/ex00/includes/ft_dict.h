/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaronch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:57:25 by jlaronch          #+#    #+#             */
/*   Updated: 2020/10/25 19:34:39 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

typedef struct		s_dict_unit
{
	int		nb;
	char	*text;
}					t_dict_unit;
typedef struct		s_dict_dec
{
	int		nb;
	char	*text;
}					t_dict_dec;
typedef struct		s_dict_mil
{
	int		nb;
	char	*text;
}					t_dict_mil;

t_dict_unit			*g_digits;
t_dict_dec			*g_tens_digits;
t_dict_mil			*g_multiples;

int					ft_open_dict(char *av);
char				**ft_splitdict(char *av);
int					ft_check_dict(char *av);
char				*ft_gettext(char **dict, int j, char *dest);
t_dict_unit			*ft_init_unit(char **dict);
t_dict_dec			*ft_init_dec(char **dict);
t_dict_mil			*ft_init_mil(char **dict);
int					ft_finddigits(int nb);
int					ft_findtens(int nb);
int					ft_findmultiples(int nb);
#endif
