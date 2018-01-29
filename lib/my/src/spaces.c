/*
** EPITECH PROJECT, 2017
** space.c
** File description:
** put space
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int flag_nbr(char *s, va_list listarg, int i)
{
	switch (s[i]) {
	case '0' :
	case '1' :
	case '2' :
	case '3' :
	case '4' :
	case '5' :
	case '6' :
	case '7' :
	case '8' :
	case '9' :
		i = nbr_spaces(s, listarg, i);
		break;
	default :
		my_putchar('%');
		my_putchar(s[i]);
		break;
	}
	return (i);
}

int nbr_spaces(char *s, va_list listarg, int i)
{
	int nbspace = 0;
	int len = 0;
	int nb_real = 0;
	va_list destlist;

	va_copy(destlist, listarg);
	while (s[i] >= '0' && s[i] <= '9') {
		nbspace = (nbspace + (s[i] - 48))* 10;
		i = i + 1;
	}
	nbspace = nbspace / 10;
	len = flag_space(s, destlist, i);
	nb_real = nbspace - len;
	if (len > 0) {
		while (nb_real > 0) {
			my_putchar(' ');
			nb_real = nb_real - 1;
		}
		i = flag(s, listarg , i);
	}
	return (i);
}

int flag_space(char *s, va_list listarg, int i)
{
	int len = 0;

	switch (s[i]) {
	case 's' :
	case 'S' :
		len = my_strlen(va_arg(listarg, char*));
		break;
	case 'l' :
	case 'h' :
	case '#' :
		i = i + 1;
		flag_space(s, listarg, i);
		break;
	case 'u' :
		len = my_uint_len(va_arg(listarg, unsigned long long int));
		break;
	default :
		len = my_int_len(va_arg(listarg, long long int));
	}
	return (len);
}
