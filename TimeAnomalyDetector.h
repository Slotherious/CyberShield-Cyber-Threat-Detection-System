#ifndef TIMEANOMALYDETECTOR_H
#define TIMEANOMALYDETECTOR_H

#include <bits/stdc++.h>

#include "ThreatDetector.h"
#include "LogEntry.h"
#include "Alert.h"
using namespace std;

//Creating TimeAnomalyDetector Class Inherting ThreatDetector
class TimeAnomalyDetector : public ThreatDetector {
    TimeAnomalyDetector(); //TimeAnomalyDetector construct
    //Detects suspicious login times from a list of log entries
    vector<Alert> detect(const vector<LogEntry>& logs) override;

};