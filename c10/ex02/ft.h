/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:46:54 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 15:15:17 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c, int out);
void	ft_putstr(char *str, int out);
void	ft_error(char **av, int file, int isdir, int error);
void	ft_info_cmd(char *name);
int		ft_strcmp(char *s1, char *s);
void	ft_illegal(char *name, char *arg);
int		ft_strlen(char *str);
int		ft_isnumb(char *str);
int		ft_get_file_len(char *filename);
void	ft_printfiles(char *filename, int nb, int limit);
#endif
