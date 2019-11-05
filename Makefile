##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC 	=	my_printf.c

OBJ	= 	$(SRC:.c=.o)

NAME 	=	my_printf

CFLAGS += -I ./lib/my

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C ./lib/my/
	gcc -o $(NAME) $(OBJ) -Wall -Wextra -L ./lib/my -lmy

clean:	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

auteur:	echo $(USER) < auteur