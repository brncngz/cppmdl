# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/10 10:08:17 by cromalde          #+#    #+#              #
#    Updated: 2021/04/10 14:47:57 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Makefile eval_expr

NAME	=	eval_expr

SRC		=	Fixed.cpp \
			main.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
CFL		=	-Wall -Wextra -Werror -g
RM		=	rm -rf

.PHONY:	all clean fclean re

%.o:	%.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFL) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re:	fclean all
