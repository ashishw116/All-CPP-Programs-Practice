//Write a program to illustrate the overloading of ( ) ( function call) operator.
#include<iostream>
using namespace std;
class Multiply
{
public:
    int operator()(int x,int y)
    {
        return x*y;
    }
};
int main()
{
    Multiply mul;
    cout<<"Multiplication : "<<mul(5,6);
    return 0;
}
