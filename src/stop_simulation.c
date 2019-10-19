/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** stop_simulation
*/

#include "n4s.h"

int is_stop_simulation(char *words)
{
    if (strcmp("Track Cleared", words) == 0) {
        free(words);
        send_command_to_vrep("STOP_SIMULATION\n");
        return (1);
    }
    return (0);
}

int stop_simulation(char *str)
{
    int i = my_strlen(str) - 1;
    int j = 0;
    char *words = malloc(sizeof(char *) * my_strlen(str));

    if (words == NULL)
        return (-1);
    for (; str[i] != ':' && str[i] != 0; i--);
    i--;
    for (; str[i] != ':' && str[i] != 0; i--);
    i++;
    j = 0;
    for (; str[i] != ':' && str[i] != 0; j++, i++)
        words[j] = str[i];
    words[j] = 0;
    if (is_stop_simulation(words) != 0) {
        return (1);
    }
    free(words);
    return (0);
}
