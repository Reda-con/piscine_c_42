/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:20:13 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 13:20:46 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int lenght)
{
	int		i;
	int		j;
	int		test;

	i = 0;
	while (i < lenght)
	{
		test = 0;
		j = 0;
		while (j < lenght)
		{
			if (tab[i] == tab[j])
				++test;
			++j;
		}
		if (test % 2 == 1)
			return (tab[i]);
		++i;
	}
	return (0);
}
