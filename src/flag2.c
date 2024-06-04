/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../include/my.h"

void my_print_o(va_list list)
{
    my_put_nbr_octal(va_arg(list, unsigned int));
}

void my_print_u(va_list list)
{
    my_put_nbr_deci(va_arg(list, unsigned int));
}

void my_print_x(va_list list)
{
    my_put_nbr_hexa(va_arg(list, unsigned int));
}

void my_print_large_x(va_list list)
{
    my_put_nbr_hexa2(va_arg(list, unsigned int));
}

void my_print_binary(va_list list)
{
    my_put_nbr_binary(va_arg(list, unsigned int));
}
