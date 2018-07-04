//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef SESSIONHANDLER_TSEVENUEMESSAGE_H
#define SESSIONHANDLER_TSEVENUEMESSAGE_H


#include "VenueMessage.h"

class TSEVenueMessage : public VenueMessage<int> {
public:
    int encodeMessage(const std::string &message) override;

    std::string decodeMessage(const int &message) override;
};


#endif //SESSIONHANDLER_TSEVENUEMESSAGE_H
