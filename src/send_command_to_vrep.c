/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** send_command_to_vrep
*/

#include "n4s.h"

int send_command_to_vrep(char *str)
{
    int ret = 0;

    my_putstr(str);
    str = get_car_input(0);
    ret = stop_simulation(str);
    return (ret);
}
