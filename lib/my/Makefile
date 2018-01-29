##
## EPITECH PROJECT, 2017
## makefile for libmy 
## File description:
## compile a lib
##


SRC	=	./src/binary_convert.c\
		./src/my_evil_str.c\
		./src/my_putchar.c\
		./src/my_put_nbr.c\
		./src/my_printf.c\
		./src/hexa_convert.c\
		./src/my_strlen.c\
		./src/str_octal_noprintable.c\
		./src/my_putstr.c\
		./src/my_put_shortnbr.c\
		./src/my_put_unsigned_nbr.c\
		./src/spaces.c\
		./src/shape_plus.c\
		./src/short_and_long_manage.c\
		./src/call_function.c\
		./src/my_rand.c\
		./src/my_strcat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmyprintf.a

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
