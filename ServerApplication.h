//
// Created by dsklyadnev on 5/28/15.
//

#ifndef UNIBROKER_SERVERAPPLICATION_H
#define UNIBROKER_SERVERAPPLICATION_H

#include <Poco/Util/ServerApplication.h>

class ServerApplication
    : public Poco::Util::ServerApplication
{
public:
    ServerApplication();

    //void initialize(Poco::Util::Application & self) override;
    //void uninitialize() override;
    int main(const std::vector <std::string> & args) override;
};


#endif //UNIBROKER_SERVERAPPLICATION_H
