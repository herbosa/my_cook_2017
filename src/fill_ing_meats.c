/*
** EPITECH PROJECT, 2017
** fill_ing_meats.c
** File description:
** fill ing with meats and other stuff
*/

#include "cook.h"

sprite_t **fill_ing_15_17(sprite_t **ing)
{
	ing[15] = malloc(sizeof(sprite_t) * 1);
	ing[15] = create_sprite(ing[15], "rsrc/pictures/jambon.png");
	ing[15]->v_sprt.x = 1820;
	ing[15]->v_sprt.y = 500;
	ing[15]->r_sprt = create_rect_ing(ing[15]->r_sprt);
	sfSprite_setPosition(ing[15]->s_sprt, ing[15]->v_sprt);
	ing[16] = malloc(sizeof(sprite_t) * 1);
	ing[16] = create_sprite(ing[16], "rsrc/pictures/emental.png");
	ing[16]->v_sprt.x = 1720;
	ing[16]->v_sprt.y = 500;
	ing[16]->r_sprt = create_rect_ing(ing[16]->r_sprt);
	sfSprite_setPosition(ing[16]->s_sprt, ing[16]->v_sprt);
	ing[17] = malloc(sizeof(sprite_t) * 1);
	ing[17] = create_sprite(ing[17], "rsrc/pictures/tomate.png");
	ing[17]->v_sprt.x = 1620;
	ing[17]->v_sprt.y = 500;
	ing[17]->r_sprt = create_rect_ing(ing[17]->r_sprt);
	sfSprite_setPosition(ing[17]->s_sprt, ing[17]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_18_20(sprite_t **ing)
{
	ing[18] = malloc(sizeof(sprite_t) * 1);
	ing[18] = create_sprite(ing[18], "rsrc/pictures/steak.png");
	ing[18]->v_sprt.x = 1820;
	ing[18]->v_sprt.y = 600;
	ing[18]->r_sprt = create_rect_ing(ing[18]->r_sprt);
	sfSprite_setPosition(ing[18]->s_sprt, ing[18]->v_sprt);
	ing[19] = malloc(sizeof(sprite_t) * 1);
	ing[19] = create_sprite(ing[19], "rsrc/pictures/steak_vege.png");
	ing[19]->v_sprt.x = 1720;
	ing[19]->v_sprt.y = 600;
	ing[19]->r_sprt = create_rect_ing(ing[19]->r_sprt);
	sfSprite_setPosition(ing[19]->s_sprt, ing[19]->v_sprt);
	ing[20] = malloc(sizeof(sprite_t) * 1);
	ing[20] = create_sprite(ing[20], "rsrc/pictures/salade_b.png");
	ing[20]->v_sprt.x = 1620;
	ing[20]->v_sprt.y = 600;
	ing[20]->r_sprt = create_rect_ing(ing[20]->r_sprt);
	sfSprite_setPosition(ing[20]->s_sprt, ing[20]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_21_23(sprite_t **ing)
{
	ing[21] = malloc(sizeof(sprite_t) * 1);
	ing[21] = create_sprite(ing[21], "rsrc/pictures/frites.png");
	ing[21]->v_sprt.x = 1820;
	ing[21]->v_sprt.y = 700;
	ing[21]->r_sprt = create_rect_ing(ing[21]->r_sprt);
	sfSprite_setPosition(ing[21]->s_sprt, ing[21]->v_sprt);
	ing[22] = malloc(sizeof(sprite_t) * 1);
	ing[22] = create_sprite(ing[22], "rsrc/pictures/sel.png");
	ing[22]->v_sprt.x = 1720;
	ing[22]->v_sprt.y = 700;
	ing[22]->r_sprt = create_rect_ing(ing[22]->r_sprt);
	sfSprite_setPosition(ing[22]->s_sprt, ing[22]->v_sprt);
	ing[23] = malloc(sizeof(sprite_t) * 1);
	ing[23] = create_sprite(ing[23], "rsrc/pictures/pause_gb.png");
	ing[23]->v_sprt.x = 1620;
	ing[23]->v_sprt.y = 700;
	ing[23]->r_sprt = create_rect_ing(ing[23]->r_sprt);
	sfSprite_setPosition(ing[23]->s_sprt, ing[23]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_24_26(sprite_t **ing)
{
	ing[24] = malloc(sizeof(sprite_t) * 1);
	ing[24] = create_sprite(ing[24], "rsrc/pictures/info.png");
	ing[24]->v_sprt.x = 1520;
	ing[24]->v_sprt.y = 0;
	ing[24]->r_sprt = create_rect_ing(ing[24]->r_sprt);
	sfSprite_setPosition(ing[24]->s_sprt, ing[24]->v_sprt);
	ing[25] = malloc(sizeof(sprite_t) * 1);
	ing[25] = create_sprite(ing[25], "rsrc/pictures/buger.png");
	ing[25]->v_sprt.x = 750;
	ing[25]->v_sprt.y = 750;
	ing[25]->r_sprt = create_rect(ing[25]->r_sprt);
	ing[25]->o_sprt = 0;
	sfSprite_setPosition(ing[25]->s_sprt, ing[25]->v_sprt);
	ing[26] = malloc(sizeof(sprite_t) * 1);
	ing[26]->o_sprt = 0;
	return (ing);
}

sprite_t **fill_ing_27_29(sprite_t **ing)
{
	ing[27] = malloc(sizeof(sprite_t) * 1);
	ing[27] = create_sprite(ing[27], "rsrc/pictures/burger_vege.png");
	ing[27]->v_sprt.x = 750;
	ing[27]->v_sprt.y = 750;
	ing[27]->r_sprt = create_rect(ing[27]->r_sprt);
	ing[27]->o_sprt = 0;
	sfSprite_setPosition(ing[27]->s_sprt, ing[27]->v_sprt);
	ing[28] = malloc(sizeof(sprite_t) * 1);
	ing[28] = create_sprite(ing[28], "rsrc/pictures/pizza.png");
	ing[28]->v_sprt.x = 750;
	ing[28]->v_sprt.y = 750;
	ing[28]->r_sprt = create_rect(ing[28]->r_sprt);
	ing[28]->o_sprt = 0;
	sfSprite_setPosition(ing[28]->s_sprt, ing[28]->v_sprt);
	ing[29] = malloc(sizeof(sprite_t) * 1);
	ing[29]->o_sprt = 0;
	return (ing);
}
