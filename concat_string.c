/*
** EPITECH PROJECT, 2023
** B-PSU-200-MPL-2-1-bsminishell1-guillaume1.tran
** File description:
** concat_string
*/
#include <unistd.h>

char* concat_string(char* str1, char* str2)
{
    int i;
    int n = 0;
    int j = 0;
    int temp_n = 0;

    for (int j = 0 ; str1[j] != '\0' ; j++)
        n++;
    for (int j = 0 ; str2[j] != '\0' ; j++)
        n++;
    char *str = malloc((n + 1) * sizeof(char));
    for (j = 0 ; str1[j] != '\0' ; j++) {
        str[temp_n] = str1[j];
        temp_n++;
    }
    for (j = 0 ; str2[j] != '\0' ; j++) {
        str[temp_n] = str2[j];
        temp_n++;
    }
    str[temp_n] = 0;
    return str;
}
