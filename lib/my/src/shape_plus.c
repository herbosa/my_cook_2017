/*
** EPITECH PROJECT, 2017
** sharp_plus.c
** File description:
** manage sharp plus minus
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int multi_flag_sharp(char *s, va_list listarg, int i)
{
	i = i + 1;
	switch (s[i]) {
	case 'x' :
		my_putstr("0x");
		hexa_conv_lowcase(va_arg(listarg, unsigned int));
		break;
	case 'X' :
		my_putstr("0X");
		hexa_conv_upcase(va_arg(listarg, unsigned int));
		break;
	case 'o':
		my_putchar('0');
		octal_convert(va_arg(listarg, unsigned int));
		break;
	default :
		i = flag(s, listarg, i);
		break;
	}
	return (i);
}

int multi_flag_plus(char *s, va_list listarg, int i)
{
	long long mem;
	va_list cplist;

	i = i + 1;
	va_copy(cplist, listarg);
	switch (s[i]) {
	case 'd' :
	case 'i' :
	case 'l' :
	case 'h' :
		mem = va_arg(cplist, long long);
		if (mem >= 0)
			my_putchar('+');
		break;
	}
	i = flag(s, listarg, i);
	return (i);
}

int multi_flag_minus(char *s, va_list listarg, int i)
{
	i = i + 1;
	switch (s[i]) {
	case 'd' :
	case 'i' :
		if (s[i - 1] == ' ')
			my_putchar(' ');
		break;
	}
	i = flag(s, listarg, i);
	return (i);
}
