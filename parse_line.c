/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** split_line
*/
#include "include/shell.h"
#include "include/my.h"

char** parse_line(my_shell* main)
{
    char** list = NULL;

    remove_last_char(main->line);
    list = split(main->line, ' ');
    main->av = list;
    return list;
}