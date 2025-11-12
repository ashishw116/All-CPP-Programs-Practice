//Write a program to illustrate the pointer to the Derived class object by without typecasting Pointers.
#include<iostream>
using namespace std;
class Test1
{
public:
    virtual void display()
    {
        cout<<endl<<"Test1 Class";
    }
};
class Test2 : public Test1
{
public:
    void display()
    {
        cout<<endl<<"Test2 Class";
    }
};
class Test3 : public Test2
{
public:
    void display()
    {
        cout<<endl<<"Test3 Class";
    }
};
int main()
{
    Test1 t1;
    Test1 *p;
    p=&t1;
    p->display();
    Test2 t2;
    p=&t2;
    p->display();
    Test3 t3;
    p=&t3;
    p->display();
    return 0;
}
