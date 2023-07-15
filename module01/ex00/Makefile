NAME		= eaters.exe
SRC			= $(wildcard *.cpp)
CC			= c++
RM			= rm -f
HEADER		= -I .
CFLAGS		= -Wall -Werror -Wextra
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
				${CC} ${OBJ} -o $(NAME)

.PHONY: all clean fclean re