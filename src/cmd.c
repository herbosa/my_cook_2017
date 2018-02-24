/*
** EPITECH PROJECT, 2017
** cmd.c
** File description:
** cmd functions
*/

#include "cook.h"

void rm_from_cmd(game_t *game, int nb_cmd)
{
	int  i = 0;

	while ((game->command)->cmd[i]) {
		if ((game->command)->cmd[i] == nb_cmd || (game->command)->time[i] < 0) {
			(game->command)->cmd = remove_str_elem((game->command)->cmd, i);
			(game->command)->time = remove_intab_elem((game->command)->time, i);
			return;
		}
		i = i + 1;
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

void add_cmd(game_t *game)
{
	int i = 0;

	if (game->lastcmd == 0 ||
		(game->elapsed_time - (4 + (rand() % 6)))  >= 0) {
		for (i = 0; (game->command)->cmd[i]; i = i + 1);
		(game->command)->cmd[i] = (rand() % 9) + 1;
		(game->command)->cmd[i + 1] = '\0';
		game->lastcmd = 1;
		game->elapsed_time = 0;
	}
	if (game->sec == 1)
		game->elapsed_time = game->elapsed_time + 1;
}

void disp_cmd(sfRenderWindow *window, game_t *game, int i)
{
	for (i = 0; (game->command)->cmd[i] && i < 10; i = i + 1) {
		if ((game->command)->cmd[i] == 1)
			disp_str(window, "BURGER", 10, (50 * i) + 120);
		if ((game->command)->cmd[i] == 2)
			disp_str(window, "VEGAN BURGER", 10, (50 * i) + 120);
		if ((game->command)->cmd[i] == 3)
			disp_str(window, "DONUT", 10, 50 * i + 120);
		if ((game->command)->cmd[i] == 4)
			disp_str(window, "SALAD", 10, 50 * i + 120);
		if ((game->command)->cmd[i] == 5)
			disp_str(window, "PIZZA", 10, 50 * i + 120);
		if ((game->command)->cmd[i] == 6)
			disp_str(window, "FANTA", 10, 50 * i + 120);
		if ((game->command)->cmd[i] == 7)
			disp_str(window, "COKE", 10, 50 * i + 120);
		if ((game->command)->cmd[i] == 8)
			disp_str(window, "BEER", 10, 50 * i + 120);
		if ((game->command)->cmd[i] == 9)
			disp_str(window, "FRIES", 10, 50 * i + 120);
		if ((game->command)->time[i] <= 0)
			rm_from_cmd(game, i);
		if (game->sec == 1)
			(game->command)->time[i] = (game->command)->time[i] - 1;
	}
}
