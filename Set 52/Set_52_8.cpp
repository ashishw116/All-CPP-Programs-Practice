//Write a program to find the sum of two Integers belongs to two different classes with different names, find the sum in sub class. Assign the values to data members using the default constructors.
#include<iostream>
using namespace std;
class Test1
{
public:

    int a;
    Test1()
    {
        a=10;
    }
};
class Test2 : public Test1
{
public:

    int b;
    Test2()
    {N
        b=20;
    }
    int findSum()
    {
        return a+b;
    }
};
int main()
{
    Test2 t;
    cout<<"Sum : "<<t.findSum();
    return 0;
}
