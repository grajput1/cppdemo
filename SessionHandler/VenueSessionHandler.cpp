//
// Created by Ganesh Rajput on 04-07-2018.
//

#include "VenueSessionHandler.h"

VenueSessionHandler::VenueSessionHandler(const std::string& sessionName, VenueCallback* application)
        :session(sessionName, application) {
}

void VenueSessionHandler::startSession() {
    if(!session.isConnected())
        session.connect();
}

void VenueSessionHandler::stopSession() {
    if(session.isConnected())
        session.disconnect();
}

void VenueSessionHandler::sendToSession(const std::string& sessionName, const std::string& message) {
    if(session.getName() == sessionName)
        session.send(message);
}


