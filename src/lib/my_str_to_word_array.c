/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** my_str_to_word_array
*/

#include "n4s.h"

char **my_str_to_word_array(char *str, char delim)
{
    char **darray = malloc(sizeof(char **) * my_strlen(str));
    int	i = 0;
    int	j = 0;
    int	k = 0;

    if (darray == NULL)
        return (NULL);
    for (; str[i] != 0; j++) {
        k = 0;
        darray[j] = malloc(sizeof(char *) * my_strlen(str));
        if (darray[j] == NULL)
            return (NULL);
        for (; str[i] == delim && str[i] != 0; i++);
        for (; str[i] != delim && str[i] != 0; i++, k++)
            darray[j][k] = str[i];
        darray[j][k] = 0;
        for (; str[i] == delim && str[i] != 0; i++);
    }
    darray[j] = NULL;
    return (darray);
}
