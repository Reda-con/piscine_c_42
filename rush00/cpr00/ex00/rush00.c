/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:09:51 by alatrach          #+#    #+#             */
/*   Updated: 2018/08/04 16:50:05 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	only_print(int x, int y, int ctx, int cty)
{
	if (ctx == 1 && (y == cty || cty == 1))
		ft_putchar('o');
	else if ((ctx != x && ctx != 1) && (cty == y || cty == 1))
		ft_putchar('-');
	else if ((ctx == x) && (cty == y || cty == 1))
		ft_putchar('o');
	else if ((ctx == 1 || ctx == x) && (cty != y || cty != 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int ctx;
	int cty;

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
