/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 22:04:13 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/22 22:41:26 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define BUF_SIZE 65536

typedef struct			s_data
{
	int			x;
	int			y;
	int			max;
	int			nb_line;
	int			nb_col;
	char		off;
	char		obs;
	char		full;
}						t_data;

char					*ft_strcat(char *dest, char *src);
int						ft_strlen(char *str);
int						ft_atoi(char *str);
void					ft_putchar(char c);
void					ft_putstr(char *str, int ln);

char					*error(void);
void					errorm(void);
char					*get_map_stdin(void);
char					*get_map_file(char *argv);
int						valide(char *str, t_data *data);

void					fst_step(unsigned int **map, t_data *data);
void					scd_step(unsigned int **map, t_data *data);
unsigned int			**in_tab(char *map, t_data *data);
void					print_words_tables(unsigned int **map, t_data *data);

#endif
