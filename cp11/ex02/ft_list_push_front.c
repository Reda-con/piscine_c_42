/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 18:36:03 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/16 12:57:31 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*tmp;
	t_list		*new;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		tmp = *begin_list;
		new->next = tmp;
		*begin_list = new;
	}
}
