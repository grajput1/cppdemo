//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef FIRSTPROJECT_VENUESESSIONHANDLER_H
#define FIRSTPROJECT_VENUESESSIONHANDLER_H


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


#endif //FIRSTPROJECT_VENUESESSIONHANDLER_H
