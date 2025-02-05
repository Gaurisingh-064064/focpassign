#include <iostream>
using namespace std;
int main(){
    int num,count,value=0;
    int i;
    cout<<"enter a number ";
    cin>>num;
    while (value<=num)
    {
        for ( i = 2 ; i < value/2 ; i++)
        {
            if (value%i==0)
            {
                cout<<" the number is prime \n" ;
                count++;
            }
            else{
                cout<<"the number is not prime \n" ;
            }
            
        }
        value++;
    }
    cout<<count;
    return 0;
}