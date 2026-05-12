#include "LogEntry.h"
#include "Alert.h"
#include <iostream>
#include <string>

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

    a1.displayAlert();
}