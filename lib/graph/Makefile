##
## EPITECH PROJECT, 2017
## makefile for libmy 
## File description:
## compile a lib
##


SRC	=	src/create_sprite.c\
		src/create_rect.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libgraph.a

CFLAGS	=	-W -Wall -Wextra -Iinclude

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	fclean clean all re
