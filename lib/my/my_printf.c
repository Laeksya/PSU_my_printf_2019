/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** reproduce_the_behavior_of_printf
*/

#include <stdarg.h>
#include "my.h"
#include <stdio.h>

int my_printf(const char *format, ...)
{
	int i;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%' && format[i + 1] == 'i')
			my_put_nbr(va_arg(ap, int));
		if (format[i] == '%' && format[i + 1] == 'd')
			my_put_nbr(va_arg(ap, int));
		if (format[i] == '%' && format[i + 1] == 's')
			my_putstr(va_arg(ap, char*));
        if (format[i] == '%' && format[i + 1] == 'p')
            my_putnbr_base(va_arg(ap, int), "0123456789");
		if (format[i] == '%' && format[i + 1] == 'c')
			my_putchar((char)va_arg(ap, int));
        if (format[i] == '%')
            i++;
        else
            my_putchar(format[i]); }
	va_end(ap);
}
