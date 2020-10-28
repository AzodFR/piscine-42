/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 09:16:59 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/25 18:31:22 by jlaronch         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(void);
char	**ft_split(char *str, char *sep);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*convert_groups_to_words(int *digit_group_tab, int size);
int		*ft_input(int argc, char **av, int *tab_int, int *size);
#endif
