//Write a program to find the biggest of two float point numbers using a friend function, where two floating numbers are private data members of two different classes.
#include<iostream>
#include<cmath>
using namespace std;
class Test{
    float a,b;
public:
    void setData(float a,float b)
    {
        this->a=a;
        this->b=b;
    }
    friend float getBiggest(Test t);
};
float getBiggest(Test t)
{
    return t.a<t.b?t.b:t.a;
}
int main()
{
    Test t1;
    t1.setData(3.4,3.2);
    cout<<"Biggest : "<<getBiggest(t1);
    return 0;
}

