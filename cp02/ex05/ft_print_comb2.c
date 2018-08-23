/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 18:37:08 by reda-con          #+#    #+#             */
/*   Updated: 2018/07/31 22:27:07 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '8')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				while (l <= '9')
				{
					if (j < l)
					{
						ft_putchar(i);
						ft_putchar(j);
						ft_putchar(' ');
						ft_putchar(k);
						ft_putchar(l);
						ft_putchar(',');
						ft_putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
