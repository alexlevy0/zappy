/*
** stone.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:03:46 2015 LEVY Alexandre
** Last update Sun Jul  5 03:03:48 2015 LEVY Alexandre
*/
#ifndef STONE_H_
# define STONE_H_

typedef		enum
  {
    LINEMATE = 0,
    DERAUMERE,
    SIBUR,
    MENDIANE,
    PHIRAS,
    THYSTAME
  }		e_stone;

typedef struct 	s_stone
{
	e_stone		stone;
	int			nb;
}				t_stone;

void		add_stone_in_list(t_list **list, t_stone *stone);
bool        set_random_stones(t_map *map);
t_stone     *get_stone_by_name(t_cell *cell, e_stone type);
t_stone     *new_stone(int nb, e_stone type);
char		*stone_to_string(e_stone stone);
void		display_stone_list(t_list *list, char **buff);

#endif /*!_STONE_H_ */
