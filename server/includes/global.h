/*
** global.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:01:40 2015 LEVY Alexandre
** Last update Sun Jul  5 03:01:54 2015 LEVY Alexandre
*/
#ifndef GLOBAL_H_
# define GLOBAL_H_
#define _GNU_SOURCE

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <time.h>
# include <errno.h>
# include <signal.h>
# include <fcntl.h>
# include <unistd.h>
# include <netdb.h>
# include <sys/select.h>
# include <sys/time.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>

# include "incantation.h"
# include "define.h"
# include "list.h"
# include "player.h"
# include "cmd.h"
# include "server.h"
# include "sound.h"



void	display_map(t_server *server);
void    display_cmd_statck(t_player *player);
void    display_current_cmd(t_server *server);
int     init_map_parse(t_server *server, int ac, char **av);
int		init_time_parse(t_server *server, int ac, char **av);
int		init_nbPlayerMax(t_server *server, int ac, char **av);
int 	find_opt(char *opt, int ac, char **av);
int		init_server(t_server *server, int ac, char **av);
void    exit_message(char *);
void    x_malloc(void *, int, char *);
char    *get_next_line(const int fd);
char	*my_strcat(char *s1, char *s2);

#endif /* !_GLOBAL_H_ */
