/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:33:57 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/16 18:28:44 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list		*tmp;
	t_list		*to_free;

	tmp = NULL;
	to_free = NULL;
	if (*begin_list == NULL)
		return ;
	to_free = *begin_list;
	while (tmp)
	{
		tmp = to_free->next;
		free(to_free);
		to_free = tmp;
	}
	*begin_list = NULL;
}
