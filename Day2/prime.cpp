// Program to find given number is prime or not

#include<iostream>
using namespace std;
int main() {
    int num, count=0;

    cout<<"Program to find prime number"<<endl;
    cout<<"Enter number: ";
    cin>>num;

    if(num == 0 || num == 1)
        cout<<num<<" is not prime number";
    
    else {
        for(int i = 2; i<=num; i++)
        {
            if( num % i ==0)
            {
                count = count +1;
            }
        }
        if(count == 1)
        {
            cout<<num<<" is a prime number";
        }
        else {
            cout<<num<<" is not prime number";
        }
    }

    return 0;
}