/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:18:25 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/17 15:12:07 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	ft_error(int err, char *str)
{
	if (err == 2)
	{
		ft_putstr("./ft_cat: ", 2);
		ft_putstr(str, 2);
		ft_putstr(": No such a file or directory\n", 2);
	}
	if (err == 21)
	{
		ft_putstr("./ft_cat: ", 2);
		ft_putstr(str, 2);
		ft_putstr(": Is a directory\n", 2);
	}
}

int		print(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	errno = 0;
	if ((fd = open(str, O_RDONLY)) == -1)
		return (errno);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if ((ret = read(fd, buf, BUF_SIZE)) == -1)
			return (errno);
		buf[ret] = '\0';
		ft_putstr(buf, 1);
	}
	if (close(fd) == -1)
		return (errno);
	return (0);
}

void	print_stand(void)
{
	int		err;
	char	buf[BUF_SIZE + 1];

	if ((err = read(0, buf, BUF_SIZE)) == -1)
		return ;
	buf[err] = '\0';
	ft_putstr(buf, 1);
}

int		main(int ac, char **av)
{
	int		i;
	int		err;

	if (ac == 1)
	{
		while (1)
			print_stand();
	}
	i = 1;
	while (i < ac)
	{
		err = print(av[i]);
		if (err != 0)
			ft_error(err, av[i]);
		++i;
	}
	return (0);
}
