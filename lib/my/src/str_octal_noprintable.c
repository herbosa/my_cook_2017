/*
** EPITECH PROJECT, 2017
** str_octal_noprintable.c
** File description:
** str_octal_noprintable
*/

#include "my.h"
#include <stdlib.h>

void octal_convert_for_no_print(unsigned int nbr)
{
	unsigned int result = nbr;
	int i = 0;
	char dest[] = "000\0";

	while (result > 7) {
		dest[i] = (result % 8) + 48;
		result = (result / 8);
		i = i + 1;
	}
	dest[i] = result + 48;
	my_evil_str(dest);
	my_putstr(dest);
}

void str_octal_noprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] >= 127) {
			my_putchar('\\');
			octal_convert_for_no_print(str[i]);
		} else
			my_putchar(str[i]);
		i = i + 1;
	}
}
