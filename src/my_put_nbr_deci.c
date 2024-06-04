/*
** EPITECH PROJECT, 2023
** put_nbr
** File description:
** lib/my
*/
#include "../include/my.h"

unsigned int my_put_nbr_deci(unsigned int nb)
{
    if (nb > 9) {
        my_put_nbr_deci(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
