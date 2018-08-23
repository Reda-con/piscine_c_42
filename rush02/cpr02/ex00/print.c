/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkellum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:36:40 by nkellum           #+#    #+#             */
/*   Updated: 2018/08/19 19:30:29 by gmoindro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_colle(char **buff, int colle, int col, int ligne)
{
	if (col == 1 && ligne == 1 && buff[0][0] == 'A')
	{
		ft_putstr("[colle-02] [1] [1] ");
		ft_putstr("|| [colle-03] [1] [1] || [colle-04] [1] [1]");
	}
	else if (colle >= 0)
	{
		ft_putstr("[colle-0");
		ft_putnbr(colle);
		ft_putstr("] ");
		ft_putstr("[");
		ft_putnbr(ligne);
		ft_putstr("] ");
		ft_putstr("[");
		ft_putnbr(col);
		ft_putstr("]");
	}
}

void	print_colle234(char **buff, int col, int ligne)
{
	if (col > 1 && ligne > 1)
	{
		if (buff[0][0] == 'A' && buff[0][ligne - 1] == 'A'
			&& buff[col - 1][ligne - 1] == 'C')
			print_colle(buff, 2, col, ligne);
		if (buff[0][0] == 'A' && buff[0][ligne - 1] == 'C'
			&& buff[col - 1][ligne - 1] == 'C')
			print_colle(buff, 3, col, ligne);
		if (buff[0][0] == 'A' && buff[0][ligne - 1] == 'C'
			&& buff[col - 1][ligne - 1] == 'A')
			print_colle(buff, 4, col, ligne);
	}
}

void	print_colle_ligne(char **buff, int col, int ligne)
{
	if (buff[0][0] == 'A' && buff[0][ligne - 1] == 'C')
	{
		print_colle(buff, 3, col, ligne);
		ft_putstr(" || ");
		print_colle(buff, 4, col, ligne);
	}
	else if (buff[0][0] == 'A')
		print_colle(buff, 2, col, ligne);
}

void	print_colle_col(char **buff, int col, int ligne)
{
	if (buff[0][0] == 'A' && buff[col - 1][ligne - 1] == 'C')
	{
		print_colle(buff, 2, col, ligne);
		ft_putstr(" || ");
		print_colle(buff, 4, col, ligne);
	}
	else if (buff[0][0] == 'A')
		print_colle(buff, 3, col, ligne);
}

void	print_all(void)
{
	ft_putstr("[colle-00] [0] [0] || [colle-01] [0] [0]");
	ft_putstr(" || [colle-02] [0] [0] || [colle-03] [0] [0]");
	ft_putstr(" || [colle-04] [0] [0]");
}
