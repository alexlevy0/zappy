/*
** map.h for map.h in /home/fromen_l/rendu/PSU_2014_zappy/gfx_client
** 
** Made by Loïc Froment
** Login   <fromen_l@epitech.net>
** 
** Started on  Fri Jun 19 17:29:37 2015 Loïc Froment
** Last update Mon Jun 29 17:19:11 2015 Loïc Froment
*/

#ifndef MAP_H_
# define MAP_H_

#include <stdio.h>
#include "SDL.h"
#include "SDL_image.h"

#define W_HEIGHT	700
#define W_WIDTH		900

typedef struct s_case
{
  int	nou;
  int	lin;
  int	der;
  int	sib;
  int	men;
  int	phi;
  int	thy;
  
} t_case;

typedef struct s_win
{
  SDL_Window	*win;
  int		run;
  SDL_renderer	*ren;
  SDL_Texture	tex;
} t_win;

void	handle_keys(SDL_Event *, int *);
int	create_window(t_win *);
int	draw_map(int , int);


#endif /* MAP_H_ */
