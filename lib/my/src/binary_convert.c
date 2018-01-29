/*
** EPITECH PROJECT, 2017
** binary_convert.c
** File description:
** convert nb in binary
*/

#include "my.h"
#include <stdlib.h>

void binary_convert(unsigned int nbr)
{
	unsigned int result = nbr;
	int i = 0;
	char *dest = malloc(sizeof(char) * 35);

	while (result > 1) {
		dest[i] = (result % 2) + 48;
		result = (result / 2);
		i = i + 1;
	}
	dest[i] = result + 48;
	dest[i + 1] = '\0';
	my_evil_str(dest);
	my_putstr(dest);
}

void octal_convert(unsigned int nbr)
{
	unsigned int result = nbr;
	int i = 0;
	char *dest = malloc(sizeof(char) * 12);

	while (result > 7) {
		dest[i] = (result % 8) + 48;
		result = (result / 8);
		i = i + 1;
	}
	dest[i] = result + 48;
	dest[i + 1] = '\0';
	my_evil_str(dest);
	dest[i + 1] = '\0';
	my_putstr(dest);
}

void padress(unsigned int padress)
{
	my_putstr("0x");
	hexa_conv_lowcase(padress);
}
