//
// Created by Ganesh Rajput on 24-07-2018.
//

#include "ServerSocket.h"
#include "SocketException.h"
#include <string>
#include <cstring>

int main ( int argc, char* argv[] )
{
  std::cout << "running....\n";

  try
    {
      // Create the socket
      ServerSocket server ( 30000 );

      int counter = 0;
      while ( true )
	{

	  ServerSocket new_sock;
	  server.accept ( new_sock );

	  bool firstMessage = true;
	  try
	    {
	      while ( true )
		{
		  std::string data;
		  new_sock >> data;
		  std::cout<<"Message Received:" << data<< std::endl;
		  if(firstMessage) {
			  data = "I am Server. Say hello to Me!!!";
			  firstMessage = false;
		  }
		  else
		  {
			  data = "I am still looking for your Hello message. Dont be rude...";
			  firstMessage = true;
		  }
		  std::string dataLength;
		  data = std::to_string(++counter) + ":" + data;
		  dataLength = std::to_string(data.length());
		  while(dataLength.length() < 5)
		  	dataLength.append(" ");
		  new_sock << dataLength << data;
		}
	    }
	  catch ( SocketException& ) {}

	}
    }
  catch ( SocketException& e )
    {
      std::cout << "Exception was caught:" << e.what() << "\nExiting.\n";
    }

  return 0;
}