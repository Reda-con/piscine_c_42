/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 00:41:12 by nde-jesu          #+#    #+#             */
/*   Updated: 2018/08/22 22:50:56 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	win_lines(t_data *data, char *map)
{
	unsigned int	**real_map;

	data->x = 0;
	data->y = 1;
	data->max = 0;
	real_map = in_tab(map, data);
	fst_step(real_map, data);
	data->x = 0;
	data->y = 1;
	scd_step(real_map, data);
	print_words_tables(real_map, data);
}

void	exec_stdin(char *map)
{
	t_data	*data;

	map = get_map_stdin();
	if (!(data = malloc(sizeof(t_data) * 1)))
		return ;
	if (valide(map, data) == 1)
		error();
	else
		win_lines(data, map);
}

int		exec_file(char *map, int argc, int i, char **argv)
{
	t_data	*data;

	if (!(map = get_map_file(argv[i])) && i != argc - 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	else if (!(map))
		return (1);
	if (!(data = malloc(sizeof(t_data) * 1)))
		return (1);
	if (valide(map, data) == 1)
		error();
	else
		win_lines(data, map);
	if (i != argc - 1)
		write(1, "\n", 1);
	free(data);
	data = NULL;
	return (0);
}

int		main(int argc, char **argv)
{
	char	*map;
	int		i;

	map = NULL;
	i = 1;
	if (argc == 1)
		exec_stdin(map);
	else
	{
		while (argv[i])
		{
			exec_file(map, argc, i, argv);
			++i;
		}
	}
	return (0);
}
