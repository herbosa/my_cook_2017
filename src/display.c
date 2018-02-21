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

void help_disp(sfRenderWindow *window, sprite_t **bg)
{
	sfText *start = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin = {120, 290};

	sfRenderWindow_drawSprite(window, bg[5]->s_sprt, NULL);
	sfText_setString(start, "WELCOME TO COOK, SERVE, DELICIOUS!\nYOU JUST OPENED YOUR NEW RESTAURANT, CONGRATULATIONS!\nYOU HAVE TO COMPLETE THE MAXIMUM AMOUNT OF ORDERS\nUNTIL THE END OF THE DAY.\nBUT BEWARE: WRONG ORDERS WILL MAKE YOU LOSE MONEY!\nGOOD LUCK, YOUNG COOKER!");
	sfText_setFont(start, font);
	sfText_setCharacterSize(start, 50);
	sfText_setColor(start, sfColor_fromRGB(0, 0, 0));
	sfText_move(start, origin);
	sfRenderWindow_drawText(window, start, NULL);
	sfText_destroy(start);
	sfFont_destroy(font);
}

void display_home(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	start_disp(window, bg[0]->s_sprt, bg);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_home(window, bg);
		clicked_home(event, bg, window);
	}
	sfRenderWindow_display(window);
}

void display_help(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	help_disp(window, bg);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_help(window, bg);
		clicked_help(event, bg);
	}
	sfRenderWindow_display(window);
}

void display_end(sfRenderWindow *window, sprite_t **bg, int time)
{
	sfEvent event;

	if (time == 1) {
		bg[6]->o_sprt = bg[6]->o_sprt + 1;
	}
	if (bg[6]->o_sprt >= 5)
		bg[0]->o_sprt = 0;
	sfRenderWindow_drawSprite(window, bg[6]->s_sprt, NULL);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
	}
	sfRenderWindow_display(window);
}
