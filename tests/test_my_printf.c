/*
** EPITECH PROJECT, 2019
** test_my_printf.c
** File description:
** test for my_printf function
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include "my.h"

int my_printf(const char *format, ...);

void  redirect_all_std(void)
{   cr_redirect_stdout ();
    cr_redirect_stderr ();
}
Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("vive la vie");
    cr_assert_stdout_eq_str("vive la vie");
}