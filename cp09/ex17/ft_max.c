/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:16:08 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 13:16:54 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int		i;
	int		rep;

	i = lenght - 1;
	rep = tab[i];
	while (i > 0)
	{
		if (rep < tab[i - 1])
			rep = tab[i - 1];
		--i;
	}
	return (rep);
}
