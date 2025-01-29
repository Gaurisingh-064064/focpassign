#include<iostream>
#include<iomanip>//to count the number of 1 bits in an integer input by user
using namespace std;
int main()
{
int num,bit=0;
cout<<"Enter an integer:";
cin>>num;
while(num!=0)
{
    bit+=num%2;
    num /=2;
}
cout<<bit;
return 0;
}