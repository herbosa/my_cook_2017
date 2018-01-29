/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** .h for libmy
*/

#ifndef MYPRINF_H_
#define MYPRINTF_H_

int my_printf(char *s, ...);
int my_rand(int max);
char *my_strcpy (char *dest, char const *src);
char *my_evil_str(char *str);
char *my_strdup(char *str);
char *my_strcat(char *str, int nblist, ...);
void my_putchar(char c);
void my_putstr(char const *str);
int my_int_len(long long int nb);
int my_strlen(char const *str);
int my_uint_len(unsigned long long int nb);
int my_put_unbr(unsigned int nb);
int my_put_ulnbr(unsigned long int nb);
int my_put_ullnbr(unsigned long long int nb);
int my_put_uhnbr(unsigned short int nb);
int my_put_uhhnbr(unsigned char nb);
int my_put_nbr(int nb);
int my_put_lnbr(long int nb);
int my_put_llnbr(long long int nb);
int my_put_hnbr(short int nb);
int my_put_hhnbr(char nb);
int my_atoi(char *str);

#endif
