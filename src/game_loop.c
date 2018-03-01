/*
** EPITECH PROJECT, 2017
** game_loop.c
** File description:
** game loop functions
*/

#include "cook.h"

void destroy(game_t *game, sfMusic *cook, sfClock *clock)
{
	sfClock_destroy(clock);
	sfMusic_destroy(cook);
	sfMusic_destroy(game->win);
	sfMusic_destroy(game->lose);
	sfMusic_destroy(game->punch);
	sfMusic_destroy(game->bell);
	free((game->command)->cmd);
	free((game->command)->time);
	free(game->command);
	free(game);
}

void loop_time(sfClock *clock, game_t *game, int time_i)
{
	if (sfTime_asMicroseconds
		(sfClock_getElapsedTime(clock)) > time_i) {
		game->sec = 1;
		sfClock_restart(clock);
	} else
		game->sec = 0;
}

void loop_display(sfRenderWindow *window, game_t *game,
	sprite_t **bg, sprite_t **ing)
{
	int j = 0;

	if (bg[0]->o_sprt == 0) {
		for (j = 0; j < 37; j = j + 1)
			ing[j]->o_sprt = 0;
		display_home(window, bg, game);
	}
	if (bg[0]->o_sprt == 1)
		display_game(window, bg, ing, game);
}

void game_loop(sfRenderWindow *window, sprite_t **bg,
		sprite_t **brk, sprite_t **ing)
{
	sfClock *clock = sfClock_create();
	game_t *game = malloc(sizeof(game_t *) * 10);
	int time_i = 1000000;
	sfMusic *cook = sfMusic_createFromFile("rsrc/sounds/cook.ogg");

	fill_game(game);
	srand((long long)&game);
	sfMusic_play(cook);
	sfMusic_setLoop(cook, 1);
	while (sfRenderWindow_isOpen(window)) {
		loop_time(clock, game, time_i);
		loop_display(window, game, bg, ing);
		launch_pause_help_end(window, bg, brk, game);
	}
	destroy(game, cook, clock);
}
