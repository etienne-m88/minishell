/*
** EPITECH PROJECT, 2023
** printf
** File description:
** put_nbr_pointeur
*/
#include "../include/my.h"

int my_put_nbr_pointeur(void *nb)
{
    char str[] = "0123456789abcdef";
    unsigned long l = (unsigned long)nb;
    int size = 12;
    char a[size + 1];

    a[size] = '\0';
    for (int i = size - 1; i >= 0; i--) {
        a[i] = str[l % 16];
        l /= 16;
    }
    my_putstr("0x");
    my_putstr(a);
    return (0);
}
