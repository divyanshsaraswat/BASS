#include <iostream>
#include <map>
#include <Bank.h>
using namespace std;

class ATM
{
    string atmId, locationId;
    map<string, string> cashReserve;
    Bank *bank;

public:
    bool authenticate(string cardNumber, string PIN);
    void withdraw(string cardNumber, double amount);
    bool deposit(string cardNumber, double amount);
    string balanceEnquiry(string cardNumber);
    bool changePin(string cardNumber);
    string miniStatement(string cardNumber);
};