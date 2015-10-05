/*
** texture.c for zappy in /home/fromen_l/rendu/PSU_2014_zappy/gfx_client
** 
** Made by Loïc Froment
** Login   <fromen_l@epitech.net>
** 
** Started on  Mon Jun 29 16:26:18 2015 Loïc Froment
** Last update Mon Jun 29 16:53:48 2015 Loïc Froment
*/

#include "map.h"

SDL_Texture	*LoadTexture(SDL_Renderer *rend, char *text_path)
{
  SDL_Texture	texture;
  SDL_Surface	surface;

  texture = NULL;
  surface = SDL_LoadBMP("./textures/case.bmp");
  if (surface == NULL)
    printf("Error loading texture\n");
  else
    {
      texture = SDL_CreateTextureFromSurface(rend, surface);
      if (texture == NULL)
	printf("Error loading texture\n");
    }
  SDL_FreeSurface(surface);
  return (texture);
}



