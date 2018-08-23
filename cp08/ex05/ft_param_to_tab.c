/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:43:39 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/20 21:21:08 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"
#include <stdio.h>
#include <unistd.h>

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	i = ft_strlen(src);
	ret = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*ret;
	int			i;

	i = 0;
	ret = (t_stock_par *)malloc(ac * sizeof(t_stock_par));
	while (i < ac)
	{
		ret[i].size_param = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
		ret[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	ret[i].str = 0;
	return (ret);
}
