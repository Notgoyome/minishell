/*
** EPITECH PROJECT, 2023
** B-PSU-200-MPL-2-1-minishell1-guillaume1.tran [Codespaces]
** File description:
** commmand_function
*/

#pragma once
#include "shell.h"
#include "my.h"

struct my_command_t {
    char* command;
    int (*ptr)(my_shell*);
};

struct my_command_t my_command[] = {
    {"cd", execute_cd},
    {"pwd", execute_pwd},
    {NULL, NULL}
};