/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** error_handling
*/

#include "my.h"

int check_animation(char **av)
{
    int id;
    int max_id = 5;
    int i = 0;

    while (av[1][i] != '\0') {
        if (av[1][i] >= '0' && av[1][i] <= '9')
            i++;
        else {
            write(2, ERROR_NBR, my_strlen(ERROR_NBR));
            return (84);
        }
    }
    id = my_atoi_s(av[1]);
    if (id <= 0 || id > max_id) {
        write(2, ERROR_NBR, my_strlen(ERROR_NBR));
        return (84);
    }
    return (0);
}

int error_handling(int ac)
{
    if (ac < 2) {
        write(2, INVALID_ARG, my_strlen(INVALID_ARG));
        write(2, INVALID_ARG2, my_strlen(INVALID_ARG2));
        return (84);
    }
    if (ac > 2) {
        write(2, ERROR_TOOMNYARG, my_strlen(ERROR_TOOMNYARG));
        return (84);
    }
    return (0);
}
