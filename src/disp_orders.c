/*
** EPITECH PROJECT, 2017
** disp_orders.c
** File description:
** display orders functions
*/

#include "cook.h"

void print_donut(sfRenderWindow *window, sprite_t **ing)
{
	sfSprite_setTextureRect(ing[31]->s_sprt, ing[31]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[31]->s_sprt, NULL);
}

void disp_donut(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[31]->o_sprt == 0)
		return;
	if (ing[31]->o_sprt == 2) {
		ing[31]->v_sprt.x = 1450;
		sfSprite_setPosition(ing[31]->s_sprt, ing[31]->v_sprt);
	}
	if (ing[31]->o_sprt == 3) {
		ing[31]->v_sprt.x = 750;
		sfSprite_setPosition(ing[31]->s_sprt, ing[31]->v_sprt);
	}
	if (ing[31]->o_sprt == 6) {
		rm_from_cmd(game, 3);
		ing[31]->o_sprt = 0;
		return;
	}
	if (ing[31]->o_sprt < 3)
		ing[31]->r_sprt.top = (ing[31]->o_sprt - 1) * 200;
	else
		ing[31]->r_sprt.top = (ing[31]->o_sprt - 2) * 200;
	print_donut(window, ing);
}

void disp_fries(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[35]->o_sprt == 0)
		return;
	if (ing[35]->o_sprt == 10) {
		rm_from_cmd(game, 9);
		ing[35]->o_sprt = 0;
		return;
	}
	ing[35]->r_sprt.top = (ing[35]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[35]->s_sprt, ing[35]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[35]->s_sprt, NULL);
}

void disp_pizza(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[28]->o_sprt == 0)
		return;
	if (ing[28]->o_sprt == 9) {
		ing[28]->v_sprt.x = 1450;
		sfSprite_setPosition(ing[28]->s_sprt, ing[28]->v_sprt);
	}
	if (ing[28]->o_sprt == 10) {
		rm_from_cmd(game, 5);
		ing[28]->o_sprt = 0;
		ing[28]->v_sprt.x = 750;
		sfSprite_setPosition(ing[28]->s_sprt, ing[28]->v_sprt);
		return;
	}
	ing[28]->r_sprt.top = (ing[28]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[28]->s_sprt, ing[28]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[28]->s_sprt, NULL);
}

void disp_burger(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[25]->o_sprt == 0)
		return;
	if (ing[25]->o_sprt == 9) {
		rm_from_cmd(game, 1);
		ing[25]->o_sprt = 0;
		return;
	}
	ing[25]->r_sprt.top = (ing[25]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[25]->s_sprt, ing[25]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[25]->s_sprt, NULL);
}
