/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:23:59 by daphan            #+#    #+#             */
/*   Updated: 2018/08/12 19:53:04 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_grid(char **sudoku)
{
	int		x;
	int		y;
	int		ct_nbr;

	x = 1;
	ct_nbr = 0;
	while (sudoku[x])
	{
		y = 0;
		while (sudoku[x][y])
		{
			if (sudoku[x][y] != '.' && \
					(sudoku[x][y] <= '1' && sudoku[x][y] >= '9'))
				return (0);
			if (sudoku[x][y] != '.')
				++ct_nbr;
			y++;
		}
		if (y != 9)
			return (0);
		x++;
	}
	if (ct_nbr < 17)
		return (0);
	return (1);
}

void	write_grid(char **av, int **sudoku)
{
	int		x;
	int		y;

	x = 1;
	while (x < 10)
	{
		y = 0;
		while (y < 9)
		{
			if (av[x][y] >= '1' && av[x][y] <= '9')
				sudoku[x - 1][y] = (av[x][y] - '0');
			else
				sudoku[x - 1][y] = 0;
			y++;
		}
		x++;
	}
}

void	ft_strdup(int **sudoku)
{
	int		i;

	i = 0;
	while (i < 10)
	{
		sudoku[i] = malloc(sizeof(int) * 9);
		i++;
	}
}

int		ft_strcmp(int **s1, int **s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] && s2[i])
	{
		j = 0;
		while (s1[i][j] && s1[i][j] == s2[i][j])
			j++;
		i++;
	}
	return (s1[i][j] - s2[i][j]);
}

int		main(int ac, char **av)
{
	int		**sudoku;
	int		**sols;

	if (ac != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!(check_grid(av)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	sudoku = malloc(sizeof(int *) * 9);
	ft_strdup(sudoku);
	write_grid(av, sudoku);
	if (!fill_grid(sudoku, 0, 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	fill_grid(sols, 9, 9);
	if (ft_strcmp(sudoku, sols) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_affichage(sudoku);
	return (0);
}
