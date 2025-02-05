#include <iostream>
using namespace std;
int main(){
    cout<<"enter 0 to exit\n";
    int n,sum=0,count=0;
    int min=0,max=0;
    while (true)
    {
       cout<<"enter a number";
       cin>>n;
       if (n==0)
       {
        break;
       }
       sum+=n;
       count++;
       if (n>max)
       {
        max=n;
       }
       if (n<min)
       {
        min=n;
       }
       
    }
     cout<<"SUM IS" <<sum <<endl;
       cout<<"count is"<<count<<endl;
       cout<<"max value is "<<max<<endl;
       cout<<"min value is"<<min<<endl;
       
    return 0;
}