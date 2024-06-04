/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** main
*/
#include "../include/my.h"

int loop(char **env)
{
    char *buf = NULL;
    size_t len = 0;

    if (isatty(0) == 1) {
        my_putstr("$>");
    }
    while (getline(&buf, &len, stdin) != -1) {
        if (buf[my_strlen(buf) - 1] == '\n')
            buf[my_strlen(buf) - 1] = '\0';
        compare_command(buf, env);
        prompt(buf);
    }
    free(buf);
    return (0);
}

static int find_slash(char *buf)
{
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == '/')
        return (1);
    }
    return (0);
}

void execve_condition(char *path, char **args, char **env, char *buf)
{
    if (execve((find_slash(buf) == 0) ? path : args[0], args, env) == -1) {
        write(2, args[0], my_strlen(args[0]));
        write(2, ": Command not found.\n", 21);
        exit(1);
    }
}

int loop_fork(char *buf, char **env, pid_t pid)
{
    char **array = my_str_to_word_array(buf, ' ');
    char path[1024] = "/bin/";

    pid = fork();
    if (pid == -1) {
        perror("fork");
        free(buf);
        return (1);
    }
    if (pid == 0) {
        my_strcat(path, array[0]);
        execve_condition(path, array, env, buf);
        free(buf);
        exit(1);
    } else {
        condition_loop_fork();
    }
    return (0);
}

void condition_loop_fork(void)
{
    wait(NULL);
    if (isatty(0) == 1) {
        my_putstr("$>");
    }
}

int main(int ac, char **av, char **env)
{
    (void)av;
    (void)ac;
    if (ac != 1) {
        write(2, "Problem argument\n", 17);
        return (84);
    }
    loop(env);
    return (0);
}
