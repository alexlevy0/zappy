//
// Created by levy_b on 6/17/15.
//

#ifndef PSU_2014_ZAPPY_OPTION_H
#define PSU_2014_ZAPPY_OPTION_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "network.h"
#include "data.h"

typedef enum	e_bool
{
    FALSE,
    TRUE
}		t_bool;

int	    parse_data(int ac, char *av[], t_data*);
int     init_client(t_data*);
void    usage();

#endif //PSU_2014_ZAPPY_OPTION_H
