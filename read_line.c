/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** read_line
*/
#include "include/shell.h"
#include "include/my.h"

int read_line(my_shell* main)
{
    size_t n = 0;
    int error = 0;

    error = getline(&main->line, &n, stdin);
}