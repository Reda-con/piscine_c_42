/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:31:25 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 13:31:11 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int		ft_ct_char(char **av, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			k++;
		}
		i++;
	}
	return (k + 1 + (i * ft_strlen(sep)));
}

char	*ft_concat_params(char **argv, char *ret, char *sep)
{
	int		i;
	int		j;
	int		k;

	if (!(ret = (char *)malloc(ft_ct_char(argv, sep) * sizeof(char))))
		return (0);
	j = 0;
	k = 0;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			ret[k] = argv[j][i];
			i++;
			k++;
		}
		j++;
		ret = sep;
		k++;
	}
	write(1, "oui\n", 4);
	ret[k] = 0;
	return (ret);
}

char	*ft_join(char **tab, char *sep)
{
	char	*ret;

	ret = ft_concat_params(tab, ret, sep);
	return (ret);
}
