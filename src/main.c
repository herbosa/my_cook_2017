/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "cook.h"

void free_ing(sprite_t **ing)
{
	int i = 0;

	for (i = 0; ing[i]; i = i + 1) {
		if (i == 26 || i == 29) {
			free(ing[i]);
			continue;
		}
		sfTexture_destroy(ing[i]->t_sprt);
		sfSprite_destroy(ing[i]->s_sprt);
		free(ing[i]);
	}
	free(ing);
}

void free_sprt(sprite_t **bg, sprite_t **brk, sprite_t **ing, sfImage *icn)
{
	int i = 0;

	for (i = 0; bg[i]; i = i + 1) {
		sfTexture_destroy(bg[i]->t_sprt);
		sfSprite_destroy(bg[i]->s_sprt);
		free(bg[i]);
	}
	free(bg);
	for (i = 0; brk[i]; i = i + 1) {
		sfTexture_destroy(brk[i]->t_sprt);
		sfSprite_destroy(brk[i]->s_sprt);
		free(brk[i]);
	}
	free(brk);
	free_ing(ing);
	sfImage_destroy(icn);
}

int main(int ac, char **av, char **envp)
{
	sfRenderWindow *window = NULL;
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
	free_sprt(bg, brk, ing, icn);
	sfRenderWindow_destroy(window);
	return (0);
}
