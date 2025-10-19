//Write a program to overload the unary minus operator on an object. The class should contain three private data members.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
    int a,b,c;
public:
    Test(int a,int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void getData()
    {
        cout<<"A : "<<a<<endl;
        cout<<"B : "<<b<<endl;
        cout<<"C : "<<c<<endl;
    }
    void operator-()
    {
        a=-a;
        b=-b;
        c=-c;
    }
};
int main()
{
    Test t(10,20,30);
    cout<<"Data of Og "<<endl;
    t.getData();
    -t;
    cout<<"Data of new "<<endl;
    t.getData();
    return 0;
}
