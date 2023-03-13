

#		Makefile ex07

NAME	=	replace
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
CFL		=	-Wall -Wextra -Werror
RM		=	rm -rf

.PHONY:	all clean fclean re

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFL) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re :	fclean all
