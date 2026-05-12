#include "ThreatDetector.h"
using namespace std;

ThreatDetector::ThreatDetector(const string& name) {
    detectorName = name;
}
ThreatDetector::~ThreatDetector(){}
string ThreatDetector::getDetectorName() const {
    return detectorName;
}
