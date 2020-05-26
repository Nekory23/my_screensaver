/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    int anim_nbr;
    if (error_handling(ac) == 84)
        return (84);
    if (my_strlen(av[1]) == 2 && av[1][0] == '-') {
        if (av[1][1] == 'h') {
            help_display();
            return (0);
        }
        if (av[1][1] == 'd') {
            animation_description();
            return (0);
        } else {
            write(2, INVALID_FLAG, my_strlen(INVALID_FLAG));
            return (84);
        }
    }
    if (check_animation(av) == 84)
        return (84);
    anim_nbr = my_atoi_s(av[1]);
    screensaver(anim_nbr);
    return (0);
}
