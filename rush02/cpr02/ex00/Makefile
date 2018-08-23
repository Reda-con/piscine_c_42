# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reda-con <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 13:18:08 by reda-con          #+#    #+#              #
#    Updated: 2018/08/19 16:56:49 by reda-con         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c \
	  colle_detect.c \
	  stream.c \
	  print.c

OBJ = main.o \
	  colle_detect.o \
	  stream.o \
	  print.o

all: $(NAME)

$(NAME): 
	gcc -o $(NAME) $(SRC) -L. -lft -Wall -Werror -Wextra

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
