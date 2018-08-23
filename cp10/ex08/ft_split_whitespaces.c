/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:06:39 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/13 19:17:55 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ct_char(char *src, int i)
{
	int		j;

	j = 0;
	while (src[i])
	{
		if (src[i] == ' ' || src[i] == '\t' || src[i] == '\n')
			return (j);
		++i;
		++j;
	}
	return (j);
}

int		ft_ct_words(char *str)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		++i;
	if (str[i] != 0)
		++k;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				++i;
			if (str[i] != 0)
				++k;
		}
		++i;
	}
	return (k);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		i;
	int		k;
	int		j;

	ret = (char **)malloc((ft_ct_words(str) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (str[i] && j < ft_ct_words(str))
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		ret[j] = (char *)malloc((ft_ct_char(str, i) + 1) * sizeof(char));
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			ret[j][k++] = str[i++];
		ret[j++][k] = 0;
	}
	ret[j] = 0;
	return (ret);
}
