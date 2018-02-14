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
#include "my_printf.h"
#include "graph.h"

typedef struct game {
	int sec;
	char *cmd;
	int lastcmd;
	int elapsed_time;
	int first_cmd;
} game_t;

#endif
