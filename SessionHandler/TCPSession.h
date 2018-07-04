//
// Created by Ganesh Rajput on 25-06-2018.
//

#ifndef FIRSTPROJECT_TCPSESSION_H
#define FIRSTPROJECT_TCPSESSION_H


#include "VenueSession.h"

class TCPSession : public VenueSession {
public:
    TCPSession(const std::string &name,VenueCallback* application);

    virtual void connect();

    virtual void disconnect();

    void send(const char *message) override;

    virtual ~TCPSession();
};


#endif //FIRSTPROJECT_TCPSESSION_H
