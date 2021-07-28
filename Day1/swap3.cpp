#include <iostream>
using namespace std;
int main()
{
    int num = 20;
    int num1 = 40;
    int num2 = 60;
    cout << "Before swapping" << endl;
    cout << "num " << num << "\n"
         << "num1 " << num1 << "\n"
         << "num2 " << num2 << endl;
    num = num + num1 + num2;
    num1 = num - (num1+num2);
    num2 = num- (num1+num2);
    num = num - (num1+num2);
    cout << "After swapping" << endl;
    cout << "num " << num << "\n"
         << "num1 " << num1 << "\n"
         << "num2 " << num2 << endl;

     return 0;
}