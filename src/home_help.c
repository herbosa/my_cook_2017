/*
** EPITECH PROJECT, 2017
** home_help.c
** File description:
** home and help bindings functions
*/

#include "cook.h"

void touch_home(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	else if (sfKeyboard_isKeyPressed(sfKeyReturn))
		bg[0]->o_sprt = 1;
	else if (sfKeyboard_isKeyPressed(sfKeyH))
		bg[0]->o_sprt = 3;
}

void clicked_help(sfEvent event, sprite_t **bg)
{
	if (event.type == sfEvtMouseButtonPressed) {
		if (event.mouseButton.x > 100 && event.mouseButton.x < 340 &&
			event.mouseButton.y > 700 && event.mouseButton.y < 1000)
			bg[0]->o_sprt = 0;
	}
}

void touch_help(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeyReturn) ||
		sfKeyboard_isKeyPressed(sfKeyH))
		bg[0]->o_sprt = 0;
}

void clicked_home(sfEvent event, sprite_t **bg, sfRenderWindow *window)
{
	if (event.type == sfEvtMouseButtonPressed)
		change_sprt(event, bg, window);
	sfSprite_setTextureRect(bg[4]->s_sprt, bg[4]->r_sprt);
}

void helper_text(sfText *start_h, sfFont *font, sfRenderWindow *window)
{
	sfVector2f h_origin = {90, 850};

	sfText_setString(start_h, "Press 'H' or\nClick Beer\nfor Help");
	sfText_setFont(start_h, font);
	sfText_setCharacterSize(start_h, 40);
	sfText_setColor(start_h, sfColor_fromRGB(0, 0, 0));
	sfText_move(start_h, h_origin);
	sfRenderWindow_drawText(window, start_h, NULL);
	sfText_destroy(start_h);
}
