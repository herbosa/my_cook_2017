/*
** EPITECH PROJECT, 2017
** sprt_str.c
** File description:
** sprite and str functions
*/

#include "cook.h"

char *remove_str_elem(char *str, int i)
{
	while (str[i + 1]) {
		str[i] = str[i + 1];
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}

void change_sprt(sfEvent event, sprite_t **bg, sfRenderWindow *window)
{
	if (event.mouseButton.x  > bg[4]->v_sprt.x &&
		event.mouseButton.x < bg[4]->v_sprt.x + 100 &&
		event.mouseButton.y > bg[4]->v_sprt.y &&
		event.mouseButton.y < bg[4]->v_sprt.y + 100)
		sfRenderWindow_close(window);
	if (event.mouseMove.x  > bg[4]->v_sprt.x &&
		event.mouseMove.x < bg[4]->v_sprt.x + 100 &&
		event.mouseMove.y > bg[4]->v_sprt.y &&
		event.mouseMove.y < bg[4]->v_sprt.y + 100)
		bg[4]->r_sprt.top = 100;
	else
		bg[4]->r_sprt.top = 0;
	if (event.mouseButton.x > 824 && event.mouseButton.x < 824 + 520 &&
		event.mouseButton.y > 303 && event.mouseButton.y < 303 + 390)
		bg[0]->o_sprt = 1;
	else if (event.mouseButton.x > 30 && event.mouseButton.x < 270 &&
		event.mouseButton.y > 550 && event.mouseButton.y < 800)
		bg[0]->o_sprt = 3;
}
