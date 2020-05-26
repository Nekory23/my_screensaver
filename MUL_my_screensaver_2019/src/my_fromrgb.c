/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** my_fromrgb
*/

#include "my.h"

sfColor my_fromrgb(sfUint8 red, sfUint8 green, sfUint8 blue, sfUint8 alpha)
{
    sfColor color;

    color.r = red;
    color.g = green;
    color.b = blue;
    color.a = alpha;
    return (color);
}
