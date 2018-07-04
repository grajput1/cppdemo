//
// Created by Ganesh Rajput on 04-07-2018.
//

#include <iostream>
#include <unistd.h>
#include <cstring>
#include "TSEVenueSession.h"
#include "TSEVenueMessage.h"

TSEVenueSession::TSEVenueSession(const std::string &name, VenueCallback *application) : TCPSession(name, application) {}

void TSEVenueSession::connect() {
    TCPSession::connect();
    std::cout<<getName()<<": connected"<<std::endl;
    sleep(5);
    app_->onConnect(*this);
}


void TSEVenueSession::send(const std::string &message) {

    TSEVenueMessage tseMessage;
    int intMessage = tseMessage.encodeMessage(message);
    char *buf = new char[sizeof(int)];
    memset(buf, 0x0, sizeof(int));
    memcpy(buf, &intMessage, sizeof(int));
    TCPSession::send(buf);
    app_->toApp(*this, message);

    sleep(10);

    std::string responseMessage = tseMessage.decodeMessage(50);
    app_->fromApp(*this, responseMessage);
}

void TSEVenueSession::disconnect() {
    TCPSession::disconnect();
    std::cout<<getName()<<": disconnected"<<std::endl;
    sleep(5);
    app_->onDisconnect(*this);
}
