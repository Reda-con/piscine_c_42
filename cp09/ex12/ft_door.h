/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:29:20 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 12:30:16 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define FT_BOOL  char *
# define TRUE 1
# define FALSE 0
# define EXIT_SUCCESS 0
# define OPEN "OPEN"
# define CLOSE "CLOSE"

typedef struct	s_door
{
	FT_BOOL	state;
}				t_door;

#endif
