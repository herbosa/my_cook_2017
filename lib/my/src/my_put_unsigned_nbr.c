/*
** EPITECH PROJECT, 2017
** unsigned_nbr.c
** File description:
** display unsigned nbr
*/

#include "my.h"

int my_put_unbr(unsigned int nb)
{
	unsigned int nbr;

	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_unbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}

int my_put_ulnbr(unsigned long int nb)
{
	unsigned long int nbr;

	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_unbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}

int my_put_ullnbr(unsigned long long int nb)
{
	unsigned long long int nbr;

	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_unbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}

int my_put_uhnbr(unsigned short int nb)
{
	unsigned short nbr;

	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_unbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}

int my_put_uhhnbr(unsigned char nb)
{
	unsigned char nbr;

	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_unbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}
