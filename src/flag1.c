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

void my_print_prc(va_list list)
{
    write(1, "%", 1);
}

void my_print_i(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void my_print_d(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void my_print_c(va_list list)
{
    my_putchar(va_arg(list, int));
}

void my_print_s(va_list list)
{
    my_putstr(va_arg(list, char *));
}
