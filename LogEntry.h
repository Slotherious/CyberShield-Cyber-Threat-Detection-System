#ifndef CYBER_SHIELD_LOGENTRY_H
#define CYBER_SHIELD_LOGENTRY_H
#include <iostream>
#include <string>
using namespace std;

enum class ActionType {
    UNKNOWN,
    LOGIN,
    LOGOUT
};

enum class Status {
    UNKNOWN,
    SUCCESS,
    FAILED,
    BLOCKED
};

// Logs format: id,timestamp,hostname,username,ip,action,status,details
class LogEntry {
private:
    int ID;
    string TIMESTAMP;
    string USERNAME;
    string HOSTNAME;
    string IPADDRESS;
    string DETAILS;
    ActionType ACTION;
    Status STATUS;

public:
    LogEntry();
    LogEntry(int id, string timestamp, string hostname,string username,string ip, ActionType action, Status status, string details);
    //gets
    int getID();
    string getTimestamp();
    string getHostname();
    string getUsername();
    string getIpaddress();
    ActionType getAction();
    Status getStatus();
    string getDetails();
};

#endif //CYBER_SHIELD_LOGENTRY_H