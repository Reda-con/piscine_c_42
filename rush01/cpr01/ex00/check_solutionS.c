/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solutionS.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:45:03 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/12 19:47:25 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_number(int **sudoku, int x, int y, int nb)
{
	if		 (!(check_line(sudoku, x, y, nb)))
		return (0);
	if (!(check_column(sudoku, x, y, nb)))
		return (0);
	if (!(check_square(sudoku, x, y, nb)))
		return (0);
	return (1);
}

int		next_fill(int **sudoku, int x, int y, int		 nb)
{
	while (nb > 0)
	{
		if (check_number(sudoku, x, y, nb - 1))
		{
			sudoku[x][y] = nb - 1;
			if ((y - 1) > 0)
			{
				if (fill_grid(sudoku, x, y - 1))
					return (1);
				else
					sudoku[x][y] = 0;
			}
			else if ((x - 1) > 0)
			{
				if (fill_grid(sudoku, x - 1, 9))
					return (1);
				else
					sudoku[x][y] = 0;
			}
			else
				return (1);
		}
		--nb;
	}
	return (0);
}

int		fill_grid(int **sudoku, int x, int y)
{
	int		nb;

	if (x > 0 && y > 0)
	{
		if (sudoku[x][y] != 0)
		{
			if ((y - 1) > 0)
				return (fill_grid(sudoku, x, y + 1));
			else if ((x - 1) > 0)
				return (fill_grid(sudoku, x + 1, 0));
			else
				return (1);
		}
		else
		{
			nb = 10;
			return (next_fill(sudoku, x, y, nb));
		}
	}
	else
		return (1);
}
