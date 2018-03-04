/*
** EPITECH PROJECT, 2017
** menu.c
** File description:
** menu functions
*/

#include "cook.h"

void show_menu(sprite_t **ing)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1) {
		ing[i]->v_sprt.x = ing[i]->v_sprt.x + 300;
		sfSprite_setPosition(ing[i]->s_sprt, ing[i]->v_sprt);
	}
	ing[24]->o_sprt = 1;
}

void hide_menu(sprite_t **ing)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1) {
		ing[i]->v_sprt.x = ing[i]->v_sprt.x - 300;
		sfSprite_setPosition(ing[i]->s_sprt, ing[i]->v_sprt);
	}
	ing[24]->o_sprt = 0;
}

sfRenderWindow *renderwindow_create(sfRenderWindow *wd)
{
	sfVideoMode v_mode;

	v_mode.width = 1920;
	v_mode.height = 1075;
	v_mode.bitsPerPixel = 32;
	wd = sfRenderWindow_create(v_mode, "Cook, Serve, Delicious",
				sfDefaultStyle, NULL);
	return (wd);
}

void disp_time(sfRenderWindow *window, sprite_t **ing)
{
	ing[36]->r_sprt.top = ing[36]->o_sprt * 100;
	sfSprite_setTextureRect(ing[36]->s_sprt, ing[36]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[36]->s_sprt, NULL);
}

void disp_str(sfRenderWindow *window, char *str, int x, int y)
{
	sfText *start = sfText_create();
	sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
	sfVector2f origin;

	origin.x = x;
	origin.y = y;
	sfText_setString(start, str);
	sfText_setFont(start, font);
	sfText_setCharacterSize(start, 30);
	sfText_setColor(start, sfColor_fromRGB(0, 0, 0));
	sfText_move(start, origin);
	sfRenderWindow_drawText(window, start, NULL);
	sfText_destroy(start);
	sfFont_destroy(font);
}
