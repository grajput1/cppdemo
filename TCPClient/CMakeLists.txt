cmake_minimum_required(VERSION 3.11)
project(TCPClient)

set(CMAKE_CXX_STANDARD 11)

add_executable(TCPClient client_main.cpp Socket.h Socket.cpp ClientSocket.cpp ClientSocket.h SocketException.h)
add_executable(TCPServer server_main.cpp Socket.h Socket.cpp ServerSocket.cpp ServerSocket.h)
