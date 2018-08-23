/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:38:37 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 14:41:22 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int		i;
	int		ct;

	i = 0;
	ct = 0;
	while (tab[i])
	{
		if (f(tab[i]))
				++ct;
		++i;
	}
	return (ct);
}
