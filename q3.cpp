#include<iostream>
using namespace std;

int main()
{
    char opr;
    int num1,num2;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
    cout<<"Enter operator";
    cin>>opr;

    switch(opr)
    {
        case '+':
        {
            cout<<num1+num2;
            break;
        }
        case '-':
        {
            cout<<num1-num2;
            break;
        }
        case '*':
        {
            cout<<num1*num2;
            break;
        }
        case '/':
        {
            cout<<num1/num2;
            break;
        }
    }

    return 0;
}