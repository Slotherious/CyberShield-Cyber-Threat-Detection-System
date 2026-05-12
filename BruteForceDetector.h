#ifndef BRUTEFORCEDETECTOR_H
#define BRUTEFORCEDETECTOR_H

#include "Alert.h"
#include "LogEntry.h"
#include <unordered_map>
using namespace std;

class BruteForceDetector {
private:
    int threshold;
    unordered_map<string, int> failedAttemptsByIP;

public:
    BruteForceDetector(int limit = 5);
    Alert analyze(const LogEntry& log);
    void reset();
};

#endif