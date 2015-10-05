/*
** team.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:03:41 2015 LEVY Alexandre
** Last update Sun Jul  5 03:03:43 2015 LEVY Alexandre
*/
#ifndef TEAM_H_
# define TEAM_H_

typedef struct s_team t_team;

#include "server.h"
#include "list.h"

struct 	s_team
{
	char		*name;
	int			nb_player;
	int			max_connec;
	t_list		*player;
	t_list		*team_eggs;
};

t_team		*add_team(char *name, t_server *serv);
t_team		*get_team_by_name(t_server *server, char *team_name);

#endif /* !_TEAM_H_ */
