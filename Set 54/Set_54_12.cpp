//Write a program to create a function template to find the maximum of two data items of type int,float,char and double.
#include<iostream>
using namespace std;
template <class T> getBig(T a,T b,T c)
{
    T avg=(a+b+c)/3;
    return avg;
}
int main()
{
    cout<<"Average Of int : "<<getBig(5,6,5)<<endl;
    cout<<"Average of float : "<<getBig(6.54,7.4,7.3)<<endl;
    cout<<"Average of Char : "<<getBig('x','y','z')<<endl;
}
