/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** my_strlen
*/

#include "n4s.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str != 0 && str[i] != 0) {
        i++;
    }
    return (i);
}
