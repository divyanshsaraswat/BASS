#include <iostream>
#include <vector>
using namespace std;

class Transaction{
    string txnId,timestamp,fromAccount,toAccount;
    double amount,balanceAfter;
    public:
        void toCSV();
        static void  fromCSV();
        string operator <(string timestamp);
        string operator <<(iostream &);


};