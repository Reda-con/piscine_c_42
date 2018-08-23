# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reda-con <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 13:29:43 by reda-con          #+#    #+#              #
#    Updated: 2018/08/17 14:48:25 by reda-con         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = main.c \
	  print.c

OBJ = main.o \
	  print.o

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -L. -lft

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
