/*
** cmd.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:01:14 2015 LEVY Alexandre
** Last update Sun Jul  5 21:19:48 2015 Axel BOURSET
*/
#ifndef CMD_H_
# define CMD_H_

typedef struct s_cmd 	t_cmd;
typedef struct s_func	t_func;

typedef struct s_Gfunc	t_Gfunc;
typedef struct s_Gcmd	t_Gcmd;

# include "global.h"
# include "server.h"
# include "stone.h"


struct 		s_func
{
	char	*name;
	int		time;
	int		(*action)(t_server *, t_player *, char *);
	char 	*arg;
};

struct 		s_cmd
{
	t_func	func[NB_FUNC];
};

struct 		s_Gfunc
{
	char	*name;
	int		(*action)(t_server *, t_client *, char *, char *);
};

struct 		s_Gcmd
{
	t_Gfunc	func[NB_GFUNC];
};

void        add_cmd_stack(t_server *server, t_client *client, t_buffer *buff);
void        add_cmd_current(t_server *server, t_player *player, char *buff_node);
int     	get_min_time_cmd(t_server *server, struct timeval *tv);
t_func      *get_cmd_by_name(t_server *server, char *name);
void		init_cmd(t_server *server);
void		init_cmd_graph(t_server *server);
void        exec_cmd(t_server *server, struct timeval *delta, struct timeval *tv);
int         timeval_to_time(struct timeval *tv);
void        time_to_timeval(struct timeval *tv, int time);
struct timeval        	get_delta(struct timeval *tv);
void        time_diff(struct timeval *res, struct timeval *date1, struct timeval *date2);
void        timeval_sec_to_timeval(struct timeval *tv);
void       	cmd_delta(t_server *server, struct timeval *delta);
void		change_format_time(struct timeval *, int);
int		get_nb_stone_player(t_player *player, e_stone type);
int			avance(t_server *server, t_player *player, char *_);
int			droite(t_server *server, t_player *player, char *);
int			gauche(t_server *server, t_player *player, char *_);
int			voir(t_server *server, t_player *player, char *);
int			inventaire(t_server *server, t_player *player, char *); //TODO
int			prend(t_server *server, t_player *player, char *);
int			pose(t_server *server, t_player *player, char *);
int			expulse(t_server *server, t_player *player, char *); //TODO k
int			broadcast_text(t_server *server, t_player *player, char *); //TODO k
int			is_diag(t_server *server, t_player *client, t_player *current);
int			diag_dir(t_player *current, int diag);
int			diag_dir_axe(t_player *current, int diag);
int			ret_closer(t_server *server, t_player *client, t_player *current);
int			incantation(t_server *server, t_player *player, char *); //TODO /!\ k
int			connect_nbr(t_server *server, t_player *player, char *);
int			fork_player(t_server *server, t_player *player, char *);
int			eggs_eclose(t_server *server, t_player *player, char *);
int			eat_food(t_server *server, t_player *player, char *);
// GRAPHIC
t_Gfunc     	*get_Gfunc_by_name(t_server *server, char *name);
int             one_size_map(t_server *, t_client *, char *, char *);
int             two_case_content(t_server *, t_client *, char *, char *);
int             three_map_content(t_server *, t_client *, char *, char *);
int             four_team_name(t_server *, t_client *, char *, char *);
int             six_player_position(t_server *, t_client *, char *, char *);
int             seven_player_level(t_server *, t_client *, char *, char *);
int             eight_player_inventaire(t_server *, t_client *, char *, char *);
int             twentyone_send_time(t_server *, t_client *, char *, char *);
int             twentytwo_set_time(t_server *, t_client *, char *, char *);
int				twentysix_bad_param(t_server *, t_client *);
int				five_player_connection(t_server *server, t_player *player);
void        	commande_graph(t_server *, t_client *, t_buffer *);
int             nine_player_expulse(t_server *, t_player *);
int             ten_player_broadcast(t_server *, t_player *, char *);
int             thirteen_player_pond(t_server *, t_player *);
int             sixteen_player_dead(t_server *, t_player *);
int             seventeen_eggs_on_cell(t_server *, t_player *, t_player*);
int             eightten_eggs_eclot(t_server *, t_player *);
int             nineteen_eggs_connect(t_server *, t_player *);
int             twenty_eggs_hungrydead(t_server *, t_egg *);
int             twentythree_end_game(t_server *, t_team *);
int             twentyfour_server_message(t_server *, char *);
int             twentyfive_unknow_commande(t_server *, t_client *);
int             prendRessourceGRAPHIC(t_server *, t_player *, int);
int				six_player_all_send(t_server *, t_player *, char *);
int				startIncantGRAPHIC(t_server *server, t_player *player, int L);
int				five_player_connection_all(t_server *, t_client *);
int				eggs_on_cell_all(t_server *, t_client *);
int				jetteGRAPHIC(t_server *, t_player *, int);
int		        endIncantGRAPHIC(t_server *server, t_player *player, int R);
void            send_Gall(t_server *server, char *buff);
void		_change_direction(t_player *player, t_server *server);

#endif /* !_CMD_H_*/
