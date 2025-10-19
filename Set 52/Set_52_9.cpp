//Write a program to find the biggest of three integers which belongs to three different classes with parameterized constructors and inherited into third class in multi-level manner using Ternary operator.
#include<iostream>
using namespace std;
class Test1
{
public:

    int a;
    Test1(int a)
    {
        this->a=a;
    }
};
class Test2 : public Test1
{
public:

    int b;
    Test2(int a,int b):Test1(a)
    {
        this->b=b;
    }
};
class Test3 : public Test2
{
public:

    int c;
    Test3(int a,int b,int c):Test2(a,b)
    {
        this->c=c;
    }
    int findBig()
    {
        return (a>b&&a>c)?a:b>c?b:c;
    }
};
int main()
{
    Test3 t(1,4,3);
    cout<<"Big : "<<t.findBig();
    return 0;
}
