/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** car_forward
*/

#include "n4s.h"

int is_quick_car_forward(float nb, int i)
{
    if (nb >= 1000 && nb < 1500) {
        i = send_command_to_vrep("CAR_FORWARD:0.5\n");
    }
    if (nb >= 1500 && nb < 2000) {
        i = send_command_to_vrep("CAR_FORWARD:0.8\n");
    }
    if (nb >= 2000) {
        i = send_command_to_vrep("CAR_FORWARD:1.0\n");
    }
    return (i);
}

int car_forward(float nb)
{
    int	i = 0;

    if (nb > 0 && nb < 400) {
        i = send_command_to_vrep("CAR_FORWARD:0.1\n");
    }
    if (nb >= 400 && nb < 600) {
        i = send_command_to_vrep("CAR_FORWARD:0.2\n");
    }
    if (nb >= 600 && nb < 1000) {
        i = send_command_to_vrep("CAR_FORWARD:0.4\n");
    }
    i = is_quick_car_forward(nb, i);
    return (i);
}
