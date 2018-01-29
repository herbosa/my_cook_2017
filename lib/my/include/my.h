/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** .h for libmy
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>

char *my_concat(char *src, char *dest, int j);
char *my_evil_str(char *str);
char *my_strcat(char *str, int nblist, ...);
char *my_strdup(char *str);
char *my_strcpy (char *dest, char const *src);
int multi_flag_plus(char *s, va_list listarg, int i);
int multi_flag_minus(char *s, va_list listarg, int i);
int flag_nbr(char *s, va_list listarg, int i);
int flag_space(char *s, va_list listarg, int i);
int nbr_spaces(char *s, va_list listarg, int i);
int multi_flag_sharp(char *s, va_list listarg, int i);
int my_int_len(long long int nb);
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
int my_strlen(char const *str);
int flag(char *s, va_list listarg, int i);
int flag_2(char *s, va_list listarg, int i);
int flag_3(char *s, va_list listarg, int i);
int flag_4(char *s, va_list listarg, int i);
int flag_5(char *s, va_list listarg, int i);
int multi_flagll(char *s, va_list listarg, int i);
int multi_flaghh(char *s, va_list listarg, int i);
int multi_flagl(char *s, va_list listarg, int i);
int multi_flagh(char *s, va_list listarg, int i);
void str_octal_noprintable(char const *str);
void padress(unsigned int padress);
void hexa_conv_lowcase(unsigned int nbr);
void hexa_conv_upcase(unsigned int nbr);
void octal_convert(unsigned int nbr);
void binary_convert(unsigned int nbr);
void my_putchar(char c);
void my_putstr(char const *str);
int my_printf(char *s, ...);

#endif
