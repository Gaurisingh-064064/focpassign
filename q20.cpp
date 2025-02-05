#include <iostream>
#include <math.h>
using namespace std;
int main(){
   char sign;
   int a,b;
    cout<<"enter the operation to be performed";
    cin>>sign;
    switch(sign) {
        case '+':
        cout<<"enter the operants ";
        cin>>a ;
        cin>>b;
        cout<<"the summation is ";
        cout<<a+b;
        case '-':
        cout<<"enter the operants ";
        cin>>a ;
        cin>>b;
        cout<<"the subs is ";
        cout<<a-b;
        case '*':
        cout<<"enter the operants ";
        cin>>a ;
        cin>>b;
        cout<<"the pro is ";
        cout<<a*b;
        case '/':
        cout<<"enter the operants ";
        cin>>a ;
        cin>>b;
        cout<<"the div is ";
        cout<<a/b;
    }
    return 0;
}