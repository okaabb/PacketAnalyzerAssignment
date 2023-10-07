#include <iostream>

#include "../headers/eCPRI.h"

using std::cout;
using std::endl;

eCPRI::eCPRI(string packet) {
    PacketRepresentation = packet;
    Type = "AEFE";
}

void eCPRI::ParsePacket() {
    DestinationAddress = PacketRepresentation.substr(16, 12);
    SourceAddress = PacketRepresentation.substr(28, 12);
    CRC = PacketRepresentation.substr(PacketRepresentation.length() - 8, 9);
    ProtocolVersion = PacketRepresentation[44];
    ConcatenationIndicator = PacketRepresentation[45];
    MessageType = PacketRepresentation.substr(46, 2);
    PayloadSize = PacketRepresentation.substr(48, 4);
    RTC_ID = PacketRepresentation.substr(52, 4);
    SequenceID = PacketRepresentation.substr(56, 4);
}

void eCPRI::PrintPacketInfo() {
    cout << PacketRepresentation << endl;
    cout << "CRC: " << CRC << endl;
    cout << "Concatenation Indicator: " << ConcatenationIndicator << endl;
    cout << "Destination Address: " << DestinationAddress << endl;
    cout << "Message Type: " << MessageType << endl;
    cout << "Payload Size: " << PayloadSize << endl;
    cout << "Protocol Version: " << ProtocolVersion << endl;
    cout << "RTC ID: " << RTC_ID << endl;
    cout << "Sequence ID: " << SequenceID << endl;
    cout << "Source Address: " << SourceAddress << endl;
    cout << "Type: " << Type << endl;
}