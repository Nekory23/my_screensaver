/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** my_atoi to get the anmation nbr
*/

#include "my.h"

int my_atoi_s(char *str)
{
    int anim_nbr = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        anim_nbr = anim_nbr * 10;
        anim_nbr = anim_nbr + (str[i] - '0');
    }
    return (anim_nbr);
}
