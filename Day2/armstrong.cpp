#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, remainder, originalNum, result = 0;
    cout<<"Enter any number to check number is armstrong :";
    cin>>num;
    originalNum = num;

    while(originalNum!=0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if(result == num)
    {
        cout<<num<<" is an Armstrong number.";
    }
    else {
        cout<<num<<" is not an Armstrong number.";
    }

    return 0;
}