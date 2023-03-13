
#	Makefile	Brainfuck

NAME	=	mindopen

SRC		=	./main.cpp ./MindOpen.cpp
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
	$(RM) $(OB)
fclean:	clean
	$(RM) $(NAME)
re:	fclean all
