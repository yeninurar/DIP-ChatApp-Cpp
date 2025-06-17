#ifndef MESSENGER_FACTORY_H
#define MESSENGER_FACTORY_H

#include "WhatsAppSender.h"
#include "TelegramSender.h"
#include <memory>

class MessengerFactory {
public:
    static std::shared_ptr<IMessenger> createMessenger(const std::string& type) {
        if (type == "whatsapp") return std::make_shared<WhatsAppSender>();
        if (type == "telegram") return std::make_shared<TelegramSender>();
        return nullptr;
    }
};

#endif
