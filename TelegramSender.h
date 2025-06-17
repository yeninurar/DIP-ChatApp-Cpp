#ifndef TELEGRAM_SENDER_H
#define TELEGRAM_SENDER_H

#include "IMessenger.h"
#include <iostream>

class TelegramSender : public IMessenger {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "[Telegram] Sending: " << message << std::endl;
    }
};

#endif
