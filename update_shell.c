/*
** EPITECH PROJECT, 2023
** execute shell
** File description:
** update_shell
*/

#include "include/my.h"
#include "include/shell.h"
#include <error.h>

my_shell* init_shell(int ac, char** av, char** env)
{
    my_shell * main = malloc(sizeof(my_shell));
    main->ac = ac;
    main->av = av;
    main->env = env;
    main->init_path = getcwd(NULL, 0);
    main->current_path = "/tmp";
    main->line = (char *) malloc(sizeof(char) * 64);
    main->status = 1;
    return main;
}

int update_shell(my_shell* main)
{
    int is_tty = isatty(STDIN_FILENO);

    if (is_tty) {
        display_base(main);
        read_line(main);
        parse_line(main);
        execute_command(main);
        return 0;
    }
    read_line(main);
    parse_line(main);
    execute_command(main);
    exit(0);
}
