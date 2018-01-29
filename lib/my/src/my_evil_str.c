/*
** EPITECH PROJECT, 2017
** my_evil_str.c
** File description:
** evilstr
*/

#include "my.h"

char *my_evil_str(char *str)
{
	char r;
	int len = my_strlen(str) - 1;
	int c = 0;

	while (c < len) {
		r = str[len];
		str[len] = str[c];
		str[c] = r;
		c = c + 1;
		len = len - 1;
	}
	return (str);
}
