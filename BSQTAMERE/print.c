/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:12:18 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/22 22:17:48 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putstr(char *str, int ln)
{
	int		i;

	i = -1;
	while (++i < ln)
		ft_putchar(str[i]);
}

void	print_words_tables(unsigned int **map, t_data *data)
{
	int		i;
	int		j;

	i = 1;
	while (i <= data->nb_line)
	{
		j = 0;
		while (j < data->nb_col)
		{
			ft_putchar((char)map[i][j]);
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}

char	*error(void)
{
	write(2, "map error\n", 10);
	return (NULL);
}

void	errorm(void)
{
	write(2, "map error\n", 10);
}
