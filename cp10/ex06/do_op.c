/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:41:02 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 21:19:18 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		do_add(int i, int j)
{
	return (i + j);
}

int		do_less(int i, int j)
{
	return (i - j);
}

int		do_mult(int i, int j)
{
	return (i * j);
}

int		do_div(int i, int j)
{
	return (i / j);
}

int		do_mod(int i, int j)
{
	return (i % j);
}
