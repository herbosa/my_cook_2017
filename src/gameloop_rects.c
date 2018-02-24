/*
** EPITECH PROJECT, 2017
** gameloop_rects.c
** File description:
** game loop and rectangle creation functions
*/

#include "cook.h"

void game_loop(sfRenderWindow *window, sprite_t **bg,
		sprite_t **brk, sprite_t **ing)
{
	sfClock *clock = sfClock_create();
	game_t *game = malloc(sizeof(game_t *) * 10);
	//sprite_t **pers = malloc(sizeof(sprite_t *) * 3);
	int j = 0;
	int time_i = 1000000;

	fill_game(game);
	srand((long long)&game);
	while (sfRenderWindow_isOpen(window)) {
		if (sfTime_asMicroseconds
			(sfClock_getElapsedTime(clock)) > time_i) {
			game->sec = 1;
			sfClock_restart(clock);
		} else
			game->sec = 0;
		if (bg[0]->o_sprt == 0) {
			for (j = 0; j < 37; j = j + 1)
				ing[j]->o_sprt = 0;
			display_home(window, bg);
		}
		if (bg[0]->o_sprt == 1)
			display_game(window, bg, ing, game);
		launch_pause_help_end(window, bg, brk, game->sec);
	}
}

sfIntRect create_rect(sfIntRect rect)
{
	rect.top = 0;
	rect.left = 0;
	rect.width = 200;
	rect.height = 200;
	return (rect);
}

sfIntRect create_rect_ing(sfIntRect rect)
{
	rect.top = 0;
	rect.left = 0;
	rect.width = 100;
	rect.height = 100;
	return (rect);
}
