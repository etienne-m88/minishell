/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** function
*/
#include "../include/my.h"

int my_tablen(char **array)
{
    int i = 0;

    for (; array[i]; i++);
    return (i);
}

int change_directory(char *path, char **env)
{
    char **array = my_str_to_word_array(path, ' ');

    if (my_tablen(array) == 3) {
        write(2, "cd: Too many arguments.\n", 24);
        return (0);
    }
    if (my_tablen(array) == 1 || array[1][0] == '~') {
        chdir(my_getenv(env, "HOME="));
        return (0);
    }
    if (chdir(array[1]) == -1) {
        my_printf("%s: %s.", array[1], strerror(errno));
        return (84);
    }
    free(array);
    return (0);
}

void clear_str(char **str)
{
    for (int i = 0; (*str)[i]; i++)
        if ((*str)[i] == '\t')
            (*str)[i] = ' ';
}

int compare_command(char *args, char **env)
{
    if (my_strcmp(args, "env") == 0) {
        print_env(env);
        return (0);
    }
    if (my_strcmp(args, "exit") == 0)
        exit(0);
    if (my_strncmp(args, "cd", 2) == 0) {
        change_directory(args, env);
        return (0);
    } else {
        clear_str(&args);
        loop_fork(args, env, 0);
    }
    return (1);
}

void prompt(char *buf)
{
    if (my_strlen(buf) == 0) {
        if (isatty(0) == 1) {
            my_putstr("$>");
        }
    }
}
