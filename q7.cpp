#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    x=3;
    y=4;
    z=x;
    x=y;
    y=z;
    cout<<"new value of x and y are " <<x << y;
    return 0;
}