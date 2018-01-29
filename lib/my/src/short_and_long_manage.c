/*
** EPITECH PROJECT, 2017
** short_and_long_manage.c
** File description:
** manage flag l, h, ll, hh
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int multi_flagll(char *s, va_list listarg, int i)
{
	i = i + 1;
	switch (s[i]) {
	case 'd' :
	case 'i' :
		my_put_llnbr(va_arg(listarg, long long int));
		break;
	case 'u' :
		my_put_ullnbr(va_arg(listarg, unsigned long long int));
		break;
	default :
		my_putchar('%');
		my_putchar(s[i]);
		break;
	}
	return (i);
}

int multi_flaghh(char *s, va_list listarg, int i)
{
	i = i + 1;
	switch (s[i]) {
	case 'd' :
	case 'i' :
		my_put_hhnbr(va_arg(listarg, int));
		break;
	case 'u' :
		my_put_uhhnbr(va_arg(listarg, int));
		break;
	default :
		my_putchar('%');
		my_putchar(s[i]);
		break;
	}
	return (i);
}

int multi_flagl(char *s, va_list listarg, int i)
{
	i = i + 1;
	switch (s[i]) {
	case 'd' :
	case 'i' :
		my_put_lnbr(va_arg(listarg, long int));
		break;
	case 'u' :
		my_put_ulnbr(va_arg(listarg, unsigned long int));
		break;
	case 'l' :
		i = multi_flagll(s, listarg, i);
		break;
	default :
		my_putchar('%');
		my_putchar(s[i]);
		break;
	}
	return (i);
}

int multi_flagh(char *s, va_list listarg, int i)
{
	i = i + 1;
	switch (s[i]) {
	case 'd' :
	case 'i' :
		my_put_hnbr(va_arg(listarg, int));
		break;
	case 'u' :
		my_put_uhnbr(va_arg(listarg, int));
		break;
	case 'h' :
		i = multi_flaghh(s, listarg, i);
		break;
	default :
		my_putchar('%');
		my_putchar(s[i]);
		break;
	}
	return (i);
}
