#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, reverse = 0, remainder, originalNum;
    cout<<"Enter a number :";
    cin>>num;
    originalNum = num;

    while(num!=0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if(originalNum == reverse)
    {
        cout<<originalNum<<" is a palindrome"<<endl;
    }
    else {
        cout<<originalNum<<" is not a palindrome"<<endl;
    }

    return 0;
    
}