/*
** EPITECH PROJECT, 2017
** pause.c
** File description:
** pause functions
*/

#include "cook.h"

void pause_setsprite(sprite_t **brk)
{
	sfSprite_setTextureRect(brk[0]->s_sprt, brk[0]->r_sprt);
	sfSprite_setTextureRect(brk[1]->s_sprt, brk[1]->r_sprt);
	sfSprite_setTextureRect(brk[2]->s_sprt, brk[2]->r_sprt);
}

void touch_pause(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeyM)) {
		bg[0]->o_sprt = 0;;
	}
}

void button_pause(sprite_t **brk, sfEvent event)
{
	int i = 0;

	for (i = 0; i < 3; i = i + 1)
		if (event.mouseMove.x  > brk[i]->v_sprt.x &&
			event.mouseMove.x < brk[i]->v_sprt.x + 200 &&
			event.mouseMove.y > brk[i]->v_sprt.y &&
			event.mouseMove.y < brk[i]->v_sprt.y + 200)
			brk[i]->r_sprt.top = 200;
		else
			brk[i]->r_sprt.top = 0;
}

void clicked_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk,
		sfEvent event)
{
	if (event.mouseButton.x > brk[0]->v_sprt.x &&
		event.mouseButton.x < brk[0]->v_sprt.x + 200 &&
		event.mouseButton.y > brk[0]->v_sprt.y &&
		event.mouseButton.y < brk[0]->v_sprt.y + 200)
		sfRenderWindow_close(window);
	if (event.mouseButton.x > brk[1]->v_sprt.x &&
		event.mouseButton.x < brk[1]->v_sprt.x + 200 &&
		event.mouseButton.y > brk[1]->v_sprt.y &&
		event.mouseButton.y < brk[1]->v_sprt.y + 200)
		bg[0]->o_sprt = 1;
	if (event.mouseButton.x > brk[2]->v_sprt.x &&
		event.mouseButton.x < brk[2]->v_sprt.x + 200 &&
		event.mouseButton.y > brk[2]->v_sprt.y &&
		event.mouseButton.y < brk[2]->v_sprt.y + 200) {
		bg[0]->o_sprt = 0;
	}
}

void display_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_pause(window, bg);
		button_pause(brk, event);
		if (event.type == sfEvtMouseButtonPressed)
			clicked_pause(window, bg, brk, event);
	}
	pause_setsprite(brk);
	sfRenderWindow_drawSprite(window, bg[1]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, brk[0]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, brk[1]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, brk[2]->s_sprt, NULL);
	sfRenderWindow_display(window);
}
