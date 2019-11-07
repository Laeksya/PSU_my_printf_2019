/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** test_for_my_printf
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include "my.h"

int my_printf(const char *format, ...);

void  redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("hello  world");
    cr_assert_stdout_eq_str("hello  world");
}
Test(my_printf , flag_string , .init = redirect_all_std)
{
    my_printf("%s","icetea");
    cr_assert_stdout_eq_str("icetea");
}