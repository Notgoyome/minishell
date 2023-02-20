/*
** EPITECH PROJECT, 2023
** B-PSU-200-MPL-2-1-minishell1-guillaume1.tran
** File description:
** main
*/

#include "include/my.h"
#include "include/shell.h"
#include <signal.h>

int main(int ac, char** av, char** env)
{
    my_shell* main = init_shell(ac, av, env);
    
    while (main->status) {
        update_shell(main);
    }
}
