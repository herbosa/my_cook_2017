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
	v_mode.bitsPerPixel = 32;
	wd = sfRenderWindow_create(v_mode, "MY_COOK", sfDefaultStyle, NULL);
	return (wd);
}

void start_disp(sfRenderWindow *window, sfSprite *sprite_start)
{
        sfText *start = sfText_create();
        sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
        sfVector2f origin = {850, 320};

        sfRenderWindow_drawSprite(window, sprite_start, NULL);
        sfText_setString(start, "Press any\n key to\n  start");
        sfText_setFont(start, font);
        sfText_setCharacterSize(start, 90);
	sfText_setColor(start, sfColor_fromRGB(0, 0, 0));
	sfText_move(start, origin);
        sfRenderWindow_drawText(window, start, NULL);
        sfText_destroy(start);
        sfFont_destroy(font);
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
	start_disp(window, bg[0]->s_sprt);
	sfRenderWindow_display(window);
}

void pause_setsprite(sprite_t **brk)
{
	sfSprite_setTextureRect(brk[0]->s_sprt, brk[0]->r_sprt);
	sfSprite_setTextureRect(brk[1]->s_sprt, brk[1]->r_sprt);
}

void touch_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
}

void button_pause(sprite_t **brk, sfEvent event)
{
	if (event.mouseMove.x  > brk[0]->v_sprt.x &&
		event.mouseMove.x < brk[0]->v_sprt.x + 200 &&
		event.mouseMove.y > brk[0]->v_sprt.y &&
		event.mouseMove.y < brk[0]->v_sprt.y + 200)
		brk[0]->r_sprt.top = 200;
	else
		brk[0]->r_sprt.top = 0;
	if (event.mouseMove.x  > brk[1]->v_sprt.x &&
		event.mouseMove.x < brk[1]->v_sprt.x + 200 &&
		event.mouseMove.y > brk[1]->v_sprt.y &&
		event.mouseMove.y < brk[1]->v_sprt.y + 200)
		brk[1]->r_sprt.top = 200;
	else
		brk[1]->r_sprt.top = 0;
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
}

void display_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_pause(window, bg, brk);
		button_pause(brk, event);
		if (event.type == sfEvtMouseButtonPressed)
			clicked_pause(window, bg, brk, event);
	}
	pause_setsprite(brk);
	sfRenderWindow_drawSprite(window, bg[1]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, brk[0]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, brk[1]->s_sprt, NULL);
	sfRenderWindow_display(window);
}

void touch_game(sfRenderWindow *window, sprite_t **bg)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 2;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
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

void game_loop(sfRenderWindow *window, sprite_t **bg, sprite_t **brk)
{
	while (sfRenderWindow_isOpen(window)) {
		if (bg[0]->o_sprt == 0)
			display_home(window, bg);
		if (bg[0]->o_sprt == 1)
			display_game(window, bg);
		if (bg[0]->o_sprt == 2)
			display_pause(window, bg, brk);
	}
}

sfIntRect create_rect(sfIntRect rect)
{
	rect.top = 0;
	rect.left = 0;
	rect.width = 200;
	rect.height = 200;
	return (rect);
}

sprite_t **fill_brk(sprite_t **brk)
{
	brk[0] = malloc(sizeof(sprite_t) * 1);
	brk[0] = create_sprite(brk[0], "rsrc/pictures/quitb.png");
	brk[0]->v_sprt.x = 600;
	brk[0]->v_sprt.y = 700;
	brk[0]->r_sprt = create_rect(brk[0]->r_sprt);
	sfSprite_setPosition(brk[0]->s_sprt,  brk[0]->v_sprt);
	brk[1] = malloc(sizeof(sprite_t) * 1);
	brk[1] = create_sprite(brk[1], "rsrc/pictures/reume_b.png");
	brk[1]->v_sprt.x = 1000;
	brk[1]->v_sprt.y = 700;
	brk[1]->r_sprt = create_rect(brk[1]->r_sprt);
	sfSprite_setPosition(brk[1]->s_sprt,  brk[1]->v_sprt);
	return (brk);
}

sprite_t **fill_bg(sprite_t **bg)
{
	bg[0] = malloc(sizeof(sprite_t) * 1);
	bg[0] = create_sprite(bg[0], "rsrc/pictures/home.png");
	bg[0]->o_sprt = 0;
	bg[1] = malloc(sizeof(sprite_t) * 1);
	bg[1] = create_sprite(bg[1], "rsrc/pictures/pause.png");
	bg[2] = malloc(sizeof(sprite_t) * 1);
	bg[2] = create_sprite(bg[2], "rsrc/pictures/background.png");
	bg[3] = malloc(sizeof(sprite_t) * 1);
	bg[3] = create_sprite(bg[3], "rsrc/pictures/contoire.png");
	return (bg);
}



int main(int ac, char **av, char **envp)
{
	sfRenderWindow *window = malloc(sizeof(sfRenderWindow *) * 1);
	sprite_t **bg = malloc(sizeof(sprite_t *) * 4);
	sprite_t **brk = malloc(sizeof(sprite_t *) * 2);
	sfImage *icn = sfImage_createFromFile("rsrc/pictures/icon.png");
	sfUint8 *icon = (sfUint8 *)sfImage_getPixelsPtr(icn);

	if (bg == NULL || brk == NULL || envp[0] == NULL || ac != 1 || av[1])
		return (84);
	bg = fill_bg(bg);
	brk = fill_brk(brk);
	window = renderwindow_create(window);
	sfRenderWindow_setFramerateLimit(window, 60);
	sfRenderWindow_setIcon(window, 100, 100, icon);
	game_loop(window, bg, brk);
	return (0);
}
