/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 22:46:16 by nde-jesu          #+#    #+#             */
/*   Updated: 2018/08/22 21:43:03 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*my_realloc(char *str, int size)
{
	char	*cpy;
	int		i;

	cpy = NULL;
	if (!(cpy = malloc(sizeof(char) * (ft_strlen(str) + size))))
		return (NULL);
	i = ft_strlen(str);
	while (i < size)
	{
		cpy[i] = 0;
		++i;
	}
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		++i;
	}
	cpy[i] = 0;
	free(str);
	str = NULL;
	return (cpy);
}

char	*get_map_stdin(void)
{
	int		err;
	char	buf[BUF_SIZE + 1];
	char	*ret;

	if (!(ret = malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (NULL);
	while ((err = read(0, buf, BUF_SIZE)) && err != 0)
	{
		if (err == -1)
			error();
		buf[err] = '\0';
		ret = ft_strcat(ret, buf);
		ret = my_realloc(ret, err + BUF_SIZE);
	}
	if (buf[0] == 0)
	{
		error();
		exit(1);
	}
	return (ret);
}

void	init_buf(char *buf)
{
	int		i;

	i = -1;
	while (++i < ft_strlen(buf))
		buf[i] = '\0';
}

char	*get_map_file(char *argv)
{
	int		fd;
	int		err;
	char	buf[BUF_SIZE + 1];
	char	*ret;

	if ((fd = open(argv, O_RDONLY)) == -1)
		return (error());
	if (!(ret = malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (NULL);
	init_buf(ret);
	while ((err = read(fd, buf, BUF_SIZE)))
	{
		if (err == -1)
			return (error());
		buf[err] = '\0';
		ret = ft_strcat(ret, buf);
		ret = my_realloc(ret, err + BUF_SIZE);
	}
	if (close(fd) == -1)
		return (error());
	return (ret);
}
