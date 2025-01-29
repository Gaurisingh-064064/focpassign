#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout <<"enter two numbers ";
    float num1,num2;
    float div;
    cin >>num1 >>num2;
    div=num1/num2;
    cout<<fixed<<setprecision(2)<<div;
    return 0;
}