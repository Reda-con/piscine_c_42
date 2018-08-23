/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:06:33 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 18:07:51 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_op(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (i > 2)
		return (0);
	if (str[0] != '+' && str[0] != '-' && str[0] != '%' \
			&& str[0] != '/' && str[0] != '*')
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int		res;
	int		i;
	int		fl;

	i = 0;
	fl = 1;
	res = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' '
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		fl = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * fl);
}
