/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:44:50 by daphan            #+#    #+#             */
/*   Updated: 2018/08/12 16:55:52 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_line(int **sudoku, int x, int y, int nb)
{
	int		n;

	n = 0;
	while (n < 10)
	{
		if (n == x)
			++n;
		if (nb == sudoku[n][y])
			return (0);
		n++;
	}
	return (1);
}

int		check_column(int **sudoku, int x, int y, int nb)
{
	int		n;

	n = 0;
	while (n < 10)
	{
		if (n == y)
			++n;
		if (nb == sudoku[x][n])
			return (0);
		n++;
	}
	return (1);
}

int		check_square(int **sudoku, int x, int y, int nb)
{
	int		cx;
	int		cy;
	int		i;
	int		n;

	cx = x - (x % 3);
	n = 0;
	while (n < 3)
	{
		i = 0;
		cy = y - (y % 3);
		while (i < 3)
		{
			if (x == cx && y == cy)
				++cy;
			if (nb == sudoku[cx][cy])
				return (0);
			++cy;
			++i;
		}
		++n;
		++cx;
	}
	return (1);
}
