NAME		= tests
SRC			= Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
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

st: re
	./${NAME}