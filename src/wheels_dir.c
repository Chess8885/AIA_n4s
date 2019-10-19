/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** wheels_dir
*/

#include "n4s.h"

void print_wheels_dir(float nb, char *str)
{
    my_putstr("WHEELS_DIR:");
    if (nb < 0.0)
        my_putstr("-");
    my_putstr(str);
}

int wheels_dir(float nb, char *str)
{
    int ret = 0;

    print_wheels_dir(nb, str);
    str = get_car_input(0);
    ret = stop_simulation(str);
    return (ret);
}
