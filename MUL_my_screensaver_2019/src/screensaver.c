/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** screensaver
*/

#include "my.h"

void get_anim_id(int anim_id, framebuffer_t *buffer)
{
    switch (anim_id) {
    case 1 : draw_white_stars(buffer);
        break;
    case 2 : draw_random_color_dots(buffer);
        break;
    case 3 : shooting_stars(buffer);
        break;
    case 4 : random_color_stripes(buffer);
        break;
    case 5 : draw_stripes(buffer);
        break;
    }
}

framebuffer_t *create_framebuffer(unsigned int x, unsigned int y)
{
    unsigned int i;
    unsigned int temp;
    framebuffer_t *buffer;
    sfUint8 *pixels;

    buffer = malloc(sizeof(*buffer));
    buffer->width = x;
    buffer->height = y;
    temp = x * y * 4;
    pixels = malloc(sizeof(*pixels) * temp);
    buffer->pixels = pixels;
    for (i = 0; i < temp; i += 4) {
        buffer->pixels[i] = 0;
        buffer->pixels[i + 1] = 0;
        buffer->pixels[i + 2] = 0;
        buffer->pixels[i + 3] = 255;
    }
    return (buffer);
}

void screensaver(int anim_nbr)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "screensaver",
                                                   sfResize | sfClose, NULL);
    sfEvent event;
    sfTexture *texture = sfTexture_create(1920, 1080);
    sfSprite *sprite = sfSprite_create();
    framebuffer_t *buffer = create_framebuffer(1920, 1080);

    while (sfRenderWindow_isOpen(window)) {
        sfTexture_updateFromPixels(texture, buffer->pixels, 1920, 1080, 0, 0);
        sfSprite_setTexture(sprite, texture, sfTrue);
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        get_anim_id(anim_nbr, buffer);
    }
    sfRenderWindow_destroy(window);
}
