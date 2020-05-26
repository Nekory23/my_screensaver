/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** help display
*/

#include "my.h"

void help_display(void)
{
    my_putstr("animation rendering in a CSFML window.\n\n");
    my_putstr("USAGE\n");
    my_putstr("  ./my_screensaver [OPTIONS] animation_id\n");
    my_putstr("  animation_id     ID of the animation to process ");
    my_putstr("(MAX_ID = 5).\n\n");
    my_putstr("OPTIONS\n");
    my_putstr("  -d\t\tprint the description of all the animations ");
    my_putstr("and quit.\n");
    my_putstr("  -h\t\tprint the usage and quit.\n\n");
}

void animation_description(void)
{
    my_putstr("1: starry night\n");
    my_putstr("2: random color dots\n");
    my_putstr("3: starry night with an attempt to have shooting stars\n");
    my_putstr("4: random color stripes\n");
    my_putstr("5: random color stripes but with 2 directions\n");
}
