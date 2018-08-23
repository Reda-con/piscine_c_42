/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:08:53 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/23 10:59:23 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*to_free;

	if (begin_list == NULL)
		return ;
	tmp = *begin_list;
	while (tmp->next)
	{
		to_free = tmp->next;
		if ((*cmp)(to_free->data, data_ref) == 0)
		{
			tmp->next = to_free->next;
			free(to_free);
		}
		if (tmp->next)
			tmp = tmp->next;
	}
	if ((*cmp)((*begin_list)->data, data_ref) == 0)
	{
		to_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(to_free);
	}
}
