/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:38:52 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/17 10:35:13 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (begin_list == NULL)
		return (NULL);
	while (i < nbr)
	{
		if (begin_list->next == NULL)
			return (NULL);
		begin_list = begin_list->next;
		++i;
	}
	return (begin_list);
}
