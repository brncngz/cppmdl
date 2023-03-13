# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 09:37:41 by cromalde          #+#    #+#              #
#    Updated: 2021/04/16 11:30:38 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile	#

NAME	=	convert

SRC		=	./main.cpp ./Caster.cpp
OB		=	$(SRC:.cpp=.o)

CC		=	clang++
CFL		=	-Wall -Wextra -Werror -std=c++98 -g
RM		=	rm -rf

.PHONY:	all fclean clean re

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)

fclean : clean
	$(RM) $(NAME)

re : fclean all
