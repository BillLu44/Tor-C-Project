#ifndef TORALIZE_H
#define TORALIZE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PROXY "127.0.0.1"
#define PROXYPORT 9050

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

typedef struct proxyRequest{
    int8 vn;
    int8 cd;
    int16 dstport;
    int32 dstip;
    unsigned char userID[8];
}Req;

typedef struct proxyResponse{
    int8 vn;
    int8 cd;
    int16 dstport;
    int16 dstip;
}Res;

#endif