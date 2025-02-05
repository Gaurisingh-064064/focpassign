#include <iostream>
using namespace std;
int main(){
    int num,i=2,flag;
    cout<<"enter a number ";
    cin>>num;
    while(i<num/2){
        if (num/i==0)
        {
           flag++;
          
        }
        i++;
    }
    if (flag>0)
    {
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
    

    return 0;
}