#include <iostream>
#include <string>

#include "headers/Packet.h"
#include "headers/eCPRI.h"
#include "headers/ethernet.h"

using namespace std;

int main() {
    freopen("input_packets.txt", "r", stdin);
    freopen("output_packets.txt", "w", stdout);

    string packet;
    int packetNumber = 0;
    while (getline(cin, packet)) {
        string type = packet.substr(40, 4);
        cout << "Packet # " << packetNumber++ << ":" << endl;

        if (type == "AEFE") { // e-CPRI
            eCPRI eCpri = eCPRI(packet);
            eCpri.ParsePacket();
            eCpri.PrintPacketInfo();
        } else if (type == "88F7") { // ethernet
            ethernet ethernet1 = ethernet(packet);
            ethernet1.ParsePacket();
            ethernet1.PrintPacketInfo();
        } else { // invalid type
            cout << "Invalid Packet Type";
        }

        cout << endl
             << "*******************************************"
             << "*******************************************"
             << "*******************************************"
             << "*******************************************"
             << "*******************************************"
             << "***************"
             << endl << endl;
    }
    return 0;
}
