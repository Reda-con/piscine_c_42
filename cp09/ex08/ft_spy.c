/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 00:58:40 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 14:49:00 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			++i;
		if (str[i] != to_find[j] && str[i] != to_find[j] - 32)
			return (0);
		while (to_find[j] == str[i + j] || to_find[j] - 32 == str[i + j])
		{
			if (to_find[j + 1] == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_breaking_balls(char *av)
{
	char	*bauer;
	char	*president;
	char	*attack;
	int		i;

	i = 0;
	bauer = "bauer";
	president = "president";
	attack = "attack";
	if (ft_strstr(av, bauer))
		return (1);
	if (ft_strstr(av, president))
		return (1);
	if (ft_strstr(av, attack))
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (ft_breaking_balls(av[i]))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
