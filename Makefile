##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	./src/*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-W -Wall -Wextra -Iinclude

LDFLAGS	=	-l c_graph_prog -L ./lib/my -l myprintf


all:	libmake $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

libmake:
	make -C ./lib/my

clean:
	make clean -C ./lib/my/
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ./lib/my/
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re libmake
