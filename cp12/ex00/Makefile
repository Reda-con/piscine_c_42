# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reda-con <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 11:46:01 by reda-con          #+#    #+#              #
#    Updated: 2018/08/17 12:55:52 by reda-con         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = mai.c

OBJ = mai.o

NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -L. -lft

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
