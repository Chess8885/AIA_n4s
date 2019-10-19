/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** loop_simulation
*/

#include "n4s.h"

int loop_simulation(char **double_array, char *str, float nb)
{
    while (42) {
        my_putstr("GET_INFO_LIDAR\n");
        str = get_car_input(0);
        if (stop_simulation(str) != 0)
            return (1);
        str = is_a_command_to_vrep(str);
        double_array = my_str_to_word_array(str, ':');
        nb = my_array_to_float(double_array[15]);
        if (check_track_car(double_array, nb) == 1)
            return (1);
    }
    return (0);
}
