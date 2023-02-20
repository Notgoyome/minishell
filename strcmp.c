/*
** EPITECH PROJECT, 2023
** B-PSU-200-MPL-2-1-minishell1-guillaume1.tran
** File description:
** strcmp
*/

int my_strcmp(char* s1, char* s2)
{
    for (int i = 0; s1[i]; i ++) {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }
    return 1;
}