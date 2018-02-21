/*
** EPITECH PROJECT, 2017
** disp_orders_drinks_salad.c
** File description:
** display functions that show the final orders
*/

#include "cook.h"

void disp_coca(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[33]->o_sprt == 0)
		return;
	if (ing[33]->o_sprt == 10) {
		rm_from_cmd(game, 7);
		ing[33]->o_sprt = 0;
		return;
	}
	ing[33]->r_sprt.top = (ing[33]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[33]->s_sprt, ing[33]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[33]->s_sprt, NULL);
}

void disp_fanta(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[34]->o_sprt == 0)
		return;
	if (ing[34]->o_sprt == 10) {
		rm_from_cmd(game, 6);
		ing[34]->o_sprt = 0;
		return;
	}
	ing[34]->r_sprt.top = (ing[34]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[34]->s_sprt, ing[34]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[34]->s_sprt, NULL);
}

void disp_beer(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[32]->o_sprt == 0)
		return;
	if (ing[32]->o_sprt == 9) {
		rm_from_cmd(game, 8);
		ing[32]->o_sprt = 0;
		return;
	}
	ing[32]->r_sprt.top = (ing[32]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[32]->s_sprt, ing[32]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[32]->s_sprt, NULL);
}

void disp_salade(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[30]->o_sprt == 0)
		return;
	if (ing[30]->o_sprt == 5) {
		rm_from_cmd(game, 4);
		ing[30]->o_sprt = 0;
		return;
	}
	ing[30]->r_sprt.top = ing[30]->o_sprt * 200;
	sfSprite_setTextureRect(ing[30]->s_sprt, ing[30]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[30]->s_sprt, NULL);
}

void disp_vege_burger(sfRenderWindow *window, sprite_t **ing, game_t *game)
{
	if (ing[27]->o_sprt == 0 || ing[27]->o_sprt == 1)
		return;
	if (ing[27]->o_sprt == 7) {
		rm_from_cmd(game, 2);
		ing[27]->o_sprt = 0;
		return;
	}
	ing[27]->r_sprt.top = (ing[27]->o_sprt - 1) * 200;
	sfSprite_setTextureRect(ing[27]->s_sprt, ing[27]->r_sprt);
	sfRenderWindow_drawSprite(window, ing[27]->s_sprt, NULL);
}
