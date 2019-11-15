/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** reproduce_my_printf_behavior
*/

#include <stdarg.h>
#include "my.h"
#include <stdio.h>

int flags(char const *str, va_list ap, int c)
{
    char flags[10] = "sdiuXxcob%";

    void(*function[10])() = {print_s, print_d, print_i, print_u, print_X,
        print_x, print_c, print_o, print_b, print};
        for (int z = 0; flags[z] != '\0'; z++) {
            if (flags[z] == str[c])
                function[z](ap);

        }
}

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list ap;

    va_start(ap, format);
    for (i = 0; format[i] != '\0'; i++)
        if (format[i] == '%') {
            i++;
        flags(format, ap, i);
        }
        else
            my_putchar(format[i]);

    va_end(ap);
}