#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, reverse = 0, remainder;
    cout<<"Enter a number to reverse: ";
    cin>>num;

    while(num!=0)
    {
        remainder = num % 10;
        reverse = reverse*10+remainder;
        num = num / 10;
    }
    
    cout<<"Reversed number "<<reverse<<endl;
    
    return 0;
}