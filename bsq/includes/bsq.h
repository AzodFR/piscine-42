/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:59:56 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/27 16:32:38 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct		s_bsq
{
	char			wall;
	char			vide;
	char			full;
	int				size_tab;
	int				size_line;
	int				max_charmap;
	int				x;
	int				y;
}					t_bsq;
char				*user_line(int fd, char *file, int *fdsize);
void				auto_bsq();
char				*check_rep(char *file, int *fdsize);

void				bsq(char *line, int fdsize);

int					ft_min(int a, int b, int c);
void				find_max_map(t_bsq *bsq, int i, int **i_map);
void				finish_map(t_bsq *bsq, char **c_tab);
void				algo(t_bsq *bsq, char **c_tab);
void				else_is_one_line(t_bsq *bsq, int i, int **i_map);
#endif
