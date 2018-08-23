/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:12:15 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/13 16:46:55 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	ret = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
