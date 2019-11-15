/*
** EPITECH PROJECT, 2019
** test_my_printf.c
** File description:
** test for my_printf function
*/

#include <criterion/criterion.h>

int my_printf(char const *format, ...);

Test(my_printf, prinf_an_int)
{
      char str[] = ;
     cr_assert_eq(my_printf("%i", ));
}

Test(my_printf, prinf_a_string)
{

    cr_assert_str_eq(my_printf("%s", ));
}
Test(my_printf, prinf_a_string)
{
    char str[] = "kakashiisbae";
    cr_assert_str_eq(my_printf("%s",str), kakashiisbae\n));
}
