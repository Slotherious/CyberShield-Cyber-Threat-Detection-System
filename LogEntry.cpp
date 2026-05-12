#include "LogEntry.h"
LogEntry::LogEntry() {
    ID = 0;
    TIMESTAMP = "NO_TIME_STAMP";
    HOSTNAME = "HOSTNAME UNKOWN";
    USERNAME = "USERNAME UNKOWN";
    IPADDRESS = "IPADDRESS NOT FOUND";
    ACTION = ActionType::UNKNOWN;
    STATUS = Status::UNKNOWN;
    DETAILS = "";
}

LogEntry::LogEntry(int id, string timestamp, string hostname,string username,string ip, ActionType action, Status status, string details) {
    ID = id;
    TIMESTAMP = timestamp;
    HOSTNAME = hostname;
    USERNAME = username;
    IPADDRESS = ip;
    ACTION = action;
    STATUS = status;
    DETAILS = details;
}
// GETS functions //
int LogEntry::getID() {
    return ID;
}

string LogEntry::getTimestamp() {
    return TIMESTAMP;
}

string LogEntry::getHostname() {
    return HOSTNAME;
}

string LogEntry::getUsername() {
    return USERNAME;
}

string LogEntry::getIpaddress() {
    return IPADDRESS;
}

ActionType LogEntry::getAction() {
    return ACTION;
}

Status LogEntry::getStatus() {
    return STATUS;
}

string LogEntry::getDetails() {
    return DETAILS;
}
