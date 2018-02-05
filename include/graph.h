/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** .h for libmy
*/

#ifndef GRAPH_H_
#define GRAPH_H_

#include <SFML/Graphics.h>
#include <SFML/Audio/Music.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Config.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

struct sprite_s {
	sfTexture *t_sprt;
	sfSprite *s_sprt;
	sfVector2f v_sprt;
	int o_sprt;
	sfIntRect r_sprt;
};

typedef struct sprite_s sprite_t;

sprite_t *create_sprite(sprite_t *sprite, char *path);
sfIntRect create_recth(int top, int left, int width, int height);

#endif
