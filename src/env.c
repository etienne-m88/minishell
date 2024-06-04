/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** function
*/
#include "../include/my.h"

char *my_getenv(char **env, char *path)
{
    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], path, 5) == 0) {
            return (env[i] + 5);
        }
    }
    return NULL;
}

void print_env(char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        my_printf("%s\n", env[i]);
    }
    if (isatty(0) == 1) {
        my_putstr("$>");
    }
}
