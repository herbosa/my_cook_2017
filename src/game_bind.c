/*
** EPITECH PROJECT, 2017
** game_bind.c
** File description:
** game binding functions
*/

#include "cook.h"

void clicked_game(sprite_t **ing, sfEvent event)
{
	int i = 0;

	for (i = 0; i < 24; i = i + 1)
		if (event.mouseButton.x  > ing[i]->v_sprt.x &&
			event.mouseButton.x < ing[i]->v_sprt.x + 100 &&
			event.mouseButton.y > ing[i]->v_sprt.y &&
			event.mouseButton.y < ing[i]->v_sprt.y + 100 &&
			ing[i]->o_sprt == 0)
			ing[i]->o_sprt = 1;
	if (event.mouseButton.x  > ing[24]->v_sprt.x &&
		event.mouseButton.x < ing[24]->v_sprt.x + 100 &&
		event.mouseButton.y > ing[24]->v_sprt.y &&
		event.mouseButton.y < ing[24]->v_sprt.y + 100) {
		if (ing[24]->o_sprt == 0) {
			show_menu(ing);
			ing[24]->o_sprt = 1;
		} else if (ing[24]->o_sprt == 1) {
			hide_menu(ing);
			ing[24]->o_sprt = 0;
		}
	}
}

void button_game(sprite_t **ing, sfEvent event)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1)
		if (event.mouseMove.x  > ing[i]->v_sprt.x &&
		    event.mouseMove.x < ing[i]->v_sprt.x + 100 &&
		    event.mouseMove.y > ing[i]->v_sprt.y &&
		    event.mouseMove.y < ing[i]->v_sprt.y + 100)
			ing[i]->r_sprt.top = 100;
		else
			ing[i]->r_sprt.top = 0;
}

void touch_game(sfRenderWindow *window, sprite_t **bg, sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 2;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeyTab)) {
		if (ing[24]->o_sprt == 0)
			show_menu(ing);
		else if (ing[24]->o_sprt == 1)
			hide_menu(ing);
	}
	ing_key_0_9(ing);
	ing_key_10_19(ing);
	ing_key_20_29(ing);
}

void drawer_game(sfRenderWindow *window, sprite_t **bg,
		sprite_t **ing, game_t *game)
{
	int i = 0;

	sfRenderWindow_drawSprite(window, bg[2]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, bg[3]->s_sprt, NULL);
	for (i = 0; i < 25; i = i + 1)
		sfRenderWindow_drawSprite(window, ing[i]->s_sprt, NULL);
	disp_time(window, ing);
	disp_beer(window, ing, game);
	disp_coca(window, ing, game);
	disp_fanta(window, ing, game);
	disp_burger(window, ing, game);
	disp_vege_burger(window, ing, game);
	disp_pizza(window, ing, game);
	disp_salade(window, ing, game);
	disp_donut(window, ing, game);
	disp_fries(window, ing, game);
}

void game_setsprite(sprite_t **ing)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1)
		sfSprite_setTextureRect(ing[i]->s_sprt, ing[i]->r_sprt);
}
