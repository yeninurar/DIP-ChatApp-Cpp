#ifndef QUICK_TALK_APP_DI_H
#define QUICK_TALK_APP_DI_H

#include "IMessenger.h"
#include <memory>

class QuickTalkApp {
private:
    std::shared_ptr<IMessenger> messenger;
public:
    QuickTalkApp(std::shared_ptr<IMessenger> msg) : messenger(msg) {}

    void send(const std::string& text) {
        messenger->sendMessage(text);
    }
};

#endif
