/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my
*/

#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/stat.h>
#include <fcntl.h>

char ** split(char *text, char c);
char* remove_last(char** str);
char* concat_string(char* str1, char* str2);
int remove_last_char(char * str);
int my_strcmp(char* s1, char* s2);
char* remove_after_it(char* str, char c);
int my_putstr(char* str);