#include "QuickTalkApp_DI.h"
#include "QuickTalkWithStrategy.h"
#include "MessengerFactory.h"

int main() {
    // DIP with manual injection
    auto whatsapp = std::make_shared<WhatsAppSender>();
    QuickTalkApp app1(whatsapp);
    app1.send("Hello from WhatsApp!");

    auto telegram = std::make_shared<TelegramSender>();
    QuickTalkApp app2(telegram);
    app2.send("Hello from Telegram!");

    // DIP with Factory Pattern
    auto fromFactory = MessengerFactory::createMessenger("telegram");
    QuickTalkApp app3(fromFactory);
    app3.send("Hello from Factory!");

    // DIP with Strategy Pattern
    QuickTalkWithStrategy appStrategy;
    appStrategy.setMessenger(std::make_shared<WhatsAppSender>());
    appStrategy.send("Using WhatsApp Strategy");

    appStrategy.setMessenger(std::make_shared<TelegramSender>());
    appStrategy.send("Now using Telegram Strategy");
}
