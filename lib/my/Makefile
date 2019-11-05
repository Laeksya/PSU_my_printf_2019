##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC 	=	my_put_nbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\


OBJ	= 	$(SRC:.c=.o)

NAME 	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

auteur:	echo $(USER) < auteur
