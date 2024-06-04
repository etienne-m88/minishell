/*
** EPITECH PROJECT, 2023
** printf
** File description:
** put_nbr_Hexa
*/
#include "../include/my.h"

unsigned int my_put_nbr_hexa2(unsigned int nb)
{
    if (nb > 15) {
        my_put_nbr_hexa2(nb / 16);
        if (nb % 16 > 9) {
            my_putchar((nb % 16) + 55);
        } else {
            my_putchar(nb % 16);
        }
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
