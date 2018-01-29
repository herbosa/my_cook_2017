/*
** EPITECH PROJECT, 2017
** my_rand.c
** File description:
** give a random int
*/

int my_rand(int max)
{
	int a;
	int b = (long long)&a;

	if (max % 2 == 0)
		max = max + 1;
	if (b < 0)
		b = b * -1;
	b = b % max;
	return (b);
}
