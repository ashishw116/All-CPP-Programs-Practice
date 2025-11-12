//Write a program to inherit a class called Big by a class called GCD. In Big class create a member function called operationOnTwoNos( ) to find the biggest of Two Numbers. In Class GCD create a member function called operationonTwoNos() to find the GCD of Two numbers using runtime polymorphism
#include<iostream>
using namespace std;
class Big
{
public:
    virtual void operationOnTwoNos(int a,int b)
    {
        cout<<"Biggest : "<<(a>b?a:b);
    }
};
class GCD : public Big
{
public:
    void operationOnTwoNos(int a,int b)
    {
        while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        cout<<endl<<"GCD : "<<a;
    }
};
int main()
{
    Big *ptr;
    Big b;
    GCD g;
    ptr=&b;
    ptr->operationOnTwoNos(13,14);
    ptr=&g;
    ptr->operationOnTwoNos(13,14);
    return 0;
}
