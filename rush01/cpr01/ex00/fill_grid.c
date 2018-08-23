/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 13:39:48 by daphan            #+#    #+#             */
/*   Updated: 2018/08/19 00:56:35 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_number(int **sudoku, int x, int y, int nb)
{
	if (!(check_line(sudoku, x, y, nb)))
		return (0);
	if (!(check_column(sudoku, x, y, nb)))
		return (0);
	if (!(check_square(sudoku, x, y, nb)))
		return (0);
	return (1);
}

int		next_fill(int **sudoku, int x, int y, int nb)
{
	while (nb < 9)
	{
		if (check_number(sudoku, x, y, nb + 1))
		{
			sudoku[x][y] = nb + 1;
			if ((y + 1) < 9)
			{
				if (fill_grid(sudoku, x, y + 1))
					return (1);
				else
					sudoku[x][y] = 0;
			}
			else if ((x + 1) < 9)
			{
				if (fill_grid(sudoku, x + 1, 0))
					return (1);
				else
					sudoku[x][y] = 0;
			}
			else
				return (1);
		}
		++nb;
	}
	return (0);
}

int		fill_grid(int **sudoku, int x, int y)
{
	int		nb;

	if (x < 9 && y < 9)
	{
		if (sudoku[x][y] != 0)
		{
			if ((y + 1) < 9)
				return (fill_grid(sudoku, x, y + 1));
			else if ((x + 1) < 9)
				return (fill_grid(sudoku, x + 1, 0));
			else
				return (1);
		}
		else
		{
			nb = 0;
			return (next_fill(sudoku, x, y, nb));
		}
	}
	else
		return (1);
}
