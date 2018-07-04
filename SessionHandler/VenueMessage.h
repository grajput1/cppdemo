//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef SESSIONHANDLER_VENUEMESSAGE_H
#define SESSIONHANDLER_VENUEMESSAGE_H


#include <string>
#include <sstream>

template<class T>
class VenueMessage {
public:
    virtual T encodeMessage(const std::string& message) = 0;
    virtual std::string decodeMessage(const T& message) = 0;
};

#endif //SESSIONHANDLER_VENUEMESSAGE_H
