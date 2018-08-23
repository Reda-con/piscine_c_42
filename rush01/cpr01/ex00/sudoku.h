/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 16:44:55 by daphan            #+#    #+#             */
/*   Updated: 2018/08/12 17:29:00 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>

int		fill_grid(int **sudoku, int x, int y);
int		check_line(int **sudoku, int x, int y, int nb);
int		check_column(int **sudoku, int x, int y, int nb);
int		check_square(int **sudoku, int x, int y, int nb);
void	ft_affichage(int **sudoku);

#endif
