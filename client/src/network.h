//
// Created by levy_b on 6/16/15.
//

#ifndef     PSU_2014_ZAPPY_NETWORK_H
#define     PSU_2014_ZAPPY_NETWORK_H

#include <sys/time.h> /* select */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h> /* struc protoent */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> /* close() */
#include <errno.h>

#define SOCKET_ERROR -1

int		init(char *host, int port);
int	    post_select(fd_set *, int);


#endif //PSU_2014_ZAPPY_NETWORK_H

