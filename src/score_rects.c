/*
** EPITECH PROJECT, 2017
** gameloop_rects.c
** File description:
** game loop and rectangle creation functions
*/

#include "cook.h"


char *get_score(int nb, char *score)
{
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
	char *scorec = malloc(sizeof(char) * 3);
	char *concat = my_strcat("score :\n\n", 2, get_score(pointnb, scorec));
	sfText *score = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin = {780, 180};

	sfText_setString(score, concat);
	free(concat);
	free(scorec);
	sfText_setFont(score, font);
	sfText_setCharacterSize(score, 50);
	sfText_move(score, origin);
	sfRenderWindow_drawText(window, score, NULL);
	sfText_destroy(score);
	sfFont_destroy(font);
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
