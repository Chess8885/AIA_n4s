/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** main
*/

#include "n4s.h"

int main(void)
{
    if (start_simulation() == 1) {
        send_command_to_vrep("STOP_SIMULATION\n");
        return (0);
    }
    return (0);
}
