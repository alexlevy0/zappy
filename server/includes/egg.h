/*
** egg.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:01:51 2015 LEVY Alexandre
** Last update Sun Jul  5 03:01:52 2015 LEVY Alexandre
*/
#ifndef	EGG_H_
# define EGG_H_

typedef struct s_egg t_egg;

#include "team.h"
#include "player.h"

struct 	s_egg
{
	int			id;
	int			x;
	int			y;
	t_player	*father;
	t_player	*him;
	t_team		*team;
};

#endif /* !_EGG_H_ */
