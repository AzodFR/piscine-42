/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 02:24:50 by thjacque          #+#    #+#             */
/*   Updated: 2020/10/18 19:37:43 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_error();
void	ft_putchar(char c);
void	print_result(int *grid);
void	ft_fillfour(int *tab, int *grid);
void	ft_all_solve(int *tab, int *grid);

int		ft_check_coll_row(int *tab)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if ((tab[i] == 4 && tab[i + ((i < 4) ? 4 : -4)] != 1))
			return (0);
		i++;
	}
	i = 8;
	while (i < 16)
	{
		if ((tab[i] == 4 && tab[i + ((i < 12) ? 4 : -4)] != 1))
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_corner(int *tab)
{
	if ((tab[0] == 4 && (tab[11] != 1 || tab[15] == 1)) ||
		(tab[4] == 4 && (tab[8] != 1 || tab[12] == 1)) ||
		(tab[3] == 4 && (tab[15] != 1 || tab[11] == 1)) ||
		(tab[7] == 4 && (tab[12] != 1 || tab[8] == 1)) ||
		(tab[8] == 4 && (tab[3] != 1 || tab[7] == 1)) ||
		(tab[12] == 4 && (tab[0] != 1 || tab[4] == 1)) ||
		(tab[11] == 4 && (tab[7] != 1 || tab[3] == 1)) ||
		(tab[15] == 4 && (tab[4] != 1 || tab[0] == 1)))
		return (0);
	return (1);
}

void	ft_solve(int *tab)
{
	int		grid[16];
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (i < 16)
		grid[i++] = 0;
	if (!ft_check_corner(tab) || !ft_check_coll_row(tab))
		ft_error();
	else
	{
		ft_fillfour(tab, grid);
		while (a++ < 16)
			ft_all_solve(tab, grid);
		print_result(grid);
	}
}
