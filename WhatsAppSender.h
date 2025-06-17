#ifndef WHATSAPP_SENDER_H
#define WHATSAPP_SENDER_H

#include "IMessenger.h"
#include <iostream>

class WhatsAppSender : public IMessenger {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "[WhatsApp] Sending: " << message << std::endl;
    }
};

#endif
