#include "../headers/ethernet.h"
#include <iostream>

using std::cout;
using std::endl;

ethernet::ethernet(string packet) {
    PacketRepresentation = packet;
    Type = "88F7";
}

void ethernet::ParsePacket() {
    DestinationAddress = PacketRepresentation.substr(16, 12);
    SourceAddress = PacketRepresentation.substr(28, 12);
    CRC = PacketRepresentation.substr(PacketRepresentation.length() - 8, 9);
}

void ethernet::PrintPacketInfo() {
    cout << PacketRepresentation << endl;
    cout << "CRC: " << CRC << endl;
    cout << "Destination Address: " << DestinationAddress << endl;
    cout << "Source Address: " << SourceAddress << endl;
    cout << "Type: " << Type << endl;
}