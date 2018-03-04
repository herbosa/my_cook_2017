/*
** EPITECH PROJECT, 2017
** make_drinks.c
** File description:
** make drinks functions
*/

#include "cook.h"

void make_beer(sprite_t **ing)
{
	if (ing[26]->o_sprt == 1 && ing[32]->o_sprt == 8)
		ing[32]->o_sprt = 9;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 7)
		ing[32]->o_sprt = 8;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 6)
		ing[32]->o_sprt = 7;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 5)
		ing[32]->o_sprt = 6;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 4)
		ing[32]->o_sprt = 5;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 3)
		ing[32]->o_sprt = 4;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 2)
		ing[32]->o_sprt = 3;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 1)
		ing[32]->o_sprt = 2;
	if (ing[0]->o_sprt == 1 && ing[32]->o_sprt == 0)
		ing[32]->o_sprt = 1;
}

void make_coca(sprite_t **ing)
{
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 8)
		ing[33]->o_sprt = 9;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 7)
		ing[33]->o_sprt = 8;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 6)
		ing[33]->o_sprt = 7;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 5)
		ing[33]->o_sprt = 6;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 4)
		ing[33]->o_sprt = 5;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 3)
		ing[33]->o_sprt = 4;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 2)
		ing[33]->o_sprt = 3;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 1)
		ing[33]->o_sprt = 2;
	if (ing[1]->o_sprt == 1 && ing[33]->o_sprt == 0)
		ing[33]->o_sprt = 1;
	if (ing[26]->o_sprt == 1 && ing[33]->o_sprt == 9)
		ing[33]->o_sprt = 10;
}

void make_fanta(sprite_t **ing)
{
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 8)
		ing[34]->o_sprt = 9;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 7)
		ing[34]->o_sprt = 8;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 6)
		ing[34]->o_sprt = 7;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 5)
		ing[34]->o_sprt = 6;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 4)
		ing[34]->o_sprt = 5;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 3)
		ing[34]->o_sprt = 4;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 2)
		ing[34]->o_sprt = 3;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 1)
		ing[34]->o_sprt = 2;
	if (ing[2]->o_sprt == 1 && ing[34]->o_sprt == 0)
		ing[34]->o_sprt = 1;
	if (ing[26]->o_sprt == 1 && ing[34]->o_sprt == 9)
		ing[34]->o_sprt = 10;
}

void make_salad(sprite_t **ing)
{
	if (ing[20]->o_sprt == 1 && ing[30]->o_sprt == 0 &&
		ing[25]->o_sprt <= 1 && ing[26]->o_sprt <= 1)
		ing[30]->o_sprt = 1;
	if (ing[17]->o_sprt == 1 && ing[30]->o_sprt == 1)
		ing[30]->o_sprt = 2;
	if (ing[13]->o_sprt == 1 && ing[30]->o_sprt == 2)
		ing[30]->o_sprt = 3;
	if (ing[8]->o_sprt == 1 && ing[30]->o_sprt == 3)
		ing[30]->o_sprt = 4;
	if (ing[26]->o_sprt == 1 && ing[30]->o_sprt == 4)
		ing[30]->o_sprt = 5;
}

void make_vege_burger(sprite_t **ing)
{
	if (ing[10]->o_sprt == 1 && ing[27]->o_sprt == 0 &&
		ing[25]->o_sprt <= 1)
		ing[27]->o_sprt = 1;
	if (ing[19]->o_sprt == 1 && ing[27]->o_sprt == 1) {
		ing[27]->o_sprt = 2;
		ing[25]->o_sprt = 0;
	}
	if (ing[17]->o_sprt == 1 && ing[27]->o_sprt == 2)
		ing[27]->o_sprt = 3;
	if (ing[20]->o_sprt == 1 && ing[27]->o_sprt == 3)
		ing[27]->o_sprt = 4;
	if (ing[12]->o_sprt == 1 && ing[27]->o_sprt == 4)
		ing[27]->o_sprt = 5;
	if (ing[10]->o_sprt == 1 && ing[27]->o_sprt == 5)
		ing[27]->o_sprt = 6;
	if (ing[26]->o_sprt == 1 && ing[27]->o_sprt == 6)
		ing[27]->o_sprt = 7;
}
