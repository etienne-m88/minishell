/*
** EPITECH PROJECT, 2023
** put_nbr
** File description:
** lib/my
*/
#include "../include/my.h"

unsigned int my_put_nbr_octal(unsigned int nb)
{
    if (nb > 7) {
        my_put_nbr_octal(nb / 8);
        my_putchar((nb % 8) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
