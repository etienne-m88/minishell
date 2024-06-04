/*
** EPITECH PROJECT, 2023
** printf
** File description:
** put_nbr_float
*/
#include "../include/my.h"

int my_put_nbr_float(double nb)
{
    double l = nb - (int)nb;

    if ((int)nb < 0){
        my_put_nbr_float((int)nb);
        my_putchar('.');
        for (int i = 0; i != 6; i++) {
            my_put_nbr_float((int)(-l * 10));
            l = -((-l * 10) - ((int)(-l * 10))) - 0.00000001;
        }
    } else {
        my_put_nbr((int)nb);
        my_putchar('.');
        for (int i = 0; i != 6; i++) {
            my_put_nbr((int)(l * 10));
            l = ((l * 10) - ((int)(l * 10))) + 0.00000001;
        }
    }
    return 0;
}
