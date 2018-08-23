/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:27:13 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/17 16:38:08 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 35
# include <errno.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str, int out);
int		ft_atoi(char *str);

#endif
