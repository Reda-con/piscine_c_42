/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agugliel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:06:48 by agugliel          #+#    #+#             */
/*   Updated: 2018/08/18 12:19:24 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

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

int		main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
			return (0);
			}
