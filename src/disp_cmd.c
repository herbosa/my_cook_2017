/*
** EPITECH PROJECT, 2018
** cook
** File description:
** cook
*/

#include "cook.h"

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
		sfMusic_play(game->bell);
	}
	if (game->sec == 1)
		game->elapsed_time = game->elapsed_time + 1;
}

void black_disp_cmd(sfRenderWindow *window, game_t *game, int i)
{
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
}

void red_disp_cmd(sfRenderWindow *window, game_t *game, int i)
{
	if ((game->command)->cmd[i] == 1)
		disp_str_red(window, "BURGER", 10, (50 * i) + 120);
	if ((game->command)->cmd[i] == 2)
		disp_str_red(window, "VEGAN BURGER", 10, (50 * i) + 120);
	if ((game->command)->cmd[i] == 3)
		disp_str_red(window, "DONUT", 10, 50 * i + 120);
	if ((game->command)->cmd[i] == 4)
		disp_str_red(window, "SALAD", 10, 50 * i + 120);
	if ((game->command)->cmd[i] == 5)
		disp_str_red(window, "PIZZA", 10, 50 * i + 120);
	if ((game->command)->cmd[i] == 6)
		disp_str_red(window, "FANTA", 10, 50 * i + 120);
	if ((game->command)->cmd[i] == 7)
		disp_str_red(window, "COKE", 10, 50 * i + 120);
	if ((game->command)->cmd[i] == 8)
		disp_str_red(window, "BEER", 10, 50 * i + 120);
	if ((game->command)->cmd[i] == 9)
		disp_str_red(window, "FRIES", 10, 50 * i + 120);
}

void disp_str_red(sfRenderWindow *window, char *str, int x, int y)
{
	sfText *start = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin;

	origin.x = x;
	origin.y = y;
	sfText_setString(start, str);
	sfText_setFont(start, font);
	sfText_setCharacterSize(start, 30);
	sfText_setColor(start, sfColor_fromRGB(200, 14, 14));
	sfText_move(start, origin);
	sfRenderWindow_drawText(window, start, NULL);
	sfText_destroy(start);
	sfFont_destroy(font);
}

void disp_cmd(sfRenderWindow *window, game_t *game, int i)
{
	for (i = 0; (game->command)->cmd[i] && i < 10; i = i + 1) {
		if ((game->command)->time[i] >= 6)
			black_disp_cmd(window, game, i);
		if ((game->command)->time[i] < 6)
			red_disp_cmd(window, game, i);
		if ((game->command)->time[i] <= 0)
			rm_from_cmd(game, i);
		if (game->sec == 1)
			(game->command)->time[i] = (game->command)->time[i] - 1;
	}
}
