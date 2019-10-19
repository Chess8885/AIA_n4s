/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** check_track_car
*/

#include "n4s.h"

int check_track_car(char **double_array, float nb)
{
    if ((car_forward(nb) != 0) ||
        (track_car(double_array, nb) != 0)) {
        return (1);
    }
    return (0);
}
