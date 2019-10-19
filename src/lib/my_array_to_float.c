/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** my_array_to_float
*/

#include "n4s.h"

float my_nb_float(int i, float nb)
{
    for (; i < 0; i++) {
        nb = nb * 0.1;
    }
    return (nb);
}

float my_array_to_float(char *str)
{
    float nb = 0.0;
    int i = 0;
    int j = 0;

    for (;str[j] != 0 &&
        str[j] >= '0' && str[j] <= '9'; j++) {
        nb = (str[j] - 48) + nb * 10.0;
    }
    j++;
    if (str[j] == '.') {
        for (; str[j] != 0; i--) {
            nb = nb * 10.0 + (str[j] - 48);
        }
    }
    nb = my_nb_float(i, nb);
    return (nb);
}
