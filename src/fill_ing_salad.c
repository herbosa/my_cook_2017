/*
** EPITECH PROJECT, 2017
** fill_ing_salad.c
** File description:
** fill ing salad (3rd part)
*/

#include "cook.h"

sprite_t **fill_ing_32(sprite_t **ing)
{
	ing[32] = malloc(sizeof(sprite_t) * 1);
	ing[32] = create_sprite(ing[32], "rsrc/pictures/bierre.png");
	ing[32]->v_sprt.x = 125;
	ing[32]->v_sprt.y = 750;
	ing[32]->r_sprt = create_rect(ing[32]->r_sprt);
	ing[32]->o_sprt = 0;
	sfSprite_setPosition(ing[32]->s_sprt, ing[32]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_30_32(sprite_t **ing)
{
	ing[30] = malloc(sizeof(sprite_t) * 1);
	ing[30] = create_sprite(ing[30], "rsrc/pictures/salade.png");
	ing[30]->v_sprt.x = 750;
	ing[30]->v_sprt.y = 750;
	ing[30]->r_sprt = create_rect(ing[30]->r_sprt);
	ing[30]->r_sprt.top = 200;
	ing[30]->o_sprt = 0;
	sfSprite_setPosition(ing[30]->s_sprt, ing[30]->v_sprt);
	ing[31] = malloc(sizeof(sprite_t) * 1);
	ing[31] = create_sprite(ing[31], "rsrc/pictures/donut.png");
	ing[31]->v_sprt.x = 750;
	ing[31]->v_sprt.y = 750;
	ing[31]->r_sprt = create_rect(ing[31]->r_sprt);
	ing[31]->o_sprt = 0;
	sfSprite_setPosition(ing[31]->s_sprt, ing[31]->v_sprt);
	ing = fill_ing_32(ing);
	return (ing);
}

sprite_t **fill_ing_35(sprite_t **ing)
{
	ing[35] = malloc(sizeof(sprite_t) * 1);
	ing[35] = create_sprite(ing[35], "rsrc/pictures/salty_fries.png");
	ing[35]->v_sprt.x = 750;
	ing[35]->v_sprt.y = 750;
	ing[35]->r_sprt = create_rect(ing[35]->r_sprt);
	ing[35]->o_sprt = 0;
	sfSprite_setPosition(ing[35]->s_sprt, ing[35]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_33_35(sprite_t **ing)
{
	ing[33] = malloc(sizeof(sprite_t) * 1);
	ing[33] = create_sprite(ing[33], "rsrc/pictures/coca.png");
	ing[33]->v_sprt.x = 125;
	ing[33]->v_sprt.y = 750;
	ing[33]->r_sprt = create_rect(ing[33]->r_sprt);
	ing[33]->o_sprt = 0;
	sfSprite_setPosition(ing[33]->s_sprt, ing[33]->v_sprt);
	ing[34] = malloc(sizeof(sprite_t) * 1);
	ing[34] = create_sprite(ing[34], "rsrc/pictures/fanta.png");
	ing[34]->v_sprt.x = 125;
	ing[34]->v_sprt.y = 750;
	ing[34]->r_sprt = create_rect(ing[34]->r_sprt);
	ing[34]->o_sprt = 0;
	sfSprite_setPosition(ing[34]->s_sprt, ing[34]->v_sprt);
	ing = fill_ing_35(ing);
	return (ing);
}

sprite_t **fill_ing_36_37(sprite_t **ing)
{
	ing[36] = malloc(sizeof(sprite_t) * 1);
	ing[36] = create_sprite(ing[36], "rsrc/pictures/timer.png");
	ing[36]->v_sprt.x = 0;
	ing[36]->v_sprt.y = 0;
	ing[36]->r_sprt = create_rect_ing(ing[36]->r_sprt);
	ing[36]->o_sprt = 0;
	sfSprite_setPosition(ing[36]->s_sprt, ing[36]->v_sprt);
	return (ing);
}
