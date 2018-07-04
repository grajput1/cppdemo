//
// Created by Ganesh Rajput on 04-07-2018.
//

#include "TSEVenueMessage.h"

int TSEVenueMessage::encodeMessage(const std::string &message) {
    return atoi(message.c_str());
}

std::string TSEVenueMessage::decodeMessage(const int &message) {
    char buf[10];
    sprintf(buf,"%d",message);
    return std::string(buf);
}
