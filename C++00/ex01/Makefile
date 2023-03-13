# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 12:07:22 by cromalde          #+#    #+#              #
#    Updated: 2021/04/07 15:24:26 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile

NAME =	phonebook
SRC	=	./phonebook.class.cpp ./main.cpp
INC	=	./phonebook.class.hpp
OB	=	$(SRC:.cpp=.o)
CC	=	clang++
FLG	=	-Wall -Wextra -Werror

.PHONY:	re fclean clean all

%.o: %.cpp
	$(CC) $(FLG) -c $^ -o $@

all:	$(NAME)

$(NAME): $(OB)
	$(CC) $(FLG) $(OB) -o $(NAME)

clean:
	rm -rf $(OB)
fclean:	clean
	rm -rf $(NAME)
re:	fclean all
