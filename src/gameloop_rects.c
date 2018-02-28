/*
** EPITECH PROJECT, 2017
** gameloop_rects.c
** File description:
** game loop and rectangle creation functions
*/

#include "cook.h"


char *get_score(int nb)
{
	char *score = malloc(sizeof(char) * 3);
	int i = 0;

	if (nb >= 100) {
		score[0] = (48 + (nb / 100));
		nb = nb % 100;
		score[1] = (48 + (nb / 10));
		nb = nb % 10;
		i = i + 2;
	} else if (nb >= 10) {
		score[0] = (48 + (nb / 10));
		nb = nb % 10;
		i = i + 1;
	}
	score[i] = (48 + nb);
	score[i + 1] = '\0';
	return (score);
}

void end_point_disp(sfRenderWindow *window, int pointnb)
{
	sfText *score = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin = {780, 180};

	sfText_setString(score, my_strcat("score :\n\n", 2,
					get_score(pointnb)));
	sfText_setFont(score, font);
	sfText_setCharacterSize(score, 50);
	sfText_move(score, origin);
	sfRenderWindow_drawText(window, score, NULL);
	sfText_destroy(score);
	sfFont_destroy(font);
}

void game_loop(sfRenderWindow *window, sprite_t **bg,
		sprite_t **brk, sprite_t **ing)
{
	sfClock *clock = sfClock_create();
	game_t *game = malloc(sizeof(game_t *) * 10);
	int j = 0;
	int time_i = 1000000;
	sfMusic *cook = sfMusic_createFromFile("rsrc/sounds/cook.ogg");

	fill_game(game);
	srand((long long)&game);
	sfMusic_play(cook);
	sfMusic_setLoop(cook, 1);
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
			display_home(window, bg, game);
		}
		if (bg[0]->o_sprt == 1)
			display_game(window, bg, ing, game);
		launch_pause_help_end(window, bg, brk, game);
	}
	sfMusic_destroy(cook);
	sfMusic_destroy(game->win);
	sfMusic_destroy(game->lose);
	sfMusic_destroy(game->punch);
	sfMusic_destroy(game->bell);
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
