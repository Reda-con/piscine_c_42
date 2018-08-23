/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:24:54 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/22 14:41:41 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*new;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = list;
		list = new;
		++i;
	}
	return (list);
}
