/*
** EPITECH PROJECT, 2017
** make_eat.c
** File description:
** make functions of eat orders
*/

#include "cook.h"

void make_burger(sprite_t **ing)
{
	if (ing[10]->o_sprt == 1 && ing[25]->o_sprt == 0 &&
		ing[27]->o_sprt == 0)
		ing[25]->o_sprt = 1;
	if (ing[18]->o_sprt == 1 && ing[25]->o_sprt == 1) {
		ing[25]->o_sprt = 2;
		ing[27]->o_sprt = 0;
	}
	if (ing[7]->o_sprt == 1 && ing[25]->o_sprt == 2)
		ing[25]->o_sprt = 3;
	if (ing[6]->o_sprt == 1 && ing[25]->o_sprt == 3)
		ing[25]->o_sprt = 4;
	if (ing[17]->o_sprt == 1 && ing[25]->o_sprt == 4)
		ing[25]->o_sprt = 5;
	if (ing[20]->o_sprt == 1 && ing[25]->o_sprt == 5)
		ing[25]->o_sprt = 6;
	if (ing[12]->o_sprt == 1 && ing[25]->o_sprt == 6)
		ing[25]->o_sprt = 7;
	if (ing[10]->o_sprt == 1 && ing[25]->o_sprt == 7)
		ing[25]->o_sprt = 8;
	if (ing[26]->o_sprt == 1 && ing[25]->o_sprt == 8)
		ing[25]->o_sprt = 9;
}

void make_donut(sprite_t **ing)
{
	if (ing[9]->o_sprt == 1 && ing[31]->o_sprt == 0)
		ing[31]->o_sprt = 1;
	if (ing[29]->o_sprt == 1 && ing[31]->o_sprt == 2)
		ing[31]->o_sprt = 3;
	if (ing[29]->o_sprt == 1 && ing[31]->o_sprt == 1)
		ing[31]->o_sprt = 2;
	if (ing[3]->o_sprt == 1 && ing[31]->o_sprt == 3)
		ing[31]->o_sprt = 4;
	if (ing[4]->o_sprt == 1 && ing[31]->o_sprt == 4)
		ing[31]->o_sprt = 5;
	if (ing[26]->o_sprt == 1 && ing[31]->o_sprt == 5)
		ing[31]->o_sprt = 6;
}

void make_pizza(sprite_t **ing)
{
	if (ing[11]->o_sprt == 1 && ing[28]->o_sprt == 3)
		ing[28]->o_sprt = 4;
	if (ing[11]->o_sprt == 1 && ing[28]->o_sprt == 2)
		ing[28]->o_sprt = 3;
	if (ing[11]->o_sprt == 1 && ing[28]->o_sprt == 1)
		ing[28]->o_sprt = 2;
	if (ing[11]->o_sprt == 1 && ing[28]->o_sprt == 0)
		ing[28]->o_sprt = 1;
	if (ing[5]->o_sprt == 1 && ing[28]->o_sprt == 4)
		ing[28]->o_sprt = 5;
	if (ing[15]->o_sprt == 1 && ing[28]->o_sprt == 5)
		ing[28]->o_sprt = 6;
	if (ing[14]->o_sprt == 1 && ing[28]->o_sprt == 6)
		ing[28]->o_sprt = 7;
	if (ing[16]->o_sprt == 1 && ing[28]->o_sprt == 7)
		ing[28]->o_sprt = 8;
	if (ing[29]->o_sprt == 1 && ing[28]->o_sprt == 8)
		ing[28]->o_sprt = 9;
	if (ing[26]->o_sprt == 1 && ing[28]->o_sprt == 9)
		ing[28]->o_sprt = 10;
}

void make_fries(sprite_t **ing)
{
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 8)
		ing[35]->o_sprt = 9;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 7)
		ing[35]->o_sprt = 8;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 6)
		ing[35]->o_sprt = 7;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 5)
		ing[35]->o_sprt = 6;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 4)
		ing[35]->o_sprt = 5;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 3)
		ing[35]->o_sprt = 4;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 2)
		ing[35]->o_sprt = 3;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 1)
		ing[35]->o_sprt = 2;
	if (ing[21]->o_sprt == 1 && ing[35]->o_sprt == 0)
		ing[35]->o_sprt = 1;
	if (ing[26]->o_sprt == 1 && ing[35]->o_sprt == 9)
		ing[35]->o_sprt = 10;
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
