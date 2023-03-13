# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 10:05:55 by cromalde          #+#    #+#              #
#    Updated: 2021/04/17 11:40:34 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile	#

NAME	=	array

SRC		=	./main.cpp #./Array.cpp
OB		=	$(SRC:.cpp=.o)

CC		=	clang++
CFL		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:	all clean fclean re

%.o:%.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM)	$(OB)
fclean:	clean
	$(RM)	$(NAME)
re:	fclean all
