#include "LogEntry.h"
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
}