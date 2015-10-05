//
// Created by levy_b on 6/17/15.
//
#include "option.h"

void    usage()
{
    fprintf(stderr, "Usage : \n-n : nom d'equipe\n");
    fprintf(stderr, "-p port du serveur\n-h nom de la machine\n");
}

int     parse_data(int ac, char *av[], t_data *data)
{
    char *teamName;
    char *IP;
    int PORT;
    int opt;

    while ((opt = getopt(ac, av, "n:p:h:")) != -1) {
        switch (opt) {
            case 'n':
                if (optarg != NULL)
                    data->team = optarg;
                break;
            case 'p':
                if (optarg != NULL)
                {
                    PORT = atoi(optarg);
                    data->port = PORT;
                }
                break;
            case 'h':
                if (optarg != NULL)
                    data->host = optarg;
                break;
            default:
                usage();
                exit(EXIT_FAILURE);
        }
    }
    printf("Parsa DATA ok\n");

    exit(EXIT_SUCCESS);
}

int	    post_select(fd_set *fd_in, int SOCKET)
{
    if (FD_ISSET(SOCKET, fd_in))
    {
/*
        if (read_server(SOCKET))
        {
            close(SOCKET);
            printf("connection with the server lost\n");
        }
*/
    }
    return (EXIT_SUCCESS);
}

int     init_client(t_data* data)
{
    fd_set	fd_in;
    int		SOCKET;
    int     run;

    printf("init Client\n");

    if ((SOCKET = init(data->host, data->port)) < 0) {
        printf("Init Socket ERROR\n");
        return (EXIT_FAILURE);
    }
    while (run)
    {
        FD_ZERO(&fd_in);
        FD_SET(SOCKET, &fd_in);
        if (select(SOCKET + 1, &fd_in, NULL, NULL, NULL) == -1)
        {
            close(SOCKET);
            return (-1);
        }
       if (post_select(&fd_in, SOCKET))
            return (1);
    }
    return (0);
}