/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** reproduce_the_behavior_of_printf
*/

#include <stdarg.h>
#include "my.h"
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
int my_put_nbr(int nb)
{
    int i = nb;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * 1;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return (0);
}
/*int my_putnbr_base(int nbr, char const *base);*/

int my_printf(const char *format, ...)
{
	int i;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%' && format[i + 1] == 'i') {
			my_put_nbr(va_arg(ap, int));
		}
		if (format[i] == '%' && format[i + 1] == 'd') {
			my_put_nbr(va_arg(ap, int));
		}
		if (format[i] == '%' && format[i + 1] == 's') {
			my_putstr(va_arg(ap, char*));
		}
		/*if (format[i] == '%' && format[i + 1] == 'c') {
			my_putchar(va_arg(ap, char));
		}
		/*if (format == "%p") {
			my_putnbrbase(va_arg(ap, void*));
		}*/
        if (format[i] == '%')
            i++;
        else
            my_putchar(format[i]);
    }
	va_end(ap);
}
