#ifndef CODE_ETHERNET_H
#define CODE_ETHERNET_H

#include <string>

#include "Packet.h"

class ethernet : Packet {
public:
    ethernet(string packet);

    void ParsePacket();

    void PrintPacketInfo();
};


#endif //CODE_ETHERNET_H
