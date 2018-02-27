/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** structures for my_cook
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct command {
	char *cmd;
	int *time;
} cmd_t;

typedef struct game {
	int sec;
	cmd_t *command;
	int lastcmd;
	int lastsend;
	int elapsed_time;
	int first_cmd;
	int point;
	sfMusic *win;
	sfMusic *lose;
	sfMusic *punch;
} game_t;

#endif
