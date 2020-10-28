/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:01:29 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/28 11:38:20 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

int					**map_char_to_int(t_bsq *bsq, char **c_tab);
int					**map_char_to_pt_two(t_bsq *bsq, char **c_tab, int i,
		int **i_map);
int					map(char **c_tab, t_bsq *bsq);
int					config_map(char **c_tab, t_bsq *bsq);
#endif
