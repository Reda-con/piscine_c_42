/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 22:13:19 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/22 22:39:54 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	fill_square(unsigned int **map, t_data *data)
{
	int	cty;
	int	ctx;

	cty = data->y;
	while (cty > (data->y - data->max))
	{
		ctx = data->x;
		while (ctx > (data->x - data->max))
		{
			map[cty][ctx] = data->full;
			--ctx;
		}
		--cty;
	}
}

void	scd_step(unsigned int **map, t_data *data)
{
	int	fl;

	fl = 0;
	while (data->x <= data->nb_col && data->y <= data->nb_line)
	{
		if (map[data->y][data->x] != 0 \
				&& (int)map[data->y][data->x] == data->max && fl++ == 0)
			fill_square(map, data);
		if (map[data->y][data->x] != 0 && \
				map[data->y][data->x] != (unsigned int)data->full)
			map[data->y][data->x] = data->off;
		if (map[data->y][data->x] == 0)
			map[data->y][data->x] = data->obs;
		if ((data->x + 1) < data->nb_col)
			++data->x;
		else if ((data->y + 1) <= data->nb_line)
		{
			++data->y;
			data->x = 0;
		}
		else
			return ;
	}
}

void	fill_map(unsigned int **map, t_data *data)
{
	int		nb;

	if (data->x == 0 || data->y == 1)
		nb = 0;
	else if (map[data->y][data->x] == 0 || \
			map[data->y - 1][data->x] == 0 || \
			map[data->y][data->x - 1] == 0 || \
			map[data->y - 1][data->x - 1] == 0)
		nb = 0;
	else
	{
		nb = map[data->y - 1][data->x - 1];
		if (nb > (int)map[data->y - 1][data->x])
			nb = map[data->y - 1][data->x];
		if (nb > (int)map[data->y][data->x - 1])
			nb = map[data->y][data->x - 1];
	}
	map[data->y][data->x] = nb + 1;
	if (data->max < nb + 1)
		data->max = nb + 1;
}

void	fst_step(unsigned int **map, t_data *data)
{
	while (data->x <= data->nb_col && data->y <= data->nb_line)
	{
		if (map[data->y][data->x] != 0)
			fill_map(map, data);
		if ((data->x + 1) <= data->nb_col)
			++data->x;
		else if ((data->y + 1) <= data->nb_line)
		{
			++data->y;
			data->x = 0;
		}
		else
			return ;
	}
}
