/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** reproduce_the_behavior_of_printf
*/

#include <stdarg.h>
#include "lib/my/my.h"

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
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
		/*if (format == "%p") {
			my_putnbrbase(va_arg(ap, void*));
		}*/
	}
	va_end(ap);
}