#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,d,r1,r2; //where a,b,c are coeff of the quad eq
    cout<<"enter the values of a,b,c ";
    cin>>a >>b >>c;
    d=b*b-4*a*c;

    if (d>0)
    {
        /* code */cout<<"roots are naturala and distinct";
        r1=(-b-sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        cout<<r1 <<r2;
    }
    else if(d<0){
        cout<<"no roots";
    }
    else{
        cout<<"equal roots exists";
        r1=(-b-sqrt(d))/2*a;
        cout<<r1;
    }
    
return 0;
}