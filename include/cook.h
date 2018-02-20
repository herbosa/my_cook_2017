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

typedef struct command {
	char *cmd;
	unsigned long int time;
} cmd_t;

typedef struct game {
	int sec;
	cmd_t *command;
	int lastcmd;
	int lastsend;
	int elapsed_time;
	int first_cmd;
	int point;
} game_t;

#endif
