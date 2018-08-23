/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:08:48 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/14 21:26:23 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>

typedef int		(*t_do_ops)(int, int);
int				ft_atoi(char *str);
int				ft_str_is_numeric(char *str);
int				ft_is_op(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);

#endif
