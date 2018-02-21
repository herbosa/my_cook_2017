/*
** EPITECH PROJECT, 2017
** fill_ing_drinks_sauces.c
** File description:
** fill ing for drinks and sauces
*/

#include "cook.h"

sprite_t **fill_ing_0_2(sprite_t **ing)
{
	ing[0] = malloc(sizeof(sprite_t) * 1);
	ing[0] = create_sprite(ing[0], "rsrc/pictures/beer.png");
	ing[0]->v_sprt.x = 1820;
	ing[0]->v_sprt.y = 0;
	ing[0]->r_sprt = create_rect_ing(ing[0]->r_sprt);
	sfSprite_setPosition(ing[0]->s_sprt, ing[0]->v_sprt);
	ing[1] = malloc(sizeof(sprite_t) * 1);
	ing[1] = create_sprite(ing[1], "rsrc/pictures/coca_b.png");
	ing[1]->v_sprt.x = 1720;
	ing[1]->v_sprt.y = 0;
	ing[1]->r_sprt = create_rect_ing(ing[1]->r_sprt);
	sfSprite_setPosition(ing[1]->s_sprt, ing[1]->v_sprt);
	ing[2] = malloc(sizeof(sprite_t) * 1);
	ing[2] = create_sprite(ing[2], "rsrc/pictures/fanta_b.png");
	ing[2]->v_sprt.x = 1620;
	ing[2]->v_sprt.y = 0;
	ing[2]->r_sprt = create_rect_ing(ing[2]->r_sprt);
	sfSprite_setPosition(ing[2]->s_sprt, ing[2]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_3_5(sprite_t **ing)
{
	ing[3] = malloc(sizeof(sprite_t) * 1);
	ing[3] = create_sprite(ing[3], "rsrc/pictures/glacage.png");
	ing[3]->v_sprt.x = 1820;
	ing[3]->v_sprt.y = 100;
	ing[3]->r_sprt = create_rect_ing(ing[3]->r_sprt);
	sfSprite_setPosition(ing[3]->s_sprt, ing[3]->v_sprt);
	ing[4] = malloc(sizeof(sprite_t) * 1);
	ing[4] = create_sprite(ing[4], "rsrc/pictures/conffetis.png");
	ing[4]->v_sprt.x = 1720;
	ing[4]->v_sprt.y = 100;
	ing[4]->r_sprt = create_rect_ing(ing[4]->r_sprt);
	sfSprite_setPosition(ing[4]->s_sprt, ing[4]->v_sprt);
	ing[5] = malloc(sizeof(sprite_t) * 1);
	ing[5] = create_sprite(ing[5], "rsrc/pictures/sauce_tmt.png");
	ing[5]->v_sprt.x = 1620;
	ing[5]->v_sprt.y = 100;
	ing[5]->r_sprt = create_rect_ing(ing[5]->r_sprt);
	sfSprite_setPosition(ing[5]->s_sprt, ing[5]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_6_8(sprite_t **ing)
{
	ing[6] = malloc(sizeof(sprite_t) * 1);
	ing[6] = create_sprite(ing[6], "rsrc/pictures/mayo.png");
	ing[6]->v_sprt.x = 1820;
	ing[6]->v_sprt.y = 200;
	ing[6]->r_sprt = create_rect_ing(ing[6]->r_sprt);
	sfSprite_setPosition(ing[6]->s_sprt, ing[6]->v_sprt);
	ing[7] = malloc(sizeof(sprite_t) * 1);
	ing[7] = create_sprite(ing[7], "rsrc/pictures/ketchup.png");
	ing[7]->v_sprt.x = 1720;
	ing[7]->v_sprt.y = 200;
	ing[7]->r_sprt = create_rect_ing(ing[7]->r_sprt);
	sfSprite_setPosition(ing[7]->s_sprt, ing[7]->v_sprt);
	ing[8] = malloc(sizeof(sprite_t) * 1);
	ing[8] = create_sprite(ing[8], "rsrc/pictures/vinaigrette.png");
	ing[8]->v_sprt.x = 1620;
	ing[8]->v_sprt.y = 200;
	ing[8]->r_sprt = create_rect_ing(ing[8]->r_sprt);
	sfSprite_setPosition(ing[8]->s_sprt, ing[8]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_9_11(sprite_t **ing)
{
	ing[9] = malloc(sizeof(sprite_t) * 1);
	ing[9] = create_sprite(ing[9], "rsrc/pictures/donnut.png");
	ing[9]->v_sprt.x = 1820;
	ing[9]->v_sprt.y = 300;
	ing[9]->r_sprt = create_rect_ing(ing[9]->r_sprt);
	sfSprite_setPosition(ing[9]->s_sprt, ing[9]->v_sprt);
	ing[10] = malloc(sizeof(sprite_t) * 1);
	ing[10] = create_sprite(ing[10], "rsrc/pictures/pain.png");
	ing[10]->v_sprt.x = 1720;
	ing[10]->v_sprt.y = 300;
	ing[10]->r_sprt = create_rect_ing(ing[10]->r_sprt);
	sfSprite_setPosition(ing[10]->s_sprt, ing[10]->v_sprt);
	ing[11] = malloc(sizeof(sprite_t) * 1);
	ing[11] = create_sprite(ing[11], "rsrc/pictures/pate_pizza.png");
	ing[11]->v_sprt.x = 1620;
	ing[11]->v_sprt.y = 300;
	ing[11]->r_sprt = create_rect_ing(ing[11]->r_sprt);
	sfSprite_setPosition(ing[11]->s_sprt, ing[11]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_12_14(sprite_t **ing)
{
	ing[12] = malloc(sizeof(sprite_t) * 1);
	ing[12] = create_sprite(ing[12], "rsrc/pictures/cornichon.png");
	ing[12]->v_sprt.x = 1820;
	ing[12]->v_sprt.y = 400;
	ing[12]->r_sprt = create_rect_ing(ing[12]->r_sprt);
	sfSprite_setPosition(ing[12]->s_sprt, ing[12]->v_sprt);
	ing[13] = malloc(sizeof(sprite_t) * 1);
	ing[13] = create_sprite(ing[13], "rsrc/pictures/oignon.png");
	ing[13]->v_sprt.x = 1720;
	ing[13]->v_sprt.y = 400;
	ing[13]->r_sprt = create_rect_ing(ing[13]->r_sprt);
	sfSprite_setPosition(ing[13]->s_sprt, ing[13]->v_sprt);
	ing[14] = malloc(sizeof(sprite_t) * 1);
	ing[14] = create_sprite(ing[14], "rsrc/pictures/olive.png");
	ing[14]->v_sprt.x = 1620;
	ing[14]->v_sprt.y = 400;
	ing[14]->r_sprt = create_rect_ing(ing[14]->r_sprt);
	sfSprite_setPosition(ing[14]->s_sprt, ing[14]->v_sprt);
	return (ing);
}
