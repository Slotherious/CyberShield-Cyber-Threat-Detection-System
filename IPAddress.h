#ifndef IPADDRESS_H
#define IPADDRESS_H
#include <iostream>
#include <string>
using namespace std;


class IPAddress {
private:
    string IP;
    int IPSuspeciousCount;

public:
    IPAddress();
    IPAddress(string ip, int suspiciousCount);
    //getters funcs
    string getIP() {
        return IP;
    } //get ip
    int getIPSuspiciousCount() {
        return IPSuspeciousCount;
    } //get sus count

    string displayIP();
    void increaseSuspeciousCount();
};
#endif