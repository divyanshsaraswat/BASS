#include <iostream>
#include <vector>
#include <Transaction.h>
using namespace std;

class Account
{
    string accountNumber, createdDate, ownerId;
    double balance;
    vector<int> transactions;
    bool isActive;
    Account(string accountNumber, string ownerId, double openingBalance = 0.0)
    {
        accountNumber = accountNumber;
        ownerId = ownerId;
        balance = openingBalance;
    }

public:
    void addTransaction(const Transaction &) const;
    void getBalance() const;
    void getAccountNumber() const;
    void printStatement(std::ostream &);
    virtual bool withdraw(double amount);
    virtual void deposit(double amount);
    virtual double calculateInterest() const = 0;
};

class FixedDepositAccount: public Account{
    
};

class SavingsAccount: public Account{

};

class CurrentAccount: public Account{
    
};