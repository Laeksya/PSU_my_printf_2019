/*
** EPITECH PROJECT, 2019
** my_putnbr_base_unsigned.c
** File description:
** putnbr_base_unsigned
*/

void my_putchar(char c);
int my_strlen(char const *str);

int my_putnbr_base_unsigned(unsigned int nb, char const *base)
{
    unsigned int i = nb;
    int base_len = my_strlen(base);

    if (nb >= base_len) {
        my_putnbr_base(nb / base_len, base);
    }
    my_putchar(base[nb % base_len]);
    return (0);
}