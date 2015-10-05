/*
** server.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:03:17 2015 LEVY Alexandre
** Last update Sun Jul  5 03:03:18 2015 LEVY Alexandre
*/
#ifndef SERVER_H_
# define SERVER_H_

typedef struct s_client	t_client;
typedef struct s_server t_server;
typedef struct s_buffer	t_buffer;

#include "map.h"
#include "player.h"
#include "cmd.h"
#include "incantation.h"

struct		s_client
{
	int			SOCKET;
	char		*ip;
	int			graphic;
	int			state;
	t_player	*player;
	t_client	*next;
};

struct		s_clientGRAPH
{
	int			SOCKET;
	char		*ip;
	int			graphic;
	t_player	*player;
	t_client	*next;
};

struct		s_buffer {
	char *buff;
	int full;
	struct s_buffer *next;
};

struct 	s_server
{
	int			port;
	int			timeAction;
	int			nbMaxPlayerTeam;
	t_map		map;
	t_list		*team;
	t_buffer	buff_node;
	t_client	*clients;
	int			SOCKET;
	t_cmd		cmd;
	t_Gcmd		Gcmd;
	t_list		*current_cmd;
	t_list		*incantation;
	t_list		*eggs;
};

void	remove_player(t_client *client, t_server *server);
int		launch_srv(t_server *server);
int		init(int port);
int	    srv(int SOCKET, t_server *server, struct timeval *tv);
int		init_select(fd_set *, int, t_client *);
int 	add_client(int SOCKET, t_server *server);
int		cmd_client(t_client *client, t_server *server, t_buffer *buffer_node, struct timeval *tv);
int 	send_client(int SOCKET, char *msg);

#endif /*!_SERVER_H_ */
