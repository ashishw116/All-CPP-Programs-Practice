//Write a program to illustrate the overloading of -> ( this pointer) operator.
#include<iostream>
using namespace std;
class Temp
{
public:
    void display()
    {
        cout<<"The Message Will Sent";
    }
};
class Test
{
    Temp obj;
public:
    Temp* operator->()
    {
        return &obj;
    }
};
int main()
{
    Test t;
    t->display();
    return 0;
}
