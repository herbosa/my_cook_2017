/*
** EPITECH PROJECT, 2018
** create_sprite.c
** File description:
** lib graph
*/

#include "graph.h"

sprite_t *create_sprite(sprite_t *sprite, char *path)
{
	sfImage *image;

	image = sfImage_createFromFile(path);
	sprite->t_sprt= sfTexture_createFromImage(image, NULL);
	sprite->s_sprt = sfSprite_create();
	sfSprite_setTexture(sprite->s_sprt, sprite->t_sprt, sfTrue);
	sfImage_destroy(image);
	return (sprite);
}
