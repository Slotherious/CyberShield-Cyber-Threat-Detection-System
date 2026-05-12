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
    //ThreatDetector constructor
    ThreatDetector(const string& name);

    //ThreatDetector Destructor after the threat is detected
    virtual ~ThreatDetector();
    virtual vector<Alert> detect(const vector<LogEntry>& logs) = 0;

    //Which detector to use
    string getDetectorName() const;
};
#endif