/*
** EPITECH PROJECT, 2018
** cook.h
** File description:
** cook.h
*/

#ifndef COOK_H_
#define COOK_H_

#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "my_printf.h"
#include "graph.h"

char *get_score(int nb);
void reinit_val();
void touch_home(sfRenderWindow *window, sprite_t **bg);
void clicked_help(sfEvent event, sprite_t **bg);
void touch_help(sfRenderWindow *window, sprite_t **bg);
void clicked_home(sfEvent event, sprite_t **bg, sfRenderWindow *window);
void start_disp(sfRenderWindow *window, sfSprite *sprite_start, sprite_t **bg);
void help_disp(sfRenderWindow *window, sprite_t **bg);
void display_home(sfRenderWindow *window, sprite_t **bg, game_t *game);
void display_help(sfRenderWindow *window, sprite_t **bg);
void display_end(sfRenderWindow *window, sprite_t **bg, game_t *game);
void helper_text(sfText *start_h, sfFont *font, sfRenderWindow *window);
void pause_setsprite(sprite_t **brk);
void touch_pause(sfRenderWindow *window, sprite_t **bg);
void button_pause(sprite_t **brk, sfEvent event);
void clicked_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk,
		sfEvent event);
void display_pause(sfRenderWindow *window, sprite_t **bg, sprite_t **brk);
void make_burger(sprite_t **ing);
void make_donut(sprite_t **ing);
void make_pizza(sprite_t **ing);
void make_fries(sprite_t **ing);
void make_vege_burger(sprite_t **ing);
void make_beer(sprite_t **ing);
void make_coca(sprite_t **ing);
void make_fanta(sprite_t **ing);
void make_salad(sprite_t **ing);
sprite_t **fill_ing_0_2(sprite_t **ing);
sprite_t **fill_ing_3_5(sprite_t **ing);
sprite_t **fill_ing_6_8(sprite_t **ing);
sprite_t **fill_ing_9_11(sprite_t **ing);
sprite_t **fill_ing_12_14(sprite_t **ing);
sprite_t **fill_ing_15_17(sprite_t **ing);
sprite_t **fill_ing_18_20(sprite_t **ing);
sprite_t **fill_ing_21_23(sprite_t **ing);
sprite_t **fill_ing_24_26(sprite_t **ing);
sprite_t **fill_ing_27_29(sprite_t **ing);
sprite_t **fill_ing_30_32(sprite_t **ing);
sprite_t **fill_ing_33_35(sprite_t **ing);
sprite_t **fill_ing_36_37(sprite_t **ing);
sfIntRect create_rect_ing(sfIntRect rect);
sfIntRect create_rect(sfIntRect rect);
sprite_t **fill_ing(sprite_t **ing);
sprite_t **fill_brk(sprite_t **brk);
sprite_t **fill_bg(sprite_t **bg);
void game_loop(sfRenderWindow *window, sprite_t **bg,
	sprite_t **brk, sprite_t **ing);
void ing_key_0_9(sprite_t **ing);
void ing_key_10_19(sprite_t **ing);
void ing_key_20_29(sprite_t **ing);
void clicked_game(sprite_t **ing, sfEvent event);
void button_game(sprite_t **ing, sfEvent event);
void touch_game(sfRenderWindow *window, sprite_t **bg, sprite_t **ing);
void drawer_game(sfRenderWindow *window, sprite_t **bg,
		sprite_t **ing, game_t *game);
void game_setsprite(sprite_t **ing);
void disp_coca(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_fanta(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_beer(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_salade(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_vege_burger(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_donut(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_fries(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_pizza(sfRenderWindow *window, sprite_t **ing, game_t *game);
void disp_burger(sfRenderWindow *window, sprite_t **ing, game_t *game);
void show_menu(sprite_t **ing);
void hide_menu(sprite_t **ing);
sfRenderWindow *renderwindow_create(sfRenderWindow *wd);
void disp_time(sfRenderWindow *window, sprite_t **ing);
void disp_str(sfRenderWindow *window, char *str, int x, int y);
void disp_str_red(sfRenderWindow *window, char *str, int x, int y);
void end_point_disp(sfRenderWindow *window, int pointnb);
void rm_from_cmd(game_t *game, int nb_cmd);
void make_burgers_drink(sprite_t **ing);
void make_comandes(sprite_t **ing);
void add_cmd(game_t *game);
void disp_cmd(sfRenderWindow *window, game_t *game, int i);
void clean_game_bool(sprite_t **ing, sprite_t **bg);
void game_event(sfRenderWindow *window, sprite_t **bg, sprite_t **ing);
void display_game(sfRenderWindow *window, sprite_t **bg,
		sprite_t **ing, game_t *game);
void launch_pause_help_end(sfRenderWindow *window, sprite_t **bg,
			sprite_t **brk, game_t *game);
void fill_game(game_t *game);
char *remove_str_elem(char *str, int i);
int *remove_intab_elem(int *str, int i);
void change_sprt(sfEvent event, sprite_t **bg, sfRenderWindow *window);

#endif
