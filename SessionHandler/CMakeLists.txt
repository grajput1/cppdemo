cmake_minimum_required(VERSION 3.11)
project(SessionHandler)

set(CMAKE_CXX_STANDARD 11)

add_executable(SessionHandler  main.cpp VenueSession.cpp VenueSession.h TCPSession.cpp TCPSession.h VenueMessage.h TSEVenueMessage.cpp TSEVenueMessage.h VenueCallback.h TSEVenueSession.cpp TSEVenueSession.h VenueSessionHandler.cpp VenueSessionHandler.h)