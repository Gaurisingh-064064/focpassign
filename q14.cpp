#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b && a==c)
    {
        cout<<"Equilateral triangle";
    }
     else if (a==b ||b==c || a==c)
    {
        cout<<"Isosceles triangle";
    }
    else
    {
        cout<<"Scalene triangle";
    }
    return 0;
    
}