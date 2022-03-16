/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** display all numbers 
*/

#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else if(nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
