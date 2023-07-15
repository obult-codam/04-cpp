NAME		= test
SRC			= main.cpp Span.cpp
CC			= c++
RM			= rm -f
HEADER		= -I .
CFLAGS		= -Wall -Werror -Wextra -std=c++98
OBJ = $(SRC:%.cpp=%.o)

all:		${NAME}

%.o:		%.cpp
				$(CC) -c $(CFLAGS) $(HEADER) $< -o $@

clean:
				${RM} ${OBJ}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

${NAME}:	${OBJ}
				${CC} ${CFLAGS} ${OBJ} -o $(NAME)

.PHONY: all clean fclean re

st: re
	./${NAME}