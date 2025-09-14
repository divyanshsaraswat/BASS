#include<iostream>
#include<conio.h>
using namespace std;
void showMenu() {
    cout << "=====================================\n";
    cout << "       SMART BANKING SYSTEM        \n";
    cout << "=====================================\n";
    cout << "1. Create New Account\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Balance Inquiry\n";
    cout << "5. Transaction History\n";
    cout << "6. Exit\n";
    cout << "-------------------------------------\n";
    cout << "Enter your choice: ";
}
int main(){
    int choose;
    showMenu();
    do{
        cin>>choose;

        switch(choose){
            case 1:cout<<"Option 1"<<endl;break;
            case 2:cout<<"Option 2"<<endl;break;
        }
    }
    while(choose!=6);
   
    return 0;
}