/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** is_a_command_to_vrep
*/

#include "n4s.h"

char *ret_tmp(int i, int j, char *tmp, char *str)
{
    for (i = 0; str[j] != 0; j++) {
        if ((str[j] == '.' || str[j] == ':' || (
            str[j] >= '0' && str[j] <= '9'))) {
            tmp[i] = str[j];
            i++;
        }
    }
    tmp[i - 1] = '\0';
    return (tmp);
}

char *is_a_command_to_vrep(char *str)
{
    int i = 0;
    int j = 0;
    char *tmp = malloc(sizeof(char *) * 10000);

    if (tmp == NULL)
        return (NULL);
    for (; i != 3;) {
        if (str[j++] == ':')
            i++;
    }
    tmp = ret_tmp(i, j, tmp, str);
    return (tmp);
}
