/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:06:58 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/06 15:12:10 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **arv)
{
	int		i;
	int		j;

	j = 1;
	if (ac > 1)
	{
		while (j < ac)
		{
			i = 0;
			while (arv[j][i])
			{
				ft_putchar(arv[j][i]);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
	return (0);
}
