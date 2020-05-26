/*
** EPITECH PROJECT, 2019
** my_scrensaver
** File description:
** my_put_pixel
*/

#include "my.h"

void my_put_pixel(framebuffer_t *buffer, unsigned int x,
                  unsigned int y, sfColor color)
{
    if (x < 1920 && y < 1080) {
        x *= 4;
        y *= 4;
        buffer -> pixels[buffer->width * y + x] = color.r;
        buffer -> pixels[buffer->width * y + x + 1] = color.g;
        buffer -> pixels[buffer->width * y + x + 2] = color.b;
        buffer -> pixels[buffer->width * y + x + 3] = color.a;
    }
}
