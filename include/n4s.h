/*
** EPITECH PROJECT, 2019
** include n4s
** File description:
** include n4s
*/

#ifndef N4S_H_
#define N4S_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
char **my_str_to_word_array(char *str, char delim);
char *get_car_input(const int fd);
float my_array_to_float(char *str);
int start_simulation(void);
int loop_simulation(char **double_array, char *str, float nb);
char *is_a_command_to_vrep(char *str);
int send_command_to_vrep(char *str);
int track_car(char **tab, float dir);
int check_track_car(char **double_array, float nb);
int wheels_dir(float nb, char *value);
int car_forward(float mid);
int stop_simulation(char *str);

#endif

