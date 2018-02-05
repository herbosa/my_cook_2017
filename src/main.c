/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "cook.h"

sfRenderWindow *renderwindow_create(sfRenderWindow *wd)
{
	sfVideoMode v_mode;

	v_mode.width = 1920;
	v_mode.height = 1075;
	wd = sfRenderWindow_create(v_mode, "MY_COOK", sfDefaultStyle, NULL);
	return (wd);
}

void touch_home(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	else
		bg[0]->o_sprt = 1;
}

void display_home(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed) {
			sfRenderWindow_close(window);
		}
		if (event.type == sfEvtKeyPressed) {
			touch_home(window, bg);
		}
	}
	sfRenderWindow_drawSprite(window, bg[0]->s_sprt, NULL);
	sfRenderWindow_display(window);
}

void touch_pause(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		bg[0]->o_sprt = 0;;
}

void display_pause(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed) {
			sfRenderWindow_close(window);
		}
		if (event.type == sfEvtKeyPressed) {
			touch_pause(window, bg);
		}
	}
	sfRenderWindow_drawSprite(window, bg[1]->s_sprt, NULL);
	sfRenderWindow_display(window);
}

void touch_game(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 2;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		bg[0]->o_sprt = 0;;
}

void display_game(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed) {
			sfRenderWindow_close(window);
		}
		if (event.type == sfEvtKeyPressed) {
			touch_game(window, bg);
		}
	}
	sfRenderWindow_drawSprite(window, bg[2]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, bg[3]->s_sprt, NULL);
	sfRenderWindow_display(window);
}

void game_loop(sfRenderWindow *window, sprite_t **bg)
{
	while (sfRenderWindow_isOpen(window)) {
		if (bg[0]->o_sprt == 0)
			display_home(window, bg);
		if (bg[0]->o_sprt == 1)
			display_game(window, bg);
		if (bg[0]->o_sprt == 2)
			display_pause(window, bg);
	}
}

sprite_t **fill_bg(sprite_t **bg)
{
	bg[0] = malloc(sizeof(sprite_t) * 1);
	bg[0] = create_sprite(bg[0], "src/pictures/home.png");
	bg[0]->o_sprt = 0;
	bg[1] = malloc(sizeof(sprite_t) * 1);
	bg[1] = create_sprite(bg[1], "src/pictures/pause.png");
	bg[2] = malloc(sizeof(sprite_t) * 1);
	bg[2] = create_sprite(bg[2], "src/pictures/background.png");
	bg[3] = malloc(sizeof(sprite_t) * 1);
	bg[3] = create_sprite(bg[3], "src/pictures/contoire.png");
	return (bg);
}

int main(void)
{
	sfRenderWindow *window = NULL;
	sprite_t **bg = malloc(sizeof(sprite_t *) * 1);

	bg = fill_bg(bg);
	window = renderwindow_create(window);
	sfRenderWindow_setFramerateLimit(window, 60);
	game_loop(window, bg);
	sfRenderWindow_destroy(window);
}
