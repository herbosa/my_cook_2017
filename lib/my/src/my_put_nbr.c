/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** putnbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
	int nbr;

	if (nb < 0) {
		my_putchar(45);
		nb = (-1) * nb;
	}
	if (nb >= 0) {
		if (nb >= 10) {
			nbr = nb % 10;
			nb = (nb - nbr);
			nb = nb / 10;
			my_put_nbr(nb);
			my_putchar(48 + nbr);
		}
		else
			my_putchar(48 + nb % 10);
	}
	return (0);
}

int my_put_lnbr(long int nb)
{
	long int nbr;

	if (nb < 0) {
		my_putchar(45);
		nb = (-1) * nb;
	}
	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_lnbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}

int my_put_llnbr(long long int nb)
{
	long long int nbr = 0;

	if (nb < 0) {
		my_putchar(45);
		nb = (-1) * nb;
	}
	if (nb >= 10) {
		nbr = nb % 10;
		nb = (nb - nbr);
		nb = nb / 10;
		my_put_llnbr(nb);
		my_putchar(48 + nbr);
	}
	else
		my_putchar(48 + nb % 10);
	return (0);
}
