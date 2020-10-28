/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_solve2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:54:13 by gbeco             #+#    #+#             */
/*   Updated: 2020/10/18 19:25:48 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_basic_solve11_1(int *tab, int *grid);
void	ft_basic_solve11_2(int *tab, int *grid);
void	ft_basic_solve11_3(int *tab, int *grid);
void	ft_basic_solve12_1(int *tab, int *grid);
void	ft_basic_solve12_2(int *tab, int *grid);
void	ft_basic_solve12_3(int *tab, int *grid);
void	ft_basic_solve13_1(int *tab, int *grid);
void	ft_basic_solve13_2(int *tab, int *grid);
void	ft_basic_solve13_3(int *tab, int *grid);
void	ft_basic_solve14_1(int *tab, int *grid);
void	ft_basic_solve14_2(int *tab, int *grid);

void	ft_all_solve2(int *tab, int *grid)
{
	ft_basic_solve11_1(tab, grid);
	ft_basic_solve11_2(tab, grid);
	ft_basic_solve11_3(tab, grid);
	ft_basic_solve12_1(tab, grid);
	ft_basic_solve12_2(tab, grid);
	ft_basic_solve12_3(tab, grid);
	ft_basic_solve13_1(tab, grid);
	ft_basic_solve13_2(tab, grid);
	ft_basic_solve13_3(tab, grid);
	ft_basic_solve14_1(tab, grid);
	ft_basic_solve14_2(tab, grid);
}
