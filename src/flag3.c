/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag
*/
#include "../include/my.h"

void my_print_f(va_list list)
{
    my_put_nbr_float(va_arg(list, double));
}

void my_print_p(va_list list)
{
    my_put_nbr_pointeur(va_arg(list, void *));
}
