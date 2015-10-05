/*
** player.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:02:51 2015 LEVY Alexandre
** Last update Sun Jul  5 03:02:58 2015 LEVY Alexandre
*/
#ifndef	PLAYER_H_
# define PLAYER_H_

typedef struct s_player 	t_player;
typedef struct s_player_cmd	t_player_cmd;

#include "list.h"
#include "egg.h"
#include "team.h"
#include "server.h"
#include "cmd.h"

typedef enum
{
    TOP = 0,
    RIGHT,
    BOTTOM,
    LEFT
}				e_direction;

struct 			s_player
{
	int			id;
	int			level;
	int			x;
	int			y;
	int 		fd;
	t_list		*stone;
	int 		food;
	e_direction	direction;
	t_team		*team;
	t_player	*son;
	t_player	*father;
	t_list		*cmd_stack;
	int			state;
	int			graphic;
};

struct				s_player_cmd
{
	t_player		*player;
	t_func			*func;
	struct timeval 	time;
};

t_player		*player_init(t_team *team, t_server *server);
t_player		*new_player(char *team_name, t_server *server, int mode);
void			add_new_player(t_server *server, t_client *client, t_buffer *buff_node);
void        	players_del_stones(t_incantation *recipe, t_node *player);
t_client		*get_client_noG(t_server *server, int id);

#endif /*!_PLAYER_H_ */
