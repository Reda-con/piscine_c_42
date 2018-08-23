/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:03:12 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/23 11:07:10 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (begin_list1 == NULL)
		return ;
	while ((*begin_list1)->next)
		*begin_list1 = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
}
