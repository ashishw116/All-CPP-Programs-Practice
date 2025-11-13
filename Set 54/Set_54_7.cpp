//Write a program to find the biggest of two numbers, where one number is inherited from Super class and another belongs to subclass. Super class Data members and its respective member function should be protected.
#include<iostream>
using namespace std;
class One
{
protected:
    int a;
};
class Two : public One
{
protected:
    int b;
public:
    int getBiggest(int x,int y)
    {
        a=x;
        b=y;
        return (a>b)?a:b;
    }
};
int main()
{
    int a,b;
    cout<<"Enter 2 Numbers : "<<endl;
    cin>>a>>b;
    Two t;
    cout<<"Biggest : "<<t.getBiggest(a,b);
    return 0;
}
