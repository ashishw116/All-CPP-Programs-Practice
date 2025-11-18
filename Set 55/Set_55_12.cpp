//Write a program to illustrate the use of new key word for addition of two numbers.
#include<iostream>
using namespace std;
class Test
{
    int a,b;
public:
    void setData()
    {
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }
    void getAdd()
    {
        cout<<"Addition : "<<a+b;
    }
};
int main()
{
    Test *ptr1=new Test();
    ptr1->setData();
    ptr1->getAdd();
    return 0;
}
