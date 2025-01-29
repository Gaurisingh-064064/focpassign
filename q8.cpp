#include <iostream>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"enter the age of candidate ";
    cin >>age;
    cout<<"enter the name of candiadte ";
    cin >>name;
    int days;
    days=age*365;
    cout<<"the name " <<name <<" and days lived "<<days;
    return 0;
}