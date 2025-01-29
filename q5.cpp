#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int a,p,r,t;
    int const N=2;
    cout<<"Enter principal";
    cin>>p;
    cout<<"Enter rate";
    cin>>r;
    cout<<"Enter time";
    cin>>t;
    a=p*pow((1+r/N),(N*t));
   cout<<a;
   return 0;
}