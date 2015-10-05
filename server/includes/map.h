/*
** map.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:02:55 2015 LEVY Alexandre
** Last update Sun Jul  5 03:02:56 2015 LEVY Alexandre
*/
#ifndef MAP_H_
# define MAP_H_

typedef struct s_map 	t_map;
typedef struct s_cell	t_cell;

#include "team.h"
#include "egg.h"
#include "stone.h"
#include "player.h"

struct 	s_cell
{
	t_list		*player;
  	t_list		*stones;
	t_list		*eggs;
	int			food;
};

struct 			s_map
{
	t_cell		*cells;
	int			width;
	int			height;
};

void		init_map(t_map *map, int width, int height);

t_cell		*get_cell(t_map *map, int x, int y);

bool		set_food(t_map *map, int x, int y, int nb);
bool 		set_player(t_map *map, int x, int y, t_player *player);
bool 		set_stone(t_map *map, int x, int y, t_stone *stone);
bool 		set_egg(t_map *map, int x, int y, t_egg *egg);

bool        del_player_on_cell(t_cell *cell, t_player *player);

bool		set_random_food(t_map *map);

#endif /*!_MAP_H_ */
