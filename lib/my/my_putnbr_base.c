/*
** EPITECH PROJECT, 2019
** my_putnbr_base.c
** File description:
** putnbr_base
*/

void my_putchar(char c);
int my_strlen(char const *str);

int my_putnbr_base(long long int nb, char const *base)
{
    int i = nb;
  	int base_len = my_strlen(base);

    if (nb < 0) {
        my_putchar('-');
 	    nb = nb * 1;
 	}
    if (nb >= base_len) {
        my_putnbr_base(nb / base_len, base);
 	}
    my_putchar(base[nb % base_len]);
    return (0);
}
/*à la ligne 22 on affiche le constituant de la base à l'indice correspondant*/