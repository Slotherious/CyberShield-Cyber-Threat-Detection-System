#ifndef THREATDETECTOR_H
#define THREATDETECTOR_H

#include <string>
#include <vector>

using namespace std;

class LogEntry;
class Alert;
class ThreatDetector {
protected:
    string detectorName;
public:
    ThreatDetector(const string& name);
    virtual ~ThreatDetector();
    virtual vector<Alert> detect(const vector<LogEntry>& logs) = 0;
    string getDetectorName() const;
};

#endif