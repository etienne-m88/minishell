/*
** EPITECH PROJECT, 2024
** lib
** File description:
** strdup
*/
#include "../include/my.h"

char *my_strdup(char *src)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
