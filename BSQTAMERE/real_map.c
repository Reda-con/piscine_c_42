/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:03:07 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/22 22:15:30 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int				ft_ct_char(char *src, int i)
{
	int		j;

	j = 0;
	while (src[i])
	{
		if (src[i] == '\n')
			return (j);
		++i;
		++j;
	}
	return (j);
}

int				ft_ct_words(char *str)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (str[i] == '\n')
		++i;
	if (str[i] != 0)
		++k;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			while (str[i] == '\n')
				++i;
			if (str[i] != 0)
				++k;
		}
		++i;
	}
	return (k);
}

unsigned int	**in_tab(char *str, t_data *data)
{
	unsigned int	**ret;
	int				i;
	int				k;
	int				j;

	if (!(ret = malloc((ft_ct_words(str)) * sizeof(unsigned int *))))
		return (NULL);
	j = -1;
	i = 0;
	while (str[i] && ++j < ft_ct_words(str))
	{
		k = 0;
		while (str[i] == '\n')
			++i;
		if (!(ret[j] = malloc((ft_ct_char(str, i)) * sizeof(unsigned int))))
			return (NULL);
		while (str[i++] != '\n' && str[i])
		{
			if (str[i - 1] == data->obs)
				ret[j][k++] = 0;
			else
				ret[j][k++] = str[i - 1];
		}
	}
	return (ret);
}
