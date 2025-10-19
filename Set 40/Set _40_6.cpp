//Write a program to illustrate the use of Shortcut assignment of bitwise operators.
#include<iostream>
using namespace std;
int main()
{
    int a=20;
    a&=20;
    cout<<a<<endl;
    a|=1;
    cout<<a<<endl;
    a^=10;
    cout<<a<<endl;
    a<<=1;
    cout<<a<<endl;
    a>>=1;
    cout<<a<<endl;
}
