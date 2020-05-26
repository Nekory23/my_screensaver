/*
** EPITECH PROJECT, 2019
** my_screensaver
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>

int error_handling(int ac);
int my_atoi_s(char *str);
void help_display(void);
int check_animation(char **av);
void animation_description(void);
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
void screensaver(int anim_nbr);
sfColor my_fromrgb(sfUint8 red, sfUint8 green, sfUint8 blue, sfUint8 alpha);

typedef struct framebuffer {
    int width;
    int height;
    sfUint8 *pixels;
} framebuffer_t;

void my_put_pixel(framebuffer_t *buffer, unsigned int x,
                   unsigned int y, sfColor color);
void draw_white_stars(framebuffer_t *buffer);
void draw_random_color_dots(framebuffer_t *buffer);
void shooting_stars(framebuffer_t *buffer);
void random_color_stripes(framebuffer_t *buffer);
void draw_stripes(framebuffer_t *buffer);

#define INVALID_ARG "./my_screensaver: bad arguments: 0 given but 1 is required\n"
#define INVALID_ARG2 "retry with -h\n"
#define ERROR_TOOMNYARG "too many arguments\n"
#define INVALID_FLAG "invalid flag, retry with -h\n"
#define ERROR_NBR "arg must be between 1 and MAX_ID (see MAX_ID with '-h')\n"

#endif
