/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** structures for my_cook
*/

#ifndef STRUCT_H
#define STRUCT_H

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
