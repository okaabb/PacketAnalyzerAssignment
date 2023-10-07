#ifndef CODE_eCPRI_H
#define CODE_eCPRI_H

#include <string>

#include "Packet.h"

using namespace std;

class eCPRI : public Packet {
protected:
    string ConcatenationIndicator;
    string MessageType;
    string PayloadSize;
    string ProtocolVersion;
    string RTC_ID;
    string SequenceID;

public:
    eCPRI(string packet);

    void ParsePacket();

    void PrintPacketInfo();
};

#endif CODE_eCPRI_H