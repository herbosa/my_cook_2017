/*
** EPITECH PROJECT, 2018
** cook
** File description:
** cook
*/

#include "cook.h"

void reinit_val(sprite_t **bg, game_t *game)
{
	int j = 0;

	bg[0]->o_sprt = 0;
	bg[6]->o_sprt = 0;
	game->point = 0;
	game->elapsed_time = 0;
	game->lastcmd = 0;
	for (j = 0; j < 150; j = j + 1) {
		(game->command)->cmd[j] = '\0';
		(game->command)->time[j] = 13;
	}
}
