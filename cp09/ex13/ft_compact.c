/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:13:56 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 14:07:32 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int lenght)
{
	int		i;
	int		j;

	j = lenght;
	i = 0;
	while (tab[i])
	{
		if (tab[i][0] == '\0')
		{
			tab[i] = tab[i + 1];
			--j;
		}
		++i;
	}
	return (j);
}
