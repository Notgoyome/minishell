/*
** EPITECH PROJECT, 2023
** B-PSU-200-MPL-2-1-minishell1-guillaume1.tran
** File description:
** remove_backslashn
*/
int remove_last_char(char * str)
{
    for (int i = 1; str[i]; i++) {
        if (str[i] == '\n') {
            str[i] = 0;
            return 0;
        }
    }
}
