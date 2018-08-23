/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 23:58:53 by nde-jesu          #+#    #+#             */
/*   Updated: 2018/08/22 22:47:21 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		valide3(int *test, int i, char *str)
{
	if (test[2] == 0)
		test[2] = test[1];
	if (test[1] != test[2])
		return (1);
	if (str[i] == '\n')
	{
		++test[0];
		test[1] = 0;
	}
	return (0);
}

/*
**	test_ln = test[0];
**	test_col = test[1];
**	tmp = test[2];
*/

int		valide2(char *str, int i, t_data *data)
{
	int		test[3];

	test[2] = 0;
	test[0] = 0;
	test[1] = 0;
	while (str[i])
	{
		while (str[i] != '\n')
		{
			if (str[i] != '\n' && data->off != str[i] && data->obs != str[i])
				return (1);
			++i;
			++test[1];
		}
		if (valide3(test, i, str))
			return (1);
		++i;
	}
	if (data->nb_line != test[0] - 1)
		return (1);
	data->nb_col = test[2];
	return (0);
}

int		valid_fst_line(char *str, t_data *data, int i)
{
	while (str[i] != '\n' && str[i])
		++i;
	data->off = str[i - 3];
	data->obs = str[i - 2];
	data->full = str[i - 1];
	if (data->off == data->obs || data->obs == data->full \
			|| data->off == data->full)
		return (0);
	str[i - 3] = 'k';
	return (i);
}

int		valide(char *str, t_data *data)
{
	int		i;
	int		tmp;
	int		j;

	i = 0;
	tmp = 0;
	i = valid_fst_line(str, data, i);
	if (ft_atoi(str) == 0)
		return (1);
	j = 0;
	while (str[j] >= '0' && str[j] <= '9' && str[j])
		++j;
	if (i - j != 3)
		return (1);
	data->nb_line = ft_atoi(str);
	if (valide2(str, i, data))
		return (1);
	return (0);
}
