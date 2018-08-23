/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:27:27 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 11:41:05 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*ret;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	ret = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		++i;
		++min;
	}
	*range = ret;
	return (i);
}
