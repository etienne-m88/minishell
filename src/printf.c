/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** project
*/
#include "../include/my.h"

int condition(int j, const char *format, va_list list)
{
    char str[12] = {'%', 'i', 'd', 'c', 's', 'o',
        'u', 'x', 'X', 'b', 'f', 'p'};
    void (*array[])(va_list) = {my_print_prc, my_print_i,
        my_print_d, my_print_c, my_print_s, my_print_o,
        my_print_u, my_print_x, my_print_large_x,
        my_print_binary, my_print_f, my_print_p};

    for (int x = 0; x < 13; x++) {
        if (format[j] == str[x])
            array[x](list);
    }
    return (0);
}

int my_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            condition(i, format, list);
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return (0);
}
