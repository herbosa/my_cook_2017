/*
** EPITECH PROJECT, 2017
** hexa_convert.c
** File description:
** convert dec in hex
*/

#include <stdlib.h>
#include "my.h"

void hexa_switch_low(int res, char *dest, int i)
{
	switch (res) {
	case 10 :
	case 11 :
	case 12 :
	case 13 :
	case 14 :
	case 15 :
		dest[i] = res + 87;
		break;
	default :
		dest[i] = res + 48;
	}
}

void hexa_switch_up(int res, char *dest, int i)
{
	switch (res) {
	case 10 :
	case 11 :
	case 12 :
	case 13 :
	case 14 :
	case 15 :
		dest[i] = res + 55;
		break;
	default :
		dest[i] = res + 48;
	}
}

void hexa_conv_lowcase(unsigned int nbr)
{
	unsigned int result = nbr;
	int res = 0;
	int i = 0;
	char *dest = malloc(sizeof(char) * 10);

	while (result > 15) {
		res = (result % 16);
		hexa_switch_low(res, dest, i);
		result = (result / 16);
		i = i + 1;
	}
	res = result % 16;
	hexa_switch_low(res, dest, i);
	dest[i + 1] = '\0';
	my_evil_str(dest);
	my_putstr(dest);
}

void hexa_conv_upcase(unsigned int nbr)
{
	unsigned int result = nbr;
	int res = 0;
	int i = 0;
	char *dest = malloc(sizeof(char) * 10);

	while (result > 15) {
		res = (result % 16);
		hexa_switch_up(res, dest, i);
		result = (result / 16);
		i = i + 1;
	}
	res = result % 16;
	hexa_switch_up(res, dest, i);
	dest[i + 1] = '\0';
	my_evil_str(dest);
	my_putstr(dest);
}
