/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** minishell
*/
#pragma once
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdarg.h>
#include <stddef.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdbool.h>

int condition(int j, const char *format, va_list list);
int my_printf(const char *format, ...);
void my_print_prc(va_list list);
void my_print_i(va_list list);
void my_print_d(va_list list);
void my_print_c(va_list list);
void my_print_s(va_list list);
void my_print_o(va_list list);
void my_print_u(va_list list);
void my_print_x(va_list list);
void my_print_large_x(va_list list);
void my_print_binary(va_list list);
void my_print_f(va_list list);
void my_print_p(va_list list);
unsigned int my_put_nbr_binary(unsigned int nb);
unsigned int my_put_nbr_deci(unsigned int nb);
int my_put_nbr_float(double nb);
unsigned int my_put_nbr_hexa(unsigned int nb);
unsigned int my_put_nbr_hexa2(unsigned int nb);
long int my_put_nbr_long_int(long int nb);
unsigned int my_put_nbr_octal(unsigned int nb);
int my_put_nbr_pointeur(void *nb);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, size_t i);
char *my_strdup(char *src);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
char **my_str_to_word_array(char *str, char delim);
int count_separator(char const *str, char delim);
void print_env(char **env);
int loop(char **env);
int loop_fork(char *buf, char **env, pid_t pid);
void prompt(char *buf);
int change_directory(char *path, char **env);
int compare_command(char *args, char **env);
void condition_loop_fork(void);
char *my_getenv(char **env, char *path);
int my_tablen(char **array);
