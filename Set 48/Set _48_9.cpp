//Write a program to find the average three integer numbers using a friend function, where three integer numbers are private data members of three different classes.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
    int a,b,c;
public:
    void setData(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    friend float getAverage(Test t);
};
float getAverage(Test t)
{
    return (t.a+t.b+t.c)/3;
}
int main()
{
    Test t1;
    t1.setData(10,20,30);
    cout<<"sum :"<<getAverage(t1);
    return 0;
}
