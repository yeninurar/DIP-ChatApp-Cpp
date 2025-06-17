#ifndef QUICK_TALK_STRATEGY_H
#define QUICK_TALK_STRATEGY_H

#include "IMessenger.h"
#include <memory>
#include <iostream>

class QuickTalkWithStrategy {
private:
    std::shared_ptr<IMessenger> messenger;
public:
    void setMessenger(std::shared_ptr<IMessenger> msg) {
        messenger = msg;
    }

    void send(const std::string& message) {
        if (messenger)
            messenger->sendMessage(message);
        else
            std::cout << "No messenger set!\n";
    }
};

#endif
