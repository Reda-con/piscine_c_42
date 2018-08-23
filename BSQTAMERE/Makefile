# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reda-con <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 21:58:18 by reda-con          #+#    #+#              #
#    Updated: 2018/08/22 23:28:48 by reda-con         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c \
	  solv.c \
	  get_map.c \
	  test_map.c \
	  libft.a \
	  real_map.c \
	  print.c

OBJ = main.o \
	  solv.o \
	  get_map.o \
	  test_map.o \
	  real_map.o \
	  print.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
