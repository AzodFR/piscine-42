/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:00:49 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 09:49:46 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include "bsq.h"
# include "map.h"

int					ft_strlen(char *str);
int					ft_splitstrlen(char *str, int sizefd);
char				**ft_split(char *str, char *charset, int fdsize);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strjoin2(int size, char **strs, char *sep);
char				*ft_strdup(char *s);
char				*ft_strcat(char *dst, char *src);
void				cleaner_tab(char **c_tab);
void				clean_shortcut(char **c_tab, t_bsq *bsq);
void				ft_putstr(char *str);
int					ft_atoi(const char *nptr);
int					search_char(char *str, char c);
char				*just_lineread(int fd, int *sizefd);
#endif
