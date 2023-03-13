# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 16:29:11 by cromalde          #+#    #+#              #
#    Updated: 2021/04/16 16:32:49 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Makefile	#

NAME	=	iterator

SRC		=	main.cpp
OB		=	$(SRC:.cpp=.o)

CC		=	clang++
CFL		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:	all fclean clean re

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)
fclean:
	$(RM) $(NAME)
re:	fclean all
