

#		Makefile	#

NAME	=	identifier

SRC		=	./main.cpp \
			./Identifyer.cpp

OB		=	$(SRC:.cpp=.o)

CC		=	clang++
CFL		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:	all fclean clean re

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME): $(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)
fclean: clean
	$(RM) $(NAME)
re:	fclean all
