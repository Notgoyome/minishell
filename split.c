/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-guillaume1.tran
** File description:
** parse
*/
#include <stdlib.h>

char ** split(char *text, char c)
{
    char ** list = malloc(sizeof(char *) * 50);
    int n = 0;
    int i = 0;

    list[0] = malloc(sizeof(char)*10);
    for (; text[0]; text++) {
        if (text[0] == c) {
            list[n][i] = '\0';
            text++;
            n++;
            list[n] = malloc(sizeof(char) * 10);
            i = 0;
        }
        list[n][i] = text[0];
        i++;
    }
    list[n][i] = text[0];
    list[n + 1] = 0;
    return list;
}
