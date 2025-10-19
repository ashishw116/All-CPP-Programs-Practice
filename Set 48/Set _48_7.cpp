//Write a program to find the sum of two private integers outside of the class using the friend function.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
    int a,b;
public:
    void setData(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    friend int getSum(Test t);
};
int getSum(Test t)
{
    return t.a+t.b;
}
int main()
{
    Test t1;
    t1.setData(10,20);
    cout<<"sum :"<<getSum(t1);
    return 0;
}

