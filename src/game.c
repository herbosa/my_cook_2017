/*
** EPITECH PROJECT, 2017
** game.c
** File description:
** game functions
*/

#include "cook.h"

void clean_game_bool(sprite_t **ing, sprite_t **bg)
{
	int i = 0;

	for (i = 0; i < 24; i = i + 1)
		ing[i]->o_sprt = 0;
	ing[26]->o_sprt = 0;
	ing[29]->o_sprt = 0;
	if (ing[36]->o_sprt == 151) {
		bg[0]->o_sprt = 4;
		for (i = 0; i < 37; i = i + 1)
			ing[i]->o_sprt = 0;

	}
}

void game_event(sfRenderWindow *window, sprite_t **bg, sprite_t **ing, game_t *game)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_game(window, bg, ing);
		if (event.type == sfEvtMouseButtonPressed) {
			clicked_game(ing, event);
			sfMusic_play(game->punch);
		}
		button_game(ing, event);
	}
}

void display_game(sfRenderWindow *window, sprite_t **bg,
		sprite_t **ing, game_t *game)
{
	add_cmd(game);
	clean_game_bool(ing, bg);
	if (game->sec == 1)
		ing[36]->o_sprt = ing[36]->o_sprt + 1;
	game_event(window, bg, ing, game);
	if (ing[23]->o_sprt == 1)
		bg[0]->o_sprt = 2;
	game_setsprite(ing);
	make_comandes(ing);
	drawer_game(window, bg, ing, game);
	disp_cmd(window, game, 0);
	end_point_disp(window, game->point);
	sfRenderWindow_display(window);
}

void launch_pause_help_end(sfRenderWindow *window, sprite_t **bg,
			sprite_t **brk, game_t *game)
{
	if (bg[0]->o_sprt == 2)
		display_pause(window, bg, brk);
	if (bg[0]->o_sprt == 3)
		display_help(window, bg);
	if (bg[0]->o_sprt == 4)
		display_end(window, bg, game);
}

void fill_game(game_t *game)
{
	int j = 0;

	game->command = malloc(sizeof(cmd_t));
	game->sec = 0;
	game->point = 0;
	game->lastcmd = 0;
	game->elapsed_time = 0;
	(game->command)->cmd = malloc(sizeof(char) * 152);
	(game->command)->time = malloc(sizeof(int) * 152);
	game->win = sfMusic_createFromFile("rsrc/sounds/win.ogg");
	game->lose = sfMusic_createFromFile("rsrc/sounds/angry.wav");
	game->punch = sfMusic_createFromFile("rsrc/sounds/punch.ogg");
	game->bell = sfMusic_createFromFile("rsrc/sounds/bell.ogg");
	for (j = 0; j < 150; j = j + 1) {
		(game->command)->cmd[j] = '\0';
		(game->command)->time[j] = 13;
	}
	(game->command)->time[j] = '\0';
}
