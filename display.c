/*
** EPITECH PROJECT, 2023
** B-PSU-200-MPL-2-1-minishell1-guillaume1.tran
** File description:
** display
*/
#include "include/my.h"
#include "include/shell.h"

int display_base(my_shell* main)
{
    write(1, "$> ", 3);
    return 0;
}
