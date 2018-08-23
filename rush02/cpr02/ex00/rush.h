/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 12:26:33 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/19 16:57:24 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# define SIZE_BUF 50

void	colle_detect(char **tab);
void	print_colle(char **buff, int colle, int col, int ligne);
void	print_colle234(char **buff, int col, int ligne);
void	print_colle_ligne(char **buff, int col, int ligne);
void	print_colle_col(char **buff, int col, int ligne);
void	print_all(void);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*cpy_buf(void);
char	**in_tab(char *str);

#endif
