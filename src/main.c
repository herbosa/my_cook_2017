/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "cook.h"

int main(int ac, char **av, char **envp)
{
	sfRenderWindow *window = malloc(sizeof(sfRenderWindow *) * 1);
	sprite_t **bg = malloc(sizeof(sprite_t *) * 8);
	sprite_t **brk = malloc(sizeof(sprite_t *) * 4);
	sprite_t **ing = malloc(sizeof(sprite_t *) * 38);
	sfImage *icn = sfImage_createFromFile("rsrc/pictures/icon.png");
	sfUint8 *icon = (sfUint8 *)sfImage_getPixelsPtr(icn);

	if (bg == NULL || brk == NULL || envp[0] == NULL || ac != 1 ||
	av[1] || ing == NULL)
		return (84);
	bg = fill_bg(bg);
	brk = fill_brk(brk);
	ing = fill_ing(ing);
	window = renderwindow_create(window);
	sfRenderWindow_setIcon(window, 32, 32, icon);
	sfRenderWindow_setFramerateLimit(window, 60);
	game_loop(window, bg, brk, ing);
	return (0);
}
