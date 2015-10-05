/*
** main.c for ginterface in /home/fromen_l/rendu/PSU_2014_zappy/gfx_client
** 
** Made by Loïc Froment
** Login   <fromen_l@epitech.net>
** 
** Started on  Fri Jun 19 16:53:05 2015 Loïc Froment
** Last update Mon Jun 29 17:35:24 2015 Loïc Froment
*/

#include "map.h"

void handle_keys(SDL_Event *e, int* run)
{
  if (e->key.keysym.sym == SDLK_ESCAPE)
    *run = 0;
  if (e->type == SDL_QUIT)
    *run = 0;
}

int	main(int ac, char **av)
{
  t_win	window;

  create_win(&window);
  //draw map here
  window_loop(&window);
  return (0);
}

int		create_win(t_win *window)
{ 
  SDL_Init(SDL_INIT_VIDEO);
  window->win = SDL_CreateWindow(
			    "Zappy",
			    SDL_WINDOWPOS_UNDEFINED,
			    SDL_WINDOWPOS_UNDEFINED,
			    W_WIDTH,
			    W_HEIGHT,
			    SDL_WINDOW_OPENGL
			    );
  if (window->win == NULL) {
    printf("Could not create window: %s\n", SDL_GetError());
    return (1);
  }
  return 0;
}

int	window_loop(t_win *window)
{
  SDL_Event	e;
  
  window->run = 1;
  window->ren = NULL;
  while (window->run == 1)
    while (SDL_PollEvent(&e))
      {
	handle_keys(&e, &window->run);
      }
  SDL_Quit();
}


