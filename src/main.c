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

void start_disp(sfRenderWindow *window, sfSprite *sprite_start, sprite_t **bg)
{
        sfText *start = sfText_create();
        sfFont *font = sfFont_createFromFile("./rsrc/font/font.ttf");
        sfVector2f origin = {850, 320};

        sfRenderWindow_drawSprite(window, sprite_start, NULL);
	sfRenderWindow_drawSprite(window, bg[4]->s_sprt, NULL);
        sfText_setString(start, "Press \nenter or\nclick here\nto start");
        sfText_setFont(start, font);
        sfText_setCharacterSize(start, 80);
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
	else if (sfKeyboard_isKeyPressed(sfKeyReturn))
		bg[0]->o_sprt = 1;
}

void clicked_home(sfEvent event, sprite_t **bg, sfRenderWindow *window)
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
	if (event.mouseButton.x > 824 &&
		event.mouseButton.x < 824 + 520 &&
		event.mouseButton.y > 303 &&
		event.mouseButton.y < 303 + 390)
		bg[0]->o_sprt = 1;
	 sfSprite_setTextureRect(bg[4]->s_sprt, bg[4]->r_sprt);
}

void display_home(sfRenderWindow *window, sprite_t **bg)
{
	sfEvent event;

	start_disp(window, bg[0]->s_sprt, bg);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_home(window, bg);
		clicked_home(event, bg, window);
	}
	sfRenderWindow_display(window);
}

void pause_setsprite(sprite_t **brk)
{
	sfSprite_setTextureRect(brk[0]->s_sprt, brk[0]->r_sprt);
	sfSprite_setTextureRect(brk[1]->s_sprt, brk[1]->r_sprt);
	sfSprite_setTextureRect(brk[2]->s_sprt, brk[2]->r_sprt);
}

void touch_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeyM))
		bg[0]->o_sprt = 0;;
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
		event.mouseButton.y < brk[2]->v_sprt.y + 200)
		bg[0]->o_sprt = 0;
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
	sfRenderWindow_drawSprite(window, brk[2]->s_sprt, NULL);
	sfRenderWindow_display(window);
}

void show_menu(sprite_t **ing)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1) {
		ing[i]->v_sprt.x = ing[i]->v_sprt.x - 300;
		sfSprite_setPosition(ing[i]->s_sprt, ing[i]->v_sprt);
	}
	ing[24]->o_sprt = 1;
}

void hide_menu(sprite_t **ing)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1) {
		ing[i]->v_sprt.x = ing[i]->v_sprt.x + 300;
		sfSprite_setPosition(ing[i]->s_sprt, ing[i]->v_sprt);
	}
	ing[24]->o_sprt = 0;
}

void clicked_game(sprite_t **ing, sfEvent event)
{
	int i = 0;

	for (i = 0; i < 24; i = i + 1)
		if (event.mouseButton.x  > ing[i]->v_sprt.x &&
			event.mouseButton.x < ing[i]->v_sprt.x + 100 &&
			event.mouseButton.y > ing[i]->v_sprt.y &&
			event.mouseButton.y < ing[i]->v_sprt.y + 100 &&
			ing[i]->o_sprt == 0)
			ing[i]->o_sprt = 1;
	if (event.mouseButton.x  > ing[24]->v_sprt.x &&
		event.mouseButton.x < ing[24]->v_sprt.x + 100 &&
		event.mouseButton.y > ing[24]->v_sprt.y &&
		event.mouseButton.y < ing[24]->v_sprt.y + 100) {
		if (ing[24]->o_sprt == 0)
			show_menu(ing);
		else if (ing[24]->o_sprt == 1)
			hide_menu(ing);
	}
}

void button_game(sprite_t **ing, sfEvent event)
{
	int i = 0;

	for (i = 0; i < 25; i = i + 1)
		if (event.mouseMove.x  > ing[i]->v_sprt.x &&
		    event.mouseMove.x < ing[i]->v_sprt.x + 100 &&
		    event.mouseMove.y > ing[i]->v_sprt.y &&
		    event.mouseMove.y < ing[i]->v_sprt.y + 100)
			ing[i]->r_sprt.top = 100;
		else
			ing[i]->r_sprt.top = 0;
}

void ing_key_0_9(sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyB))
		ing[0]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyL))
		ing[1]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyF))
		ing[2]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyG))
		ing[3]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyI))
		ing[4]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyX))
		ing[5]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyM))
		ing[6]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyK))
		ing[7]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyV))
		ing[8]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyD))
		ing[9]->o_sprt = 1;
}

void ing_key_10_19(sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyP))
		ing[10]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyZ))
		ing[11]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyN))
		ing[12]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyR))
		ing[13]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyO))
		ing[14]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyJ))
		ing[15]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyE))
		ing[16]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyT))
		ing[17]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyS))
		ing[18]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyH))
		ing[19]->o_sprt = 1;
}

void touch_game(sfRenderWindow *window, sprite_t **bg, sprite_t **ing)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		bg[0]->o_sprt = 2;
	if (sfKeyboard_isKeyPressed(sfKeyQ))
		sfRenderWindow_close(window);
	if (sfKeyboard_isKeyPressed(sfKeyTab)) {
		if (ing[24]->o_sprt == 0)
			show_menu(ing);
		else if (ing[24]->o_sprt == 1)
			hide_menu(ing);
	}
	ing_key_0_9(ing);
	ing_key_10_19(ing);
	if (sfKeyboard_isKeyPressed(sfKeyY))
		ing[20]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyC))
		ing[21]->o_sprt = 1;
	if (sfKeyboard_isKeyPressed(sfKeyA))
		ing[22]->o_sprt = 1;
}

void drawer_game(sfRenderWindow *window, sprite_t **bg, sprite_t **ing)
{
	int i = 0;

	sfRenderWindow_drawSprite(window, bg[2]->s_sprt, NULL);
	sfRenderWindow_drawSprite(window, bg[3]->s_sprt, NULL);
	for (i = 0; i < 25; i = i + 1)
		sfRenderWindow_drawSprite(window, ing[i]->s_sprt, NULL);
}

void game_setsprite(sprite_t **ing)
{	
	int i = 0;

	for(i = 0; i < 25; i = i + 1)
		sfSprite_setTextureRect(ing[i]->s_sprt, ing[i]->r_sprt);
}

void display_game(sfRenderWindow *window, sprite_t **bg, sprite_t **ing)
{
	sfEvent event;
	int i = 0;

	for (i = 0; i < 24; i = i + 1)
		ing[i]->o_sprt = 0;
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtKeyPressed)
			touch_game(window, bg, ing);
		if (event.type == sfEvtMouseButtonPressed)
			clicked_game(ing, event);
		button_game(ing, event);
	}
	if (ing[23]->o_sprt == 1)
		bg[0]->o_sprt = 2;
	game_setsprite(ing);
	drawer_game(window, bg, ing);
	sfRenderWindow_display(window);
}

void game_loop(sfRenderWindow *window, sprite_t **bg, sprite_t **brk, sprite_t **ing)
{
	while (sfRenderWindow_isOpen(window)) {
		if (bg[0]->o_sprt == 0)
			display_home(window, bg);
		if (bg[0]->o_sprt == 1)
			display_game(window, bg, ing);
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

sfIntRect create_rect_ing(sfIntRect rect)
{
	rect.top = 0;
	rect.left = 0;
	rect.width = 100;
	rect.height = 100;
	return (rect);
}

sprite_t **fill_ing_0_2(sprite_t **ing)
{
	ing[0] = malloc(sizeof(sprite_t) * 1);
	ing[0] = create_sprite(ing[0], "rsrc/pictures/beer.png");
	ing[0]->v_sprt.x = 1820;
	ing[0]->v_sprt.y = 0;
	ing[0]->r_sprt = create_rect_ing(ing[0]->r_sprt);
	sfSprite_setPosition(ing[0]->s_sprt, ing[0]->v_sprt);
	ing[1] = malloc(sizeof(sprite_t) * 1);
	ing[1] = create_sprite(ing[1], "rsrc/pictures/coca_b.png");
	ing[1]->v_sprt.x = 1720;
	ing[1]->v_sprt.y = 0;
	ing[1]->r_sprt = create_rect_ing(ing[1]->r_sprt);
	sfSprite_setPosition(ing[1]->s_sprt, ing[1]->v_sprt);
	ing[2] = malloc(sizeof(sprite_t) * 1);
	ing[2] = create_sprite(ing[2], "rsrc/pictures/fanta_b.png");
	ing[2]->v_sprt.x = 1620;
	ing[2]->v_sprt.y = 0;
	ing[2]->r_sprt = create_rect_ing(ing[2]->r_sprt);
	sfSprite_setPosition(ing[2]->s_sprt, ing[2]->v_sprt);
	return (ing);
}

sprite_t **fill_ing_3_5(sprite_t **ing)
{
	ing[3] = malloc(sizeof(sprite_t) * 1);
	ing[3] = create_sprite(ing[3], "rsrc/pictures/glacage.png");
	ing[3]->v_sprt.x = 1820;
	ing[3]->v_sprt.y = 100;
	ing[3]->r_sprt = create_rect_ing(ing[3]->r_sprt);
	sfSprite_setPosition(ing[3]->s_sprt, ing[3]->v_sprt);
	ing[4] = malloc(sizeof(sprite_t) * 1);
	ing[4] = create_sprite(ing[4], "rsrc/pictures/conffetis.png");
	ing[4]->v_sprt.x = 1720;
	ing[4]->v_sprt.y = 100;
	ing[4]->r_sprt = create_rect_ing(ing[4]->r_sprt);
	sfSprite_setPosition(ing[4]->s_sprt, ing[4]->v_sprt);
	ing[5] = malloc(sizeof(sprite_t) * 1);
	ing[5] = create_sprite(ing[5], "rsrc/pictures/sauce_tmt.png");
	ing[5]->v_sprt.x = 1620;
	ing[5]->v_sprt.y = 100;
	ing[5]->r_sprt = create_rect_ing(ing[5]->r_sprt);
	sfSprite_setPosition(ing[5]->s_sprt, ing[5]->v_sprt);
	return (ing);
}
sprite_t **fill_ing_6_8(sprite_t **ing)
{
	ing[6] = malloc(sizeof(sprite_t) * 1);
	ing[6] = create_sprite(ing[6], "rsrc/pictures/mayo.png");
	ing[6]->v_sprt.x = 1820;
	ing[6]->v_sprt.y = 200;
	ing[6]->r_sprt = create_rect_ing(ing[6]->r_sprt);
	sfSprite_setPosition(ing[6]->s_sprt, ing[6]->v_sprt);
	ing[7] = malloc(sizeof(sprite_t) * 1);
	ing[7] = create_sprite(ing[7], "rsrc/pictures/ketchup.png");
	ing[7]->v_sprt.x = 1720;
	ing[7]->v_sprt.y = 200;
	ing[7]->r_sprt = create_rect_ing(ing[7]->r_sprt);
	sfSprite_setPosition(ing[7]->s_sprt, ing[7]->v_sprt);
	ing[8] = malloc(sizeof(sprite_t) * 1);
	ing[8] = create_sprite(ing[8], "rsrc/pictures/vinaigrette.png");
	ing[8]->v_sprt.x = 1620;
	ing[8]->v_sprt.y = 200;
	ing[8]->r_sprt = create_rect_ing(ing[8]->r_sprt);
	sfSprite_setPosition(ing[8]->s_sprt, ing[8]->v_sprt);
	return (ing);
}
sprite_t **fill_ing_9_11(sprite_t **ing)
{
	ing[9] = malloc(sizeof(sprite_t) * 1);
	ing[9] = create_sprite(ing[9], "rsrc/pictures/donnut.png");
	ing[9]->v_sprt.x = 1820;
	ing[9]->v_sprt.y = 300;
	ing[9]->r_sprt = create_rect_ing(ing[9]->r_sprt);
	sfSprite_setPosition(ing[9]->s_sprt, ing[9]->v_sprt);
	ing[10] = malloc(sizeof(sprite_t) * 1);
	ing[10] = create_sprite(ing[10], "rsrc/pictures/pain.png");
	ing[10]->v_sprt.x = 1720;
	ing[10]->v_sprt.y = 300;
	ing[10]->r_sprt = create_rect_ing(ing[10]->r_sprt);
	sfSprite_setPosition(ing[10]->s_sprt, ing[10]->v_sprt);
	ing[11] = malloc(sizeof(sprite_t) * 1);
	ing[11] = create_sprite(ing[11], "rsrc/pictures/pate_pizza.png");
	ing[11]->v_sprt.x = 1620;
	ing[11]->v_sprt.y = 300;
	ing[11]->r_sprt = create_rect_ing(ing[11]->r_sprt);
	sfSprite_setPosition(ing[11]->s_sprt, ing[11]->v_sprt);
	return (ing);
}
sprite_t **fill_ing_12_14(sprite_t **ing)
{
	ing[12] = malloc(sizeof(sprite_t) * 1);
	ing[12] = create_sprite(ing[12], "rsrc/pictures/cornichon.png");
	ing[12]->v_sprt.x = 1820;
	ing[12]->v_sprt.y = 400;
	ing[12]->r_sprt = create_rect_ing(ing[12]->r_sprt);
	sfSprite_setPosition(ing[12]->s_sprt, ing[12]->v_sprt);
	ing[13] = malloc(sizeof(sprite_t) * 1);
	ing[13] = create_sprite(ing[13], "rsrc/pictures/oignon.png");
	ing[13]->v_sprt.x = 1720;
	ing[13]->v_sprt.y = 400;
	ing[13]->r_sprt = create_rect_ing(ing[13]->r_sprt);
	sfSprite_setPosition(ing[13]->s_sprt, ing[13]->v_sprt);
	ing[14] = malloc(sizeof(sprite_t) * 1);
	ing[14] = create_sprite(ing[14], "rsrc/pictures/olive.png");
	ing[14]->v_sprt.x = 1620;
	ing[14]->v_sprt.y = 400;
	ing[14]->r_sprt = create_rect_ing(ing[14]->r_sprt);
	sfSprite_setPosition(ing[14]->s_sprt, ing[14]->v_sprt);	
	return (ing);
}
sprite_t **fill_ing_15_17(sprite_t **ing)
{
	ing[15] = malloc(sizeof(sprite_t) * 1);
	ing[15] = create_sprite(ing[15], "rsrc/pictures/jambon.png");
	ing[15]->v_sprt.x = 1820;
	ing[15]->v_sprt.y = 500;
	ing[15]->r_sprt = create_rect_ing(ing[15]->r_sprt);
	sfSprite_setPosition(ing[15]->s_sprt, ing[15]->v_sprt);
	ing[16] = malloc(sizeof(sprite_t) * 1);
	ing[16] = create_sprite(ing[16], "rsrc/pictures/emental.png");
	ing[16]->v_sprt.x = 1720;
	ing[16]->v_sprt.y = 500;
	ing[16]->r_sprt = create_rect_ing(ing[16]->r_sprt);
	sfSprite_setPosition(ing[16]->s_sprt, ing[16]->v_sprt);
	ing[17] = malloc(sizeof(sprite_t) * 1);
	ing[17] = create_sprite(ing[17], "rsrc/pictures/tomate.png");
	ing[17]->v_sprt.x = 1620;
	ing[17]->v_sprt.y = 500;
	ing[17]->r_sprt = create_rect_ing(ing[17]->r_sprt);
	sfSprite_setPosition(ing[17]->s_sprt, ing[17]->v_sprt);
	return (ing);
}
sprite_t **fill_ing_18_20(sprite_t **ing)
{
	ing[18] = malloc(sizeof(sprite_t) * 1);
	ing[18] = create_sprite(ing[18], "rsrc/pictures/steak.png");
	ing[18]->v_sprt.x = 1820;
	ing[18]->v_sprt.y = 600;
	ing[18]->r_sprt = create_rect_ing(ing[18]->r_sprt);
	sfSprite_setPosition(ing[18]->s_sprt, ing[18]->v_sprt);
	ing[19] = malloc(sizeof(sprite_t) * 1);
	ing[19] = create_sprite(ing[19], "rsrc/pictures/steak_vege.png");
	ing[19]->v_sprt.x = 1720;
	ing[19]->v_sprt.y = 600;
	ing[19]->r_sprt = create_rect_ing(ing[19]->r_sprt);
	sfSprite_setPosition(ing[19]->s_sprt, ing[19]->v_sprt);
	ing[20] = malloc(sizeof(sprite_t) * 1);
	ing[20] = create_sprite(ing[20], "rsrc/pictures/salade_b.png");
	ing[20]->v_sprt.x = 1620;
	ing[20]->v_sprt.y = 600;
	ing[20]->r_sprt = create_rect_ing(ing[20]->r_sprt);
	sfSprite_setPosition(ing[20]->s_sprt, ing[20]->v_sprt);
	return (ing);
}
sprite_t **fill_ing_21_23(sprite_t **ing)
{
	ing[21] = malloc(sizeof(sprite_t) * 1);
	ing[21] = create_sprite(ing[21], "rsrc/pictures/frites.png");
	ing[21]->v_sprt.x = 1820;
	ing[21]->v_sprt.y = 700;
	ing[21]->r_sprt = create_rect_ing(ing[21]->r_sprt);
	sfSprite_setPosition(ing[21]->s_sprt, ing[21]->v_sprt);
	ing[22] = malloc(sizeof(sprite_t) * 1);
	ing[22] = create_sprite(ing[22], "rsrc/pictures/sel.png");
	ing[22]->v_sprt.x = 1720;
	ing[22]->v_sprt.y = 700;
	ing[22]->r_sprt = create_rect_ing(ing[22]->r_sprt);
	sfSprite_setPosition(ing[22]->s_sprt, ing[22]->v_sprt);
	ing[23] = malloc(sizeof(sprite_t) * 1);
	ing[23] = create_sprite(ing[23], "rsrc/pictures/pause_gb.png");
	ing[23]->v_sprt.x = 1620;
	ing[23]->v_sprt.y = 700;
	ing[23]->r_sprt = create_rect_ing(ing[23]->r_sprt);
	sfSprite_setPosition(ing[23]->s_sprt, ing[23]->v_sprt);
	return (ing);
}

sprite_t **fill_ing(sprite_t **ing)
{
	int i = 0;

	ing = fill_ing_0_2(ing);
	ing = fill_ing_3_5(ing);
	ing = fill_ing_6_8(ing);
	ing = fill_ing_9_11(ing);
	ing = fill_ing_12_14(ing);
	ing = fill_ing_15_17(ing);
	ing = fill_ing_18_20(ing);
	ing = fill_ing_21_23(ing);
	ing[24] = malloc(sizeof(sprite_t) * 1);
	ing[24] = create_sprite(ing[24], "rsrc/pictures/info.png");
	ing[24]->v_sprt.x = 1520;
	ing[24]->v_sprt.y = 0;
	ing[24]->r_sprt = create_rect_ing(ing[24]->r_sprt);
	sfSprite_setPosition(ing[24]->s_sprt, ing[24]->v_sprt);
	for (i = 0; i < 24; i = i + 1)
		ing[i]->o_sprt = 0;
	ing[24]->o_sprt = 1;
	ing[25] = 0;
	return (ing);
}

sprite_t **fill_brk(sprite_t **brk)
{
	brk[0] = malloc(sizeof(sprite_t) * 1);
	brk[0] = create_sprite(brk[0], "rsrc/pictures/quitb.png");
	brk[0]->v_sprt.x = 600;
	brk[0]->v_sprt.y = 700;
	brk[0]->r_sprt = create_rect(brk[0]->r_sprt);
	sfSprite_setPosition(brk[0]->s_sprt, brk[0]->v_sprt);
	brk[1] = malloc(sizeof(sprite_t) * 1);
	brk[1] = create_sprite(brk[1], "rsrc/pictures/reume_b.png");
	brk[1]->v_sprt.x = 1000;
	brk[1]->v_sprt.y = 700;
	brk[1]->r_sprt = create_rect(brk[1]->r_sprt);
	sfSprite_setPosition(brk[1]->s_sprt, brk[1]->v_sprt);
	brk[2] = malloc(sizeof(sprite_t) * 1);
	brk[2] = create_sprite(brk[2], "rsrc/pictures/menu.png");
	brk[2]->v_sprt.x = 800;
	brk[2]->v_sprt.y = 700;
	brk[2]->r_sprt = create_rect(brk[2]->r_sprt);
	sfSprite_setPosition(brk[2]->s_sprt, brk[2]->v_sprt);
	brk[3] = 0;
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
	bg[4] = malloc(sizeof(sprite_t) * 1);	
	bg[4] = create_sprite(bg[4], "rsrc/pictures/quit_bg.png");
	bg[4]->v_sprt.x = 0;
	bg[4]->v_sprt.y = 0;
	bg[4]->r_sprt = create_rect_ing(bg[4]->r_sprt);
	sfSprite_setPosition(bg[4]->s_sprt, bg[4]->v_sprt);
	sfSprite_setTextureRect(bg[4]->s_sprt, bg[4]->r_sprt);
	bg[5] = 0;
	return (bg);
}



int main(int ac, char **av, char **envp)
{
	sfRenderWindow *window = malloc(sizeof(sfRenderWindow *) * 1);
	sprite_t **bg = malloc(sizeof(sprite_t *) * 5);
	sprite_t **brk = malloc(sizeof(sprite_t *) * 4);
	sprite_t **ing = malloc(sizeof(sprite_t *) * 25);
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
