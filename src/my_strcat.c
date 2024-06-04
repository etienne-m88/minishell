/*
** EPITECH PROJECT, 2023
** strcat
** File description:
** lib/my
*/
#include "../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    char *p = dest;

    while (*p != '\0') {
        p++;
    }
    while (*src != '\0') {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';
    return (dest);
}
