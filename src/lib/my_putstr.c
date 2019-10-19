/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** my_putstr
*/

#include "n4s.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        my_putchar(str[i]);
        i++;
    }
}
