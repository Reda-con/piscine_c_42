/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:28:11 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 12:30:34 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		++i;
	}
}

FT_BOOL		close_door(t_door *door)
{
	if (door->state != CLOSE)
		ft_putstr("Door closing...\n");
	door->state = "CLOSE";
	return ("TRUE");
}

FT_BOOL		open_door(t_door *door)
{
	if (door->state != OPEN)
		ft_putstr("Door opening...\n");
	door->state = "OPEN";
	return ("TRUE");
}

FT_BOOL		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state);
}

FT_BOOL		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state);
}
