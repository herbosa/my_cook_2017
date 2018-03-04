/*
** EPITECH PROJECT, 2017
** my_put_shortnbr.c
** File description:
** display short
*/

#include "my.h"

int my_put_hnbr(short int nb)
{
	short int nbr;

	if (nb < 0) {
		my_putchar(45);
		nb = (-1) * nb;
	}
	if (nb >= 0) {
		if (nb >= 10) {
			nbr = nb % 10;
			nb = (nb - nbr);
			nb = nb / 10;
			my_put_hnbr(nb);
			my_putchar(48 + nbr);
		} else
			my_putchar(48 + nb % 10);
	}
	return (0);
}

int my_put_hhnbr(char nb)
{
	char nbr;

	if (nb < 0) {
		my_putchar(45);
		nb = (-1) * nb;
	}
	if (nb >= 0) {
		if (nb >= 10) {
			nbr = nb % 10;
			nb = (nb - nbr);
			nb = nb / 10;
			my_put_hnbr(nb);
			my_putchar(48 + nbr);
		} else
			my_putchar(48 + nb % 10);
	}
	return (0);
}
