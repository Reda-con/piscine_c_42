# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reda-con <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 10:37:38 by reda-con          #+#    #+#              #
#    Updated: 2018/08/14 21:17:39 by reda-con         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = main.c print.c virif.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Werror -Wextra $(SRC)

clean:
	rm -f main.o print.o virif.o

fclean: clean
	rm -f $(NAME)

re: clean all
