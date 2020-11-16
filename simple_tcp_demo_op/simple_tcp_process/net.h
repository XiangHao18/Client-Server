#ifndef _MAKEU_NET_H_
#define _MAKEU_NET_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<strings.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<errno.h>
#include<arpa/inet.h>
#include<pthread.h>
#include<signal.h>
#include<sys/wait.h>

#define SERV_PORT 5001
#define SERV_IP_ADDR "127.0.0.1"
#define BACKLOG 5
#define QUIT_STR "quit"

#endif