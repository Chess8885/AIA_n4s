/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** start_simulation
*/

#include "n4s.h"

int start_simulation(void)
{
    char **double_array = 0;
    char *str = 0;
    float nb = 0.0;

    send_command_to_vrep("START_SIMULATION\n");
    if (loop_simulation(double_array, str, nb) != 0) {
        return (1);
    }
    return (0);
}
