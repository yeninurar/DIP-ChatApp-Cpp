#ifndef IMESSENGER_H
#define IMESSENGER_H

#include <string>

class IMessenger {
public:
    virtual void sendMessage(const std::string& message) = 0;
    virtual ~IMessenger() {}
};

#endif
