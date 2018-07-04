//
// Created by Ganesh Rajput on 25-06-2018.
//

#include <iostream>
#include <unistd.h>
#include "TCPSession.h"


TCPSession::TCPSession(const std::string &name,VenueCallback* application) : VenueSession(name, application) {}


TCPSession::~TCPSession() {

}

void TCPSession::connect() {
    connected();
}

void TCPSession::disconnect() {
    disconnected();
}

void TCPSession::send(const char *message) {
    std::cout<<getName()<<": sent "<<static_cast<int>(*message)<<std::endl;
}