#ifndef INCLUDED_HTTP_TCPSERVER_WIN_H
#define INCLUDED_HTTP_TCPSERVER_WIN_H

#include <iostream>  
#include <string>   
#include <winsock2.h>  

#pragma comment(lib, "ws2_32.lib")

namespace http {

class TcpServer {
public:
    TcpServer(std::string ip, int port);  
    ~TcpServer();



private:
    std::string ip;
    int port;
    SOCKET m_socket;
    SOCKET m_new_socket;

    int startServer();

};

}  

#endif  