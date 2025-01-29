#include <iostream>
using namespace std;
int main(){
    int x,y;
    x=7;
    y=3;
    x=x+y; //x=10
    y=x-y; //y=7
    x=x-y;
    cout<<"new values of x and y are " <<x <<y;
    return 0;
}