##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC 	=	lib/my/my_put_nbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_printf.c


OBJ	= 	$(SRC:.c=.o)

NAME 	=	libmy.a

SRC_TESTS 	=	tests/test_my_printf.c

OBJ_TESTS	= 	$(SRC:.c=.o)

NAME_TESTS 	=	unitest

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:	$(OBJ_TESTS)
			gcc -o $(NAME_TESTS) $(OBJ_TESTS) --coverage -lcriterion
			./$(NAME_TESTS)

clean:	rm -f $(OBJ)
		rm -f $(OBJ_TESTS)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.o

auteur:	echo $(USER) < auteur
