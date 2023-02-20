/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** execute_command
*/
#include "include/my.h"
#include "include/shell.h"
#include "include/commmand_function.h"

int execute_cd(my_shell* main)
{
    int error = 0;
    if (main->av[1] == NULL) {
        chdir(main->init_path);
    }
    error = chdir(main->av[1]);
}

int execute_pwd(my_shell* main)
{

}

int execute_command(my_shell* main)
{
    int child = 0;
    int status = 0;
    int error = 0;

    for (int i = 0; my_command[i].command != NULL; i++) {
        if (my_strcmp(my_command[i].command, main->av[0])) {
            my_command[i].ptr(main);
        }
    }
    main->av[0] = concat_string("/bin/",main->av[0]);
    child = fork();
    if (child == 0) {
        error = execve(main->av[0],main->av, main->env);
    }
    if (child != 0) {
        waitpid(child, &status, WUNTRACED);
    }
    return 0;
}