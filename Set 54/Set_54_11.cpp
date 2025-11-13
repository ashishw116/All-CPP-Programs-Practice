//Write a program to create a function template to find the maximum of two data items of type int,float,char and double.
#include<iostream>
using namespace std;
template <class T> T getBig(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<"Biggest Of int : "<<getBig(5,6)<<endl;
    cout<<"Biggest of float : "<<getBig(6.54,7.4)<<endl;
    cout<<"Biggest of Char : "<<getBig('x','y')<<endl;
}
