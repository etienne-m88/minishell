/*
** EPITECH PROJECT, 2023
** strncmp
** File description:
** task06
*/
#include "../include/my.h"

int my_strncmp(char const *s1, char const *s2, size_t i)
{
    if (i == 0)
        return (0);
    while (*s1 == *s2 && *s1 != '\0') {
        i--;
        if (i == 0)
            return (0);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
