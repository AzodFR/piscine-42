/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:33:37 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/22 10:58:09 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c, int out);
void	ft_putstr(char *str, int out);
void	ft_puthex(unsigned char c);
int		ft_strdumpcmp(char *s1, char *s2);
void	ft_print_dump(char *src);
void	ft_addr(int i);
char	*ft_strdup(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_get_file_len(char **files, int i);
void	ft_gettext(char **files, int i, char *text);
void	ft_error(char **files, int i, int isdir, int error);
int		ft_hexdump2(char *prev, char *actual, int k, int i);
void	ft_endump(int i, char *text, int size);
#endif
