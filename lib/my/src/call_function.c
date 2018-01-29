/*
** EPITECH PROJECT, 2017
** call_function.c
** File description:
** launch my_printf.c
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_printf(char *s, ...)
{
	va_list listarg;
	int i = 0;

	va_start(listarg, s);
	while (s[i] != '\0') {
		if (s[i] =='%') {
			i = i + 1;
			i = flag(s, listarg, i);
		} else
			my_putchar(s[i]);
		i = i + 1;
	}
	va_end(listarg);
	return (0);
}
