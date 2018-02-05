/*
** EPITECH PROJECT, 2018
** create rect.c
** File description:
** lib graph
*/

#include "graph.h"

sfIntRect create_recth(int top, int left, int width, int height)
{
	sfIntRect rect;

	rect.top = top;
	rect.left = left;
	rect.width = width;
	rect.height = height;
	return (rect);
}
