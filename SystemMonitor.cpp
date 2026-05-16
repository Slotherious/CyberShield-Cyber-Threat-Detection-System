#include "SystemMonitor.h"
#include <iostream>

using namespace std;

// goal: creates an empty SystemMonitor object
SystemMonitor::SystemMonitor() {
}

// Adds one log entry to the logs list
void SystemMonitor::addLog(const LogEntry& log) {
    logs.push_back(log);
}

// Adds one alert to the alerts list
void SystemMonitor::addAlert(const Alert& alert) {
    alerts.push_back(alert);
}

// Displays all saved logs
void SystemMonitor::displayLogs() {
    for (LogEntry log : logs) {
        cout << "ID: " << log.getID() << endl;
        cout << "Username: " << log.getUsername() << endl;
        cout << "IP: " << log.getIpaddress() << endl;
        cout << "------------------" << endl;
    }
}

// Displays all saved alerts
void SystemMonitor::displayAlerts() {
    for (Alert alert : alerts) {
        alert.displayAlert();
        cout << "------------------" << endl; //you know gotta make it look clear (:
    }
}

// Returns all saved logs
vector<LogEntry> SystemMonitor::getLogs() {
    return logs;
}

// Returns all saved alerts
vector<Alert> SystemMonitor::getAlerts() {
    return alerts;
}

// Adds a detector to the detectors list
void SystemMonitor::addDetector(ThreatDetector* detector) {
    detectors.push_back(detector);
}

// Runs every detector on the saved logs and stores the alerts found
void SystemMonitor::runDetectors() {
    for (ThreatDetector* detector : detectors) {
        vector<Alert> detectedAlerts = detector->detect(logs);

        for (Alert alert : detectedAlerts) {
            alerts.push_back(alert);
        }
    }
}