#ifndef SYSTEMMONITOR_H
#define SYSTEMMONITOR_H
#include "ThreatDetector.h"
#include <vector>
#include <string>
#include "LogEntry.h"
#include "Alert.h"

using namespace std;

class SystemMonitor {
private:
    // thoes are the storages
    vector<ThreatDetector*> detectors; //tool check for the threat
    vector<LogEntry> logs; //record the login/activity
    vector<Alert> alerts; //waring for system

public:
    SystemMonitor();

    void addLog(const LogEntry& log); //Adds one log into the system
    void addAlert(const Alert& alert);// Adds one alert into the system.

    //print it out
    void displayLogs();
    void displayAlerts();

    //Returns the saved logs/alerts so other classes can use them.
    vector<LogEntry> getLogs();
    vector<Alert> getAlerts();

    void addDetector(ThreatDetector* detector);//add threat to system.
    void runDetectors();//Runs all detectors on all logs, then saves the alerts they find.
};

#endif