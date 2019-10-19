/*
** EPITECH PROJECT, 2019
** directions
** File description:
** directions
*/

#include "n4s.h"

int is_track_car(float l_dir, float r_dir, float dir, int i)
{
    if (dir >= 400 && dir < 600)
        i = wheels_dir(l_dir - r_dir, "0.2\n");
    if (dir >= 200 && dir < 400)
        i = wheels_dir(l_dir - r_dir, "0.3\n");
    if (dir > 0 && dir < 200)
        i = wheels_dir(l_dir - r_dir, "0.5\n");
    return (i);
}

int track_car(char **array, float dir)
{
    float l_dir = my_array_to_float(array[1]);
    float r_dir = my_array_to_float(array[31]);
    int	i = 0;

    if (dir >= 1500)
        i = wheels_dir(l_dir - r_dir, "0.005\n");
    if (dir >= 1000 && dir < 1500)
        i = wheels_dir(l_dir - r_dir, "0.05\n");
    if (dir >= 600 && dir < 1000)
        i = wheels_dir(l_dir - r_dir, "0.1\n");
    i = is_track_car(l_dir, r_dir, dir, i);
    return (i);
}
