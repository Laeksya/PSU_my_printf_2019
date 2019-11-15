##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC 	=	my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_putnbr_base.c	\
		my_strlen.c	\
		my_printf.c

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