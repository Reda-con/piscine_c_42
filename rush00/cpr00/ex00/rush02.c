/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agugliel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:16:01 by agugliel          #+#    #+#             */
/*   Updated: 2018/08/19 15:18:58 by reda-con         ###   ########.fr       */
/*   Updated: 2018/08/04 16:49:46 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	only_print(int x, int y, int ctx, int cty)
{
	if ((ctx == 1 && cty == 1) || (ctx == x && cty == 1))
		ft_putchar('A');
	else if ((ctx != x && ctx != 1) && (y == cty || cty == 1))
		ft_putchar('B');
	else if ((ctx == 1 && cty == y) || (ctx == x && cty == y))
		ft_putchar('C');
	else if ((ctx == 1 || ctx == x) && (cty != 1 && cty != y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		ctx;
	int		cty;

	cty = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (cty <= y)
	{
		ctx = 1;
		while (ctx <= x)
		{
			only_print(x, y, ctx, cty);
			ctx++;
		}
		ft_putchar('\n');
		cty++;
	}
}
