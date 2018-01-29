/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** remake printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int flag_5(char *s, va_list listarg, int i)
{
	switch (s[i]) {
	case '-' :
		i = multi_flag_minus(s, listarg, i);
		break;
	default :
		i = flag_nbr(s, listarg, i);
		break;
	}
	return (i);
}

int flag_4(char *s, va_list listarg, int i)
{
	switch (s[i]) {
	case '%' :
		my_putchar(s[i]);
		break;
	case '+' :
		i = multi_flag_plus(s, listarg, i);
		break;
	case ' ' :
		i = i + 1;
		i = flag(s, listarg, i);
		break;
	default :
		i = flag_5(s, listarg, i);
		break;
	}
	return (i);
}

int flag_3(char *s, va_list listarg, int i)
{
	switch (s[i]) {
	case 'p' :
		padress(va_arg(listarg, unsigned int));
		break;
	case 'S' :
		str_octal_noprintable(va_arg(listarg, char*));
		break;
	case 'l' :
		i = multi_flagl(s, listarg, i);
		break;
	case 'h' :
		i = multi_flagh(s, listarg, i);
		break;
	case '#' :
		i = multi_flag_sharp(s, listarg, i);
		break;
	default :
		i = flag_4(s, listarg, i);
	}
	return (i);
}

int flag_2(char *s, va_list listarg, int i)
{
	switch (s[i]) {
	case 'd' :
	case 'i' :
		my_put_nbr(va_arg(listarg, int));
		break;
	case 'o' :
		octal_convert(va_arg(listarg, unsigned int));
		break;
	case 'x' :
		hexa_conv_lowcase(va_arg(listarg, unsigned int));
		break;
	case 'X' :
		hexa_conv_upcase(va_arg(listarg, unsigned int));
		break;
	default :
		i = flag_3(s, listarg, i);
	}
	return (i);
}

int flag(char *s, va_list listarg, int i)
{
	switch (s[i]) {
	case 'c' :
		my_putchar(va_arg(listarg, int));
		break;
	case 's' :
		my_putstr(va_arg(listarg, char*));
		break;
	case 'u' :
		my_put_unbr(va_arg(listarg, unsigned int));
		break;
	case 'b' :
		binary_convert(va_arg(listarg, unsigned int));
		break;
	default :
		i = flag_2(s, listarg, i);
	}
	return (i);
}
