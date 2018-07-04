//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef SESSIONHANDLER_TSEVENUESESSION_H
#define SESSIONHANDLER_TSEVENUESESSION_H


#include "TCPSession.h"

class TSEVenueSession : public TCPSession{
public:
    TSEVenueSession(const std::string &name, VenueCallback *application);

    void connect() override;

    void send(const std::string &message) override;

    void disconnect() override;
};


#endif //SESSIONHANDLER_TSEVENUESESSION_H
