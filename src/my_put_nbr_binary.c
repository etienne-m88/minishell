/*
** EPITECH PROJECT, 2023
** put_nbr
** File description:
** lib/my
*/
#include "../include/my.h"

unsigned int my_put_nbr_binary(unsigned int nb)
{
    if (nb > 1) {
        my_put_nbr_binary(nb / 2);
        my_putchar((nb % 2) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
