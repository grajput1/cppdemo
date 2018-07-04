//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef SESSIONHANDLER_VENUECALLBACK_H
#define SESSIONHANDLER_VENUECALLBACK_H


#include "VenueSession.h"

class VenueSession;

class VenueCallback {
    public:
    virtual void onConnect(VenueSession& session) = 0;
    virtual void onDisconnect(VenueSession& session) = 0;
    virtual void fromApp(VenueSession& session, std::string message) = 0;
    virtual void toApp(VenueSession& session, std::string message) = 0;
};


#endif //SESSIONHANDLER_VENUECALLBACK_H
