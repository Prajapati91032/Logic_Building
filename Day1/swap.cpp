#include<iostream>
using namespace std;
int main() {
    int num = 0;
    int num1 = 20;
    int num2 = 40;
    cout<<"Before swapping"<<endl;
    cout<<"num1 "<<num1<<"\n"<<"num2 "<<num2<<endl;
    num = num1;
    num1 = num2;
    num2 = num;
    cout<<"After swapping"<<endl;
    cout<<"num1 "<<num1<<"\n"<<"num2 "<<num2<<endl;

    return 0;
}