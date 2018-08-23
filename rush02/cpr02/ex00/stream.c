/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 12:25:21 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/19 14:07:45 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_ct_char(char *src, int i)
{
	int		j;

	j = 0;
	while (src[i])
	{
		if (src[i] == '\n')
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
	while (str[i] == '\n')
		++i;
	if (str[i] != 0)
		++k;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			while (str[i] == '\n')
				++i;
			if (str[i] != 0)
				++k;
		}
		++i;
	}
	return (k);
}

char	**in_tab(char *str)
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
		while (str[i] == '\n')
			++i;
		ret[j] = (char *)malloc((ft_ct_char(str, i) + 1) * sizeof(char));
		while (str[i] != '\n' && str[i])
			ret[j][k++] = str[i++];
		ret[j++][k] = 0;
	}
	ret[j] = 0;
	return (ret);
}

char	*ft_realloc(char *str, int size)
{
	char	*cpy;
	int		i;

	i = 0;
	if (!(cpy = malloc(sizeof(char) * (ft_strlen(str) + size))))
		return (NULL);
	while (i < (ft_strlen(str) + size))
	{
		cpy[i] = '\0';
		++i;
	}
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		++i;
	}
	free(str);
	return (cpy);
}

char	*cpy_buf(void)
{
	char	buf[SIZE_BUF + 1];
	int		err;
	char	*tmp;

	if (!(tmp = malloc(sizeof(char) * (SIZE_BUF + 1))))
		return (NULL);
	while ((err = read(0, buf, SIZE_BUF)))
	{
		if (err == -1)
		{
			ft_putstr("aucune\n");
			return (NULL);
		}
		buf[err] = '\0';
		tmp = ft_strcat(tmp, buf);
		tmp = ft_realloc(tmp, err + SIZE_BUF);
	}
	return (tmp);
}
