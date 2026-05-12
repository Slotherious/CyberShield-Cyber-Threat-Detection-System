#include <bits/stdc++.h>
#include "Alert.h"
using namespace std;

Alert::Alert() {
    message="";
    severity="low";
    username="";
    ipAddress="";
}

string Alert::getMessage() {
    return message;
}

string Alert::getSeverity() {
    return severity;
}

string Alert::getIP() {
    return ipAddress;
}

string Alert::getUsername() {
    return username;
}

void Alert::displayAlert() {
    cout<<"["<<severity<<"] "<<message<<" | User: "<<username<<" | IP: "<<ipAddress<<endl;
}
