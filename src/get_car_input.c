/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** get_car_input
*/

#include "n4s.h"

int is_read(int r, int fd, char b[1])
{
    if ((r = read(fd, b, 1)) < 1)
        return (84);
    return (r);
}

char *is_malloc(char *l)
{
    if ((l = malloc(sizeof(char *) * 9999)) != NULL) {
        return (l);
    }
    return (NULL);
}

char *get_car_input(const int fd)
{
    static int i = 0;
    static int n = 0;
    static char b[1];
    static int r = 0;
    static char *l = 0;

    if ((i == 0 && (r = is_read(r, fd, b)) == 84) ||
        (n == 0 && (l = is_malloc(l)) == NULL))
        exit(84);
    for (; i != r; n++, i++) {
        if (b[i] == '\0' || b[i] == '\n') {
            l[n] = 0;
            n = 0;
            i++;
            return (l);
        }
        l[n] = b[i];
    }
    i = 0;
    get_car_input(fd);
    return (l);
}
