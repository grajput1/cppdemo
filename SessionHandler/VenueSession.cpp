//
// Created by Ganesh Rajput on 25-06-2018.
//

#include "VenueSession.h"

VenueSession::VenueSession(const std::string& venueName,VenueCallback* application)
        : name_(venueName),
          app_(application),
          connected_(false) {}

const std::string &VenueSession::getName() const {
    return name_;
}

void VenueSession::setName(const std::string &venueName) {
    this->name_ = venueName;
}

void VenueSession::connected() {
    connected_ = true;
}

void VenueSession::disconnected() {
    connected_ = false;
}

bool VenueSession::isConnected() {
    return connected_;
}
VenueSession::~VenueSession() {
}
