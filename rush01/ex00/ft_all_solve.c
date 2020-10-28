/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:42:10 by arita             #+#    #+#             */
/*   Updated: 2020/10/18 19:38:05 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve2_1(int *tab, int *grid);
void	ft_basic_solve2_2(int *tab, int *grid);
void	ft_basic_solve3_1(int *tab, int *grid);
void	ft_basic_solve3_2(int *tab, int *grid);
void	ft_basic_solve4_1(int *tab, int *grid);
void	ft_basic_solve4_2(int *tab, int *grid);
void	ft_basic_solve4_3(int *tab, int *grid);
void	ft_basic_solve5_1(int *tab, int *grid);
void	ft_basic_solve5_2(int *tab, int *grid);
void	ft_basic_solve5_3(int *tab, int *grid);
void	ft_basic_solve6_1(int *tab, int *grid);
void	ft_basic_solve6_2(int *tab, int *grid);
void	ft_basic_solve6_3(int *tab, int *grid);
void	ft_basic_solve7_1(int *tab, int *grid);
void	ft_basic_solve7_2(int *tab, int *grid);
void	ft_basic_solve8_1(int *tab, int *grid);
void	ft_basic_solve8_2(int *tab, int *grid);
void	ft_basic_solve8_3(int *tab, int *grid);
void	ft_basic_solve9_1(int *tab, int *grid);
void	ft_basic_solve9_2(int *tab, int *grid);
void	ft_basic_solve9_3(int *tab, int *grid);
void	ft_basic_solve10_1(int *tab, int *grid);
void	ft_basic_solve10_2(int *tab, int *grid);
void	ft_basic_solve10_3(int *tab, int *grid);
void	ft_all_solve2(int *tab, int *grid);

void	ft_all_solve(int *tab, int *grid)
{
	ft_basic_solve2_1(tab, grid);
	ft_basic_solve2_2(tab, grid);
	ft_basic_solve3_1(tab, grid);
	ft_basic_solve3_2(tab, grid);
	ft_basic_solve4_1(tab, grid);
	ft_basic_solve4_2(tab, grid);
	ft_basic_solve4_3(tab, grid);
	ft_basic_solve5_1(tab, grid);
	ft_basic_solve5_2(tab, grid);
	ft_basic_solve5_3(tab, grid);
	ft_basic_solve6_1(tab, grid);
	ft_basic_solve6_2(tab, grid);
	ft_basic_solve6_3(tab, grid);
	ft_basic_solve7_1(tab, grid);
	ft_basic_solve7_2(tab, grid);
	ft_basic_solve8_1(tab, grid);
	ft_basic_solve8_2(tab, grid);
	ft_basic_solve8_3(tab, grid);
	ft_basic_solve9_1(tab, grid);
	ft_basic_solve9_2(tab, grid);
	ft_basic_solve9_3(tab, grid);
	ft_basic_solve10_1(tab, grid);
	ft_basic_solve10_2(tab, grid);
	ft_basic_solve10_3(tab, grid);
	ft_all_solve2(tab, grid);
}
