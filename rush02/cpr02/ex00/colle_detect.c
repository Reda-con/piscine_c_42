/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_detect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkellum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:04:35 by nkellum           #+#    #+#             */
/*   Updated: 2018/08/19 19:55:26 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		aucune(char **buff, int ligne, int col)
{
	if (buff[0][0] != 'o' && buff[0][0] != '/' && buff[0][0] != 'A')
		return (0);
	if (buff[col][0] != 'B' && buff[col][0] != '*' && buff[col][0] != '-'
			&& buff[col][0] != 'o' && buff[col][0] != '\\'
			&& buff[col][0] != 'C' && buff[col][0] != 'A')
		return (0);
	if (buff[0][ligne] != '|' && buff[0][ligne] != '*' && buff[0][ligne] != 'B'
			&& buff[0][ligne] != 'o' && buff[0][ligne] != '\\'
			&& buff[0][ligne] != 'C' && buff[0][ligne] != 'A')
		return (0);
	if (buff[col][ligne] != 'o' && buff[col][ligne] != '/'
			&& buff[col][ligne] != 'C' && buff[col][ligne] != 'A'
			&& buff[col][ligne] != ' ')
		return (0);
	return (1);
}

void	win_lines(char **buff, int ligne)
{
	int		col;

	col = 0;
	while (buff[0][col])
		col++;
	print_colle(buff, -1, ligne, col);
	if (aucune(buff, ligne, col) == 0)
	{
		ft_putstr("aucune\n");
		return ;
	}
	if (col > 1 && ligne == 1)
		print_colle_ligne(buff, ligne, col);
	if (col == 1 && ligne > 1)
		print_colle_col(buff, ligne, col);
	print_colle234(buff, ligne, col);
	if (buff[0][0] == 'o')
		print_colle(buff, 0, ligne, col);
	if (buff[0][0] == '/')
		print_colle(buff, 1, ligne, col);
	ft_putstr("\n");
}

void	colle_detect(char **buff)
{
	int col;
	int colle;
	int ligne;

	colle = 0;
	col = 0;
	ligne = 0;
	while (buff[ligne])
		ligne++;
	if (ligne != 0)
		win_lines(buff, ligne);
	else
		print_all();
}
