##
## Makefile for zappy in /home/fromen_l/rendu/PSU_2014_zappy/gfx_client
## 
## Made by Loïc Froment
## Login   <fromen_l@epitech.net>
## 
## Started on  Tue Jun 23 15:11:57 2015 Loïc Froment
## Last update Mon Jun 29 17:19:36 2015 Loïc Froment
##

NAME	= gfx_client

SRC	= main.c \
	  draw_map.c

OBJ     = $(SRC:.c=.o)

CC      = gcc

RM      = rm -f

CFLAGS  = -g -Wall -Wextra -Werror

LDFLAGS = -L./SDL2 -lSDL2 -lSDL2_image -lpng16 -Wl,-rpath=`pwd`/SDL2

IFLAGS  = -I./includes -I./SDL2

all:    $(NAME)

$(OBJ):
	$(CC) -c -o $(IFLAGS) $(LDFLAGS)

$(NAME):$(OBJ)
	$(CC) $(SRC) -o $(NAME) $(IFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
