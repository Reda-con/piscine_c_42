/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:43:19 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/15 22:27:38 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		fl;

	i = 0;
	fl = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			fl = 0;
		i++;
	}
	if (fl == 1)
		return (fl);
	i = 0;
	fl = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			fl = 0;
		++i;
	}
	return (fl);
}
