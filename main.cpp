// look down boy !!!
#include "LogEntry.h"
#include "Alert.h"
#include <iostream>
#include <string>
#include "SystemMonitor.h"

using namespace std;

LogEntry log1(
    1,
    "2024-06-01 08:12:33",
    "CORP-PC-01",
    "alice",
    "192.168.1.10",
    ActionType::LOGIN,
    Status::SUCCESS,
    "user logged in normally"
);

int main() {
    cout << log1.getID() << endl;
    cout << log1.getUsername() << endl;
    cout << log1.getIpaddress() << endl;

    Alert a1(
        "Possible brute force attack",
        "HIGH",
        "Ahmed",
        "192.168.1.5"
    );

    SystemMonitor monitor;

    monitor.addLog(log1);
    monitor.addAlert(a1);

    cout << "\n--- System Logs ---" << endl;
    monitor.displayLogs();

    cout << "\n--- System Alerts ---" << endl;
    monitor.displayAlerts();

    return 0;
}


//salt updated here
// before main.cpp directly tested LogEntry and Alert
// now main.cpp can use SystemMonitor as the manager

// now flow LogEntry → SystemMonitor → Alert
// next goal Logs → SystemMonitor → Detectors → Alerts → Report