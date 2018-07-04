//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef SESSIONHANDLER_VENUESESSIONHANDLER_H
#define SESSIONHANDLER_VENUESESSIONHANDLER_H


#include "TSEVenueMessage.h"
#include "TSEVenueSession.h"

class VenueSessionHandler {
public:
    VenueSessionHandler(const std::string& sessionName, VenueCallback* application);

    void startSession();
    void stopSession();
    void sendToSession(const std::string& sessionName, const std::string& message);

private:
    TSEVenueSession session;
};


#endif //SESSIONHANDLER_VENUESESSIONHANDLER_H
