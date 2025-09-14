#include<iostream>
#include<vector>
#include<Account.h>
using namespace std;

class Customer{
    string customerId,name,dob,address,phone,email;
    vector<int> accountNumbers;
    public:
        void addAccount(string AccountNumber);
        void removeAccount(Account a);
        void getAccounts() const;
        void updateContactInfo();
};