/*
** EPITECH PROJECT, 2017
** display.c
** File description:
** display functions
*/

#include "cook.h"

void start_disp(sfRenderWindow *window, sfSprite *sprite_start, sprite_t **bg)
{
	sfText *start = sfText_create();
	sfText *start_h = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin = {850, 320};

	sfRenderWindow_drawSprite(window, sprite_start, NULL);
	sfRenderWindow_drawSprite(window, bg[4]->s_sprt, NULL);
	sfText_setString(start, "Press \n'ENTER' or\nclick here\nto start");
	sfText_setFont(start, font);
	sfText_setCharacterSize(start, 80);
	sfText_setColor(start, sfColor_fromRGB(0, 0, 0));
	sfText_move(start, origin);
	helper_text(start_h, font, window);
	sfRenderWindow_drawText(window, start, NULL);
	sfText_destroy(start);
	sfFont_destroy(font);
}

char *set_string(void)
{
	char *a = "WELCOME TO COOK, SERVE, DELICIOUS!\nYOU JUST OPENED YOUR";
	char *b = " NEW RESTAURANT, CONGRATULATIONS!\nYOU HAVE TO COMPLETE";
	char *c = " THE MAXIMUM AMOUNT OF ORDERS\nUNTIL THE END OF THE DAY";
	char *d = ".\nBUT BEWARE: WRONG ORDERS WILL MAKE YOU LOSE MONEY";
	char *e = "!\nGOOD LUCK, YOUNG COOKER!\n\nRECIPES:\n-BURGER : . . . ";
	char *eb = ". . P, S, K, M";
	char *f = ", T, Y, N, P\n-VEGAN BURGER : . . P, H, T, Y, N, P\n-DONUT:";
	char *fb = " . . . . . . D,";
	char *g = " ENTER, ENTER, G, I\n-SALAD: . . . . . . Y, T, R, V";
	char *gb = "\n\nPRESS SPACE TO";
	char *h = " SEND COMMAND!";

	return (my_strcat(a, 11, b, c, d, e, eb, f, fb, g, gb, h));
}

void help_disp(sfRenderWindow *window, sprite_t **bg)
{
	sfText *start = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin = {400, 230};

	sfRenderWindow_drawSprite(window, bg[5]->s_sprt, NULL);
	sfText_setString(start, set_string());
	sfText_setFont(start, font);
	sfText_setCharacterSize(start, 30);
	sfText_setColor(start, sfColor_fromRGB(0, 0, 0));
	sfText_move(start, origin);
	sfRenderWindow_drawText(window, start, NULL);
	sfText_destroy(start);
	sfFont_destroy(font);
}

void end_point(sfRenderWindow *window, int pointnb)
{
	sfText *score = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin = {1180, 480};
	char *scorec = malloc(sizeof(char) * 3);

	sfText_setString(score, my_strcat("score :\n\n", 2,
					get_score(pointnb, scorec)));
	free(scorec);
	sfText_setFont(score, font);
	sfText_setCharacterSize(score, 50);
	sfText_move(score, origin);
	sfRenderWindow_drawText(window, score, NULL);
	sfText_destroy(score);
	sfFont_destroy(font);
}

void display_end(sfRenderWindow *window, sprite_t **bg, game_t *game)
{
	sfEvent event;

	if (game->sec == 1)
		bg[6]->o_sprt = bg[6]->o_sprt + 1;
	if (bg[6]->o_sprt >= 5)
		reinit_val(bg, game);
	sfRenderWindow_drawSprite(window, bg[6]->s_sprt, NULL);
	end_point(window, game->point);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
	}
	sfRenderWindow_display(window);
}
