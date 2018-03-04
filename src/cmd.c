/*
** EPITECH PROJECT, 2017
** cmd.c
** File description:
** cmd functions
*/

#include "cook.h"

void rm_point(game_t *game)
{
	if (game->point >= 5)
		game->point = game->point - 5;
	else
		game->point = 0;
}

void rm_from_cmd(game_t *game, int nb_cmd)
{
	int  i = 0;

	for (i = 0; (game->command)->cmd[i]; i = i + 1)
		if ((game->command)->time[i] < 0) {
			(game->command)->cmd =
				remove_str_elem((game->command)->cmd, i);
			(game->command)->time =
				remove_intab_elem((game->command)->time, i);
			rm_point(game);
			sfMusic_play(game->lose);
			return;
		} else if ((game->command)->cmd[i] == nb_cmd) {
			(game->command)->cmd =
				remove_str_elem((game->command)->cmd, i);
			game->point = game->point + ((game->command)->time[i]);
			(game->command)->time =
				remove_intab_elem((game->command)->time, i);
			sfMusic_play(game->win);
			return;
		}
}

void make_burgers_drink(sprite_t **ing)
{
	if (ing[30]->o_sprt == 0 && ing[28]->o_sprt == 0 &&
		ing[31]->o_sprt == 0 && ing[25]->o_sprt == 0 &&
		ing[27]->o_sprt == 0)
		make_fries(ing);
	if (ing[30]->o_sprt == 0 && ing[28]->o_sprt == 0 &&
		ing[31]->o_sprt == 0 && ing[35]->o_sprt == 0) {
		make_burger(ing);
		make_vege_burger(ing);
	}
	if (ing[33]->o_sprt == 0 && ing[34]->o_sprt == 0)
		make_beer(ing);
	if (ing[34]->o_sprt == 0 && ing[32]->o_sprt == 0)
		make_coca(ing);
	if (ing[33]->o_sprt == 0 && ing[32]->o_sprt == 0)
		make_fanta(ing);
}

void make_comandes(sprite_t **ing)
{
	if (ing[30]->o_sprt == 0 && ing[31]->o_sprt == 0 &&
		ing[25]->o_sprt == 0 && ing[27]->o_sprt == 0
		&& ing[35]->o_sprt == 0)
		make_pizza(ing);
	if (ing[31]->o_sprt == 0 && ing[28]->o_sprt == 0 &&
		ing[25]->o_sprt == 0 && ing[27]->o_sprt == 0
		&& ing[35]->o_sprt == 0)
		make_salad(ing);
	if (ing[30]->o_sprt == 0 && ing[28]->o_sprt == 0 &&
		ing[25]->o_sprt == 0 && ing[27]->o_sprt == 0
		&& ing[35]->o_sprt == 0)
		make_donut(ing);
	make_burgers_drink(ing);
}
