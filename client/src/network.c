#include "network.h"

int		init(char *host, int port)
{
    printf("init.....\n");
    int                 SOCKET;
    struct sockaddr_in	sin = {0};
    struct protoent	    *pe;

    pe = getprotobyname("TCP");
    if (pe == NULL){
        printf("getprotobyname()\n");
        return (EXIT_FAILURE);
    }
    SOCKET = socket(AF_INET, SOCK_STREAM, pe->p_proto);
    if (SOCKET = INVALID_SOCKET)
    {
        perror("socket()");
        exit(errno);
    }
    sin.sin_family = AF_INET;
    sin.sin_port = htons(port);
    if (!(sin.sin_addr.s_addr = inet_addr(host)))
    {
        perror("Adresse incorrecte\n");
        exit(errno);
    }
    if (connect(SOCKET, (struct sockaddr *)&sin, sizeof(sin)) == SOCKET_ERROR)
    {
        perror("conect()\n");
        exit(errno);
    }
    printf("Server connecté !\n");
    return (SOCKET);
}
