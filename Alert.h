#ifndef ALERT_H
#define ALERT_H

#include <bits/stdc++.h>
using namespace std;

class Alert {
private:
    string message;
    string severity;
    string username;
    string ipAddress;
public:
    //Alert counstruct
    Alert();
    Alert(string msg,string sev,string user,string ip):message(msg),severity(sev),username(user),ipAddress(ip){}

    // the getters to get the Alert Data
    string getMessage();
    string getSeverity();
    string getUsername();
    string getIP();

    void displayAlert(); //this is to show our alert
};

#endif