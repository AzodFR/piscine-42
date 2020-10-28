/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 23:45:01 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/18 19:37:19 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char c, char *charset);
int		ft_find_next_sep(char *str, char *charset, int index);
int		ft_count_malloc(char *str, char *charset, int atword, int getindex);
char	**ft_split(char *str, char *charset);
int		ft_atoi(char *str);
int		ft_arraylen(char **array);
void	ft_putstr(char *str);
void	ft_error(void);
int		ft_check_coll_row(int *tab);
int		ft_check_corner(int *tab);
int		ft_isset(int **grid, int row);
void	ft_solve(int *tab);
void	print_result(int *grid);

int		main(int ac, char **av)
{
	char	**params;
	int		intparam[16];
	int		i;

	i = 0;
	if (ac != 2 || !(params = ft_split(av[1], " ")) ||
		ft_arraylen(params) != 16)
	{
		ft_error();
		return (0);
	}
	while (params[i])
	{
		intparam[i] = ft_atoi(params[i]);
		if (intparam[i] > 4 || intparam[i] < 1)
		{
			ft_error();
			return (0);
		}
		i++;
	}
	ft_solve(intparam);
	return (0);
}
