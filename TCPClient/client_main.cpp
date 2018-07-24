#include "ClientSocket.h"
#include "SocketException.h"
#include <iostream>
#include <string>

#define DATASIZELENGTH 5
int main ( int argc, char* argv[] )
{
    try
    {

        ClientSocket client_socket ( "localhost", 30000 );

        std::string reply;

        std::string message;
        int i = 0;
        while(1) {
                client_socket << "Test message.";
                client_socket >> reply;
                //Message Boundary Logic Start
                message = message + reply;
                int messageLength = atoi(message.substr(0,DATASIZELENGTH).c_str());
                while(message.length() >= messageLength)
                {
                    std::cout<<"Message Received:"<<message.substr(DATASIZELENGTH,messageLength)<<std::endl;
                    message= message.substr(messageLength + DATASIZELENGTH);
                    if(message.length() > 0)
                        messageLength = atoi(message.substr(0,DATASIZELENGTH).c_str());
                    else
                        messageLength = -1;
                }
                //Message Boundary Logic End
            //std::cout << "Message Received:" << reply << std::endl;;
        }
    }
    catch ( SocketException& e )
    {
        std::cout << "Exception was caught:" << e.what() << "\n";
    }

    return 0;
}