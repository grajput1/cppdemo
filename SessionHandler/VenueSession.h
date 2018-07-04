//
// Created by Ganesh Rajput on 25-06-2018.
//

#ifndef FIRSTPROJECT_ABSTRACTSESSION_H
#define FIRSTPROJECT_ABSTRACTSESSION_H


#include <string>
#include "VenueMessage.h"
#include "VenueCallback.h"

class VenueSession {
public:
    VenueSession(const std::string &name, VenueCallback* application);

    virtual ~VenueSession();

    const std::string &getName() const;

    void setName(const std::string &name);

    bool isConnected();

    virtual void connect() = 0;

    virtual void disconnect() = 0;

    virtual void send(const char* message) = 0;

    virtual void send(const std::string& message) = 0;

protected:
    void connected();
    void disconnected();
    std::string name_;
    bool connected_;
    VenueCallback *app_;
};


#endif //FIRSTPROJECT_ABSTRACTSESSION_H
