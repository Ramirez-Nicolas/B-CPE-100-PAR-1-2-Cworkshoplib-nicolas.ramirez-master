/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** displays the numbers
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int c = 0;
    int result = 0;

    while(str[i] >= '0' && str[i] <= '9') {
            c = str[i] - '0';
            result = result * 10 + c;
            i++;
    }
    if (str[0] == '-')
        my_putchar('-');
    while(str[i+1] >= '0' && str[i+1] <= '9') {
        c = str[i+1] - '0';
        result = result * 10 + c;
        i++;
    }
    return (result);
}
