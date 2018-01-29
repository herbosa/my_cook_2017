/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** strlen
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i = i + 1;
	}
	return (i);
}

int my_int_len(long long int nb)
{
	int i = 0;

	while (nb != 0) {
		nb = nb / 10;
		i = i + 1;
	}
	return (i);
}

int my_uint_len(unsigned long long int nb)
{
	int i = 0;

	while (nb != 0) {
		nb = nb / 10;
		i = i + 1;
	}
	return (i);
}
