#include "toralize.h"

int main(int argc, char *argv[]){

    char *host;
    int port, s;
    struct sockadrr_in sock; 

    if (argc < 3){

        fprintf(stderr, "Usage: %s <host> <port> \n", argv[0]);

        return -1;
    }

    host = argv[1];
    port = atoi(argv[2]);
    s = socket(AF_INET, SOCK_STREAM, 0);

    if (s < 0){
        perror("socket");
        return -1;
    }

    sock.sin_family = AF_INET;
    sock.sin_port = htons(PROXYPORT);
    sock.sin_address= inet_addr(PROXY);

    connect(s, (struct sockaddr*)&sock, sizeof(sock));

    return 0;
}