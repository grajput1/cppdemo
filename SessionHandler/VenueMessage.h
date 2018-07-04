//
// Created by Ganesh Rajput on 04-07-2018.
//

#ifndef FIRSTPROJECT_VENUEMESSAGE_H
#define FIRSTPROJECT_VENUEMESSAGE_H


#include <string>
#include <sstream>

template<class T>
class VenueMessage {
public:
    virtual T encodeMessage(const std::string& message) = 0;
    virtual std::string decodeMessage(const T& message) = 0;
};

#endif //FIRSTPROJECT_VENUEMESSAGE_H
