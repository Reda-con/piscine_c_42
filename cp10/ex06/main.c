/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:05:23 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 19:01:23 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_do_op.h"

int		do_op(int fst, int scd, char op)
{
	if (op == '+')
		return (fst + scd);
	if (op == '-')
		return (fst - scd);
	if (op == '*')
		return (fst * scd);
	if (op == '/')
		return (fst / scd);
	if (op == '%')
		return (fst % scd);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!ft_is_op(av[2]))
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
	ft_putchar('\n');
	return (0);
}
