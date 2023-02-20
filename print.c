/*
** EPITECH PROJECT, 2023
** print
** File description:
** print
*/

#include <unistd.h>
#include <stdlib.h>

int my_putchar(char c)
{
    return write(1, &c, 1);
}

int my_putstr(char *str)
{
    int error = 0;

    for (int i = 0; str[i]; i++) {
        error = my_putchar(str[i]);
        if ( error < 0)
            return 84;
    }
    return 0;
}

int my_putstr_fd(char *str, int fd)
{
    int error = 0;

    for (int i = 0; str[i]; i++) {
        error = write(fd, &str[i], 1);
        if ( error < 0)
            return 84;
    }
    return 0;
}

int my_put_nbr(int n)
{
    int error = 0;

    if (n < 0) {
        n *= -1;
        error = my_putchar('-');
        if (error < 0)
            return 84;
    }
    if (n < 10){
        error = my_putchar('0' + n);
        if (error < 0)
            return 84;
        return 0;
    }
    my_put_nbr(n / 10);
    error = my_putchar('0' + n % 10);
    if (error < 0)
        return 84;
    return 0;
}

long my_getnbr(char * str)
{
    int result = 0;
    int neg = 1;

    while (str[0] < '0' || str[0] > '9') {
        if (str[0] == '-'){
            neg *= -1;
        }
        if ((str[0] < '0' || str[0] > '9') && str[0] != '-') {
            neg = 1;
        }
        str++;
    }
    while ((str[0] >= '0' && str[0] <= '9') && str[0] != '\0') {
        result += str[0] - '0';
        result *= 10;
        str++;
    }
    result /= 10;
    return result;
}
