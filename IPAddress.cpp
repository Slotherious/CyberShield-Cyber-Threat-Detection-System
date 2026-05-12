#include"IPAddress.h"

IPAddress::IPAddress(string ip, int suspiciousCount) {
    IP = ip;
    IPSuspeciousCount = suspiciousCount;
}

IPAddress::IPAddress() {
    IP = "UNKNOWN";
    IPSuspeciousCount = 0;
}

void IPAddress::increaseSuspeciousCount() {
    IPSuspeciousCount += 1;
}

string IPAddress::displayIP() {
    cout << "#IP: " << IP << " - Alerts: " <<IPSuspeciousCount <<endl;
}