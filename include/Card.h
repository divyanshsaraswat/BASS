#include <iostream>
using namespace std;

class Card
{
    string cardNumber, linkedAccount, PIN, expiryDate;
    bool isBlocked;

public:
    bool verifyPin();
    void changePin();
};