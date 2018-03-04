/*
** EPITECH PROJECT, 2018
** cook
** File description:
** cook
*/

#include "cook.h"

void display_home(sfRenderWindow *window, sprite_t **bg, game_t *game)
{
	sfEvent event;

	start_disp(window, bg[0]->s_sprt, bg);
	reinit_val(bg, game);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_home(window, bg);
		clicked_home(event, bg, window);
	}
	sfRenderWindow_display(window);
}

void display_help(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	help_disp(window, bg);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_help(window, bg);
		clicked_help(event, bg);
	}
	sfRenderWindow_display(window);
}
