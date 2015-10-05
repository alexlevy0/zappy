/*
** list.h for zappy in /home/levy_b/rendu/PSU_2014_zappy/server/includes
** 
** Made by LEVY Alexandre
** Login   <levy_b@epitech.net>
** 
** Started on  Sun Jul  5 03:02:04 2015 LEVY Alexandre
** Last update Sun Jul  5 03:02:18 2015 LEVY Alexandre
*/
#ifndef LIST_H_
# define LIST_H_

typedef struct s_list 	t_list;
typedef struct s_node	t_node;

#include "global.h"

struct 		s_node
{
	void			*data;
	struct s_node	*next;
	struct s_node	*prev;
};

struct 		s_list
{
	t_node			*first;
	t_node			*last;
	t_node			*cur;
	int				nb_node;
};

bool		list_init(t_list **list, void *data);
bool		put_in_list(t_list **list, void *data);
bool		del_node(t_list **list, t_node *node);
t_node		*new_node(void *data);
int			get_list_size(t_list *list);

#endif /* !_LIST_H_ */
