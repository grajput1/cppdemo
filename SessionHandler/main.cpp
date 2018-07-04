#include <iostream>
#include <string>
#include <unistd.h>
#include "VenueSessionHandler.h"

class Application : public VenueCallback
{
public:
    void onConnect(VenueSession &session) override {
        std::cout<<session.getName()<<": Application connected successfully"<<std::endl;
    }

    void onDisconnect(VenueSession &session) override {
        std::cout<<session.getName()<<": Application disconnected successfully"<<std::endl;
    }

    void fromApp(VenueSession &session, std::string message) override {
        std::cout<<session.getName()<<": Application received:"<< message <<std::endl;
    }

    void toApp(VenueSession &session, std::string message) override {
        std::cout<<session.getName()<<": Application sent:"<< message <<std::endl;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;

    auto *myapp = new Application();
    VenueSessionHandler *handler = new VenueSessionHandler("TSE", myapp);
    handler->startSession();
    handler->sendToSession("TSE", "25");
    handler->stopSession();


}