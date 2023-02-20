/*
** EPITECH PROJECT, 2023
** shell
** File description:
** shell
*/

#pragma once

typedef struct my_shell_t {
    int ac;
    char **av;
    char **env;
    char *init_path;
    char *current_path;
    char * line;
    int error;
    int status;
} my_shell;

my_shell* init_shell(int ac, char** av, char** env);
int update_shell(my_shell* main);
int execute_cd(my_shell* main);
int execute_all(my_shell* main);
int execute_pwd(my_shell* main);
int add_pwd(char *text, my_shell* main);
int display_base(my_shell* main);
char** parse_line(my_shell* main);
int read_line(my_shell* main);