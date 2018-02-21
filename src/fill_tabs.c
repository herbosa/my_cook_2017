/*
** EPITECH PROJECT, 2017
** fill_tabs.c
** File description:
** fill tabs functions
*/

#include "cook.h"

sprite_t **fill_ing(sprite_t **ing)
{
	int i = 0;

	ing = fill_ing_0_2(ing);
	ing = fill_ing_3_5(ing);
	ing = fill_ing_6_8(ing);
	ing = fill_ing_9_11(ing);
	ing = fill_ing_12_14(ing);
	ing = fill_ing_15_17(ing);
	ing = fill_ing_18_20(ing);
	ing = fill_ing_21_23(ing);
	ing = fill_ing_24_26(ing);
	ing = fill_ing_27_29(ing);
	ing = fill_ing_30_32(ing);
	ing = fill_ing_33_35(ing);
	ing = fill_ing_36_37(ing);
	for (i = 0; i < 24; i = i + 1)
		ing[i]->o_sprt = 0;
	ing[24]->o_sprt = 1;
	ing[37] = 0;
	return (ing);
}

sprite_t **fill_brk(sprite_t **brk)
{
	brk[0] = malloc(sizeof(sprite_t) * 1);
	brk[0] = create_sprite(brk[0], "rsrc/pictures/quitb.png");
	brk[0]->v_sprt.x = 600;
	brk[0]->v_sprt.y = 700;
	brk[0]->r_sprt = create_rect(brk[0]->r_sprt);
	sfSprite_setPosition(brk[0]->s_sprt, brk[0]->v_sprt);
	brk[1] = malloc(sizeof(sprite_t) * 1);
	brk[1] = create_sprite(brk[1], "rsrc/pictures/reume_b.png");
	brk[1]->v_sprt.x = 1000;
	brk[1]->v_sprt.y = 700;
	brk[1]->r_sprt = create_rect(brk[1]->r_sprt);
	sfSprite_setPosition(brk[1]->s_sprt, brk[1]->v_sprt);
	brk[2] = malloc(sizeof(sprite_t) * 1);
	brk[2] = create_sprite(brk[2], "rsrc/pictures/menu.png");
	brk[2]->v_sprt.x = 800;
	brk[2]->v_sprt.y = 700;
	brk[2]->r_sprt = create_rect(brk[2]->r_sprt);
	sfSprite_setPosition(brk[2]->s_sprt, brk[2]->v_sprt);
	brk[3] = 0;
	return (brk);
}

sprite_t **fill_bg(sprite_t **bg)
{
	bg[0] = malloc(sizeof(sprite_t) * 1);
	bg[0] = create_sprite(bg[0], "rsrc/pictures/home.png");
	bg[0]->o_sprt = 0;
	bg[1] = malloc(sizeof(sprite_t) * 1);
	bg[1] = create_sprite(bg[1], "rsrc/pictures/pause.png");
	bg[2] = malloc(sizeof(sprite_t) * 1);
	bg[2] = create_sprite(bg[2], "rsrc/pictures/background.png");
	bg[3] = malloc(sizeof(sprite_t) * 1);
	bg[3] = create_sprite(bg[3], "rsrc/pictures/contoire.png");
	bg[4] = malloc(sizeof(sprite_t) * 1);
	bg[4] = create_sprite(bg[4], "rsrc/pictures/quit_bg.png");
	bg[4]->r_sprt = create_rect_ing(bg[4]->r_sprt);
	sfSprite_setTextureRect(bg[4]->s_sprt, bg[4]->r_sprt);
	bg[5] = malloc(sizeof(sprite_t) * 1);
	bg[5] = create_sprite(bg[5], "rsrc/pictures/help.png");
	bg[6] = malloc(sizeof(sprite_t) * 1);
	bg[6] = create_sprite(bg[6], "rsrc/pictures/end.png");
	bg[7] = 0;
	return (bg);
}
