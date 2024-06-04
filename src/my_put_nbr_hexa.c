/*
** EPITECH PROJECT, 2023
** put_nbr
** File description:
** lib/my
*/
#include "../include/my.h"

unsigned int my_put_nbr_hexa(unsigned int nb)
{
    if (nb > 15) {
        my_put_nbr_hexa(nb / 16);
        if (nb % 16 > 9) {
            my_putchar((nb % 16) + 87);
        } else {
            my_putchar(nb % 16);
        }
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
