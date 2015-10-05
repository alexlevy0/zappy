##
## Makefile for zappy in /home/levy_b/rendu/PSU_2014_zappy/server
## 
## Made by LEVY Alexandre
## Login   <levy_b@epitech.net>
## 
## Started on  Sun Jul  5 03:04:05 2015 LEVY Alexandre
## Last update Sun Jul  5 13:43:51 2015 Axel BOURSET
##
SRC		= src/kernel/main.c \
		  src/kernel/debug/show_map.c \
		  src/kernel/debug/display.c \
		  src/kernel/server/init_server.c \
		  src/kernel/server/init_time_parse.c \
		  src/kernel/network/network.c \
		  src/kernel/network/client.c \
          src/kernel/network/init.c \
          src/kernel/cmd/avance.c \
          src/kernel/cmd/broadcast.c \
          src/kernel/cmd/cmd_getter.c \
          src/kernel/cmd/connect_nbr.c \
          src/kernel/cmd/droite.c \
          src/kernel/cmd/exec.c \
          src/kernel/cmd/expulse.c \
          src/kernel/cmd/time_cmd.c \
          src/kernel/cmd/fork.c \
          src/kernel/cmd/gauche.c \
          src/kernel/cmd/incantation.c \
          src/kernel/cmd/init_cmd.c \
          src/kernel/cmd/inventaire.c \
          src/kernel/cmd/pose.c \
          src/kernel/cmd/prend.c \
          src/kernel/cmd/voir.c \
          src/kernel/cmd/time_diff.c \
          src/kernel/cmd/eggs.c \
          src/kernel/cmd/food.c \
          src/kernel/cmd_graph/graph_cmd.c \
          src/kernel/cmd_graph/init_cmd_graph.c \
          src/kernel/cmd_graph/eight_player_inventaire.c \
          src/kernel/cmd_graph/eightten_eggs_eclot.c \
          src/kernel/cmd_graph/five_player_connection.c \
          src/kernel/cmd_graph/fourTeamName.c \
          src/kernel/cmd_graph/nine_player_expulse.c \
          src/kernel/cmd_graph/nineteen_eggs_connect.c \
          src/kernel/cmd_graph/oneSizeMap.c \
          src/kernel/cmd_graph/prendRessourceGRAPHIC.c \
          src/kernel/cmd_graph/jetteGRAPHIC.c \
          src/kernel/cmd_graph/incantationGRAPHIC.c \
          src/kernel/cmd_graph/seven_player_level.c \
          src/kernel/cmd_graph/seventeen_eggs_on_cell.c \
          src/kernel/cmd_graph/sixteen_player_dead.c \
          src/kernel/cmd_graph/ten_player_broadcast.c \
          src/kernel/cmd_graph/thirteen_player_pond.c \
          src/kernel/cmd_graph/treeMapContent.c \
          src/kernel/cmd_graph/sixPlayerPosition.c \
          src/kernel/cmd_graph/twenty_eggs_hungrydead.c \
          src/kernel/cmd_graph/twentyfive_unknow_commande.c \
          src/kernel/cmd_graph/twentyfour_server_message.c \
          src/kernel/cmd_graph/twentyone_send_time.c \
          src/kernel/cmd_graph/twentysix_bad_param.c \
          src/kernel/cmd_graph/twentythree_end_game.c \
          src/kernel/cmd_graph/twentytwo_set_time.c \
          src/kernel/cmd_graph/twoCaseContentCount.c \
		  src/common/list/init_list.c \
		  src/common/list/del_node.c \
		  src/common/list/new_node.c \
		  src/common/list/put_node.c \
		  src/common/list/list_size.c \
		  src/common/utils/utils.c \
		  src/common/utils/get_next_line.c \
		  src/common/utils/complement.c \
		  src/common/time/time.c \
		  src/common/sound/broaddiag.c \
		  src/common/sound/broaddir.c \
		  src/common/sound/broadtils.c \
		  src/common/sound/closer.c \
		  src/entity/team/team.c \
		  src/entity/team/team_getter.c \
		  src/entity/player/player.c \
		  src/entity/player/player_deletter.c \
		  src/entity/player/remove_player.c \
		  src/entity/map/map.c \
		  src/entity/map/map_setter.c \
		  src/entity/map/map_deletter.c \
		  src/entity/map/random.c \
		  src/entity/stone/stone.c \
		  src/entity/stone/stone_getter.c \


RM		= rm -f

CC		= gcc -g -Wall -Werror -Wextra -o3

NAME		= zappy_server

OBJ		= $(SRC:.c=.o)

CFLAGS		= -I./includes

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
	@echo "  _____   _    ____  ______   __                               "
	@echo " |__  /  / \\  |  _ \\|  _ \\ \\ / /  ___  ___ _ ____   _____ _ __ "
	@echo "   / /  / _ \\ | |_) | |_) \\ V /  / __|/ _ \\ '__\\ \\ / / _ \\ '__|"
	@echo "  / /_ / ___ \\|  __/|  __/ | |   \\__ \\  __/ |   \\ V /  __/ |   "
	@echo " /____/_/   \\_\\_|   |_|    |_|   |___/\\___|_|    \\_/ \\___|_|   "
	@echo "                                                               "
	@echo "*******               Server Ready !"
	@echo "*****"
	@echo "***"
	@echo "**"
	@echo "*"

info:
	@echo "  _____   _    ____  ______   __                               "
	@echo " |__  /  / \\  |  _ \\|  _ \\ \\ / /  ___  ___ _ ____   _____ _ __ "
	@echo "   / /  / _ \\ | |_) | |_) \\ V /  / __|/ _ \\ '__\\ \\ / / _ \\ '__|"
	@echo "  / /_ / ___ \\|  __/|  __/ | |   \\__ \\  __/ |   \\ V /  __/ |   "
	@echo " /____/_/   \\_\\_|   |_|    |_|   |___/\\___|_|    \\_/ \\___|_|   "
	@echo "                                                               "
	@echo "						by Levy_b Bourse_a Bousca_a"
	@find . -type f | grep ".c" | xargs wc -l

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

