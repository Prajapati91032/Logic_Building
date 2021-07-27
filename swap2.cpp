#include<iostream>
using namespace std;
int main() {
    int num1 = 20;
    int num2 = 40;
    cout<<"Before swapping"<<endl;
    cout<<"num1 "<<num1<<"\n"<<"num2 "<<num2<<endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"After swapping"<<endl;
    cout<<"num1 "<<num1<<"\n"<<"num2 "<<num2<<endl;
}