//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef FIRSTPROJECT_TSEVENUESESSION_H
#define FIRSTPROJECT_TSEVENUESESSION_H


#include "TCPSession.h"

class TSEVenueSession : public TCPSession{
public:
    TSEVenueSession(const std::string &name, VenueCallback *application);

    void connect() override;

    void send(const std::string &message) override;

    void disconnect() override;
};


#endif //FIRSTPROJECT_TSEVENUESESSION_H
