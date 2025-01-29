#include <iostream>
#include <iomanip>;
using namespace std;
int main(){
    int a;
    char c;
    float b;
    cout<<"enter the value of the int char and float";
    cin>>a ;
    cin>>b; 
    cin>>c;
    cout<<setw(10) <<setfill('-') <<a <<endl;
    cout<<setw(10)  <<setfill('-') <<b <<endl;
    cout<<setw(10)  <<setfill('-') <<c <<endl;
    return 0;
}