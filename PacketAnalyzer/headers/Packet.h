#ifndef CODE_PACKET_H
#define CODE_PACKET_H

#include <string>

using namespace std;

class Packet {
protected:
    string PacketRepresentation;
    string CRC;
    string DestinationAddress;
    string SourceAddress;
    string Type;

    virtual void ParsePacket() = 0;

    virtual void PrintPacketInfo() = 0;
};


#endif //CODE_PACKET_H
