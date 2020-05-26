/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** first animations
*/

#include "my.h"

void draw_random_color_dots(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    sfColor color = my_fromrgb(rand() % 255, rand() % 255, rand() % 255, 255);

    my_put_pixel(buffer, x, y, color);
}

void draw_white_stars(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    sfColor color = my_fromrgb(255, 255, 255, 255);

    my_put_pixel(buffer, x, y, color);
}

void shooting_stars(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int trail = rand() % 100;
    int chance = rand() % 100;
    int temp;
    sfColor color = my_fromrgb(255, 255, 255, 255);

    if (chance == 50) {
        temp = x;
        while (x != temp + trail) {
            my_put_pixel(buffer, x, y, color);
            x += 1;
            y += 1;
            draw_white_stars(buffer);
        }
    }
    draw_white_stars(buffer);
}

void random_color_stripes(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int trail = rand() % 300;
    int temp;
    sfColor color = my_fromrgb(rand() % 255, rand() % 255, rand() % 255, 255);

    temp = x;
    while (x != temp + trail) {
        my_put_pixel(buffer, x, y, color);
        x += 1;
        y += 1;
    }
}

void draw_stripes(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int trail = rand() % 300;
    int temp;
    int direction = rand() % 2;
    sfColor color = my_fromrgb(rand() % 255, rand() % 255, rand() % 255, 255);

    temp = x;
    while (x != temp + trail) {
        my_put_pixel(buffer, x, y, color);
        if (direction == 0)
            x = x + 1;
        else {
            x = x + 1;
            y = y + 1;
        }
    }
}
