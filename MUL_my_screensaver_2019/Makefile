##
## EPITECH PROJECT, 2019
## my_screensaver
## File description:
## makefile
##

NAME	=	my_screensaver

SRC	=	src/main.c		\
		src/screensaver.c	\
		src/help_display.c	\
		src/error_handling.c	\
		src/my_atoi_s.c		\
		src/my_fromrgb.c	\
		src/animation.c		\
		src/my_put_pixels.c	\
		src/my_putchar.c	\
		src/my_strlen.c		\
		src/my_putstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS=	-I./include/ -l csfml-graphics

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
