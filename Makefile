##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/main.c			\
		src/home_help.c			\
		src/display.c			\
		src/pause.c			\
		src/make_eat.c			\
		src/make_drinks.c		\
		src/fill_ing_drinks_sauces.c	\
		src/fill_ing_meats.c		\
		src/fill_ing_salad.c		\
		src/fill_tabs.c			\
		src/score_rects.c		\
		src/fill_ing_key.c		\
		src/game_bind.c			\
		src/disp_orders_drinks_salad.c	\
		src/disp_orders.c		\
		src/menu.c			\
		src/cmd.c			\
		src/game.c			\
		src/sprt_str.c			\
		src/reinit_val.c		\
		src/game_loop.c			\
		src/disp_cmd.c			\
		src/disp_str.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_cook

CFLAGS	=	-g -W -Wall -Wextra -Iinclude

LDFLAGS	=	-g -l c_graph_prog -L ./lib/my -l myprintf -L ./lib/graph -lgraph


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
