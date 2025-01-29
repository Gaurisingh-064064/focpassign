#include <iostream>
using namespace std;
int main(){
    int option,balance,amount;
    cout<<"input the balance ";
    cin>>balance;
    cout<<"enter the option for atm simulation"; //for withdrawal=1,deposit=2,balance=3,exit=4
    cin>>option;
    cout<<"enter the amout to withsraw or deposit";
    cin>>amount;
    switch (option)
    {
    case 1:
        cout<<balance-amount;
        break;
    case 2:
        cout<<balance+amount;
        break;
    case 3:
        cout<<balance;
        break;
    
    default:
        cout<<"exit";
        break;
    }
    return 0;
    }