/*
** EPITECH PROJECT, 2017
** fill_ing_key.c
** File description:
** fill_ing_key functions
*/

#include "cook.h"

void ing_key_0_9(sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyB))
		ing[0]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyL))
		ing[1]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyF))
		ing[2]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyG))
		ing[3]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyI))
		ing[4]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyX))
		ing[5]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyM))
		ing[6]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyK))
		ing[7]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyV))
		ing[8]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyD))
		ing[9]->o_sprt = 1;
}

void ing_key_10_19(sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyP))
		ing[10]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyZ))
		ing[11]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyN))
		ing[12]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyR))
		ing[13]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyO))
		ing[14]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyJ))
		ing[15]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyE))
		ing[16]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyT))
		ing[17]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyS))
		ing[18]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyH))
		ing[19]->o_sprt = 1;
}

void ing_key_20_29(sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyY))
		ing[20]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyC))
		ing[21]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyA))
		ing[22]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeySpace))
		ing[26]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyReturn))
		ing[29]->o_sprt = 1;
}
