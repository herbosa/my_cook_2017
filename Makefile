##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	./src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_cook

CFLAGS	=	-W -Wall -Wextra -Iinclude

LDFLAGS	=	-l c_graph_prog -L ./lib/my -l myprintf -L ./lib/graph -lgraph


all:	libmake $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

libmake:
	make -C ./lib/my
	make -C ./lib/graph

clean:
	make clean -C ./lib/my/
	make clean -C ./lib/graph
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ./lib/my/
	make fclean -C ./lib/graph
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re libmake
