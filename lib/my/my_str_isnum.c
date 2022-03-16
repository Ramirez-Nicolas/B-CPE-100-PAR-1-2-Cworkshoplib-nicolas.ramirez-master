/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** return 1 for num, else return 0
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
    
}
