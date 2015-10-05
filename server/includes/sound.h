/*
** sound.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:03:13 2015 LEVY Alexandre
** Last update Sun Jul  5 03:03:20 2015 LEVY Alexandre
*/
#ifndef SOUND_H_
# define SOUND_H_

# include "server.h"
# include "player.h"

int	        is_diag(t_server *server, t_player *client, t_player *current);
int	        is_diag_rb(t_server *server, t_player *client, t_player *current);
int	        is_diag_rt(t_server *server, t_player *client, t_player *current);
int	        is_diag_lt(t_server *server, t_player *client, t_player *current);
int	        is_diag_lb(t_server *server, t_player *client, t_player *current);
int	        ret_closer(t_server *server, t_player *client, t_player *current);
int         is_more_r(t_server *server, t_player *client, t_player *current);
int         is_more_l(t_server *server, t_player *client, t_player *current);
int         is_more_t(t_server *server, t_player *client, t_player *current);
int         is_more_b(t_server *server, t_player *client, t_player *current);
int         diag_dir(t_player *current, int diag);
int		    diag_dir_axe(t_player *current, int diag);
int	        find_x_major(t_server *server, int x, int target, int mode);
int	        find_y(t_server *server, int y, int target, t_player *client);
int	        find_y_major(t_server *server, int y, int target, int mode);
int	        find_x(t_server *server, int x, int target, t_player *client);

#endif /*!_SOUND_H_ */
