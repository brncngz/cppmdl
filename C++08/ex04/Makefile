

#	Makefile

NAME	=	Polander

SRC		=	./main.cpp \
				./Token.cpp \
				./Polander.cpp \
				./Tokens/Number.cpp \
				./Tokens/Closedbra.cpp \
				./Tokens/Openbra.cpp \
				./Tokens/Operator.cpp

OB	=	$(SRC:.cpp=.o)

CC	=	clang++
CLF	=	-Wall -Wextra -Werror -std=c++98 -g

RM	=	rm -rf
.PHONY:	all clean fclean re

%.o:%.cpp
	@$(CC) $(CLF) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OB)
	@$(CC) $(CLF) $(OB) -o $(NAME)

clean:
	@$(RM) $(OB)
fclean:	clean
	@$(RM) $(NAME)
re: fclean all
