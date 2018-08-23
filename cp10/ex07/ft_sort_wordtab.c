/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:05:49 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 20:49:31 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_table(char **av, int ac)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < ac)
	{
		j = 1 + i;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		++i;
	ft_sort_table(tab, i);
}
