/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:41:11 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/13 19:14:11 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ct_chars(char **av)
{
	int		i;
	int		j;
	int		k;

	i = 1;
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
	return (k + 1);
}

void	write_in(char **argv, char *ret, int argc)
{
	int		i;
	int		j;
	int		k;

	j = 1;
	k = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ret[k] = argv[j][i];
			i++;
			k++;
		}
		j++;
		ret[k] = '\n';
		k++;
	}
	ret[k - 1] = 0;
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ret;

	if (!(ret = (char *)malloc(ft_ct_chars(argv) * sizeof(char))))
		return (0);
	write_in(argv, ret, argc);
	return (ret);
}
