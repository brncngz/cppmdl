# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/05 18:16:49 by cromalde          #+#    #+#              #
#    Updated: 2021/04/05 18:50:39 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		-*- 	Makeile		-*-		#

NAME = megaphone
SRCS	=	./megaphone.cpp
OBJ	=	$(SRCS:.cpp=.o)
CC	=	clang++
FLAG =	-Wall -Wextra -Werror

.PHONY:	re fclean clean all

%.o: %.cpp
	$(CC) $(FLAG) -c  $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re :	fclean all
