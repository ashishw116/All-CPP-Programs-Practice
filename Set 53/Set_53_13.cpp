//Write a program to calculate the area of triangle using two different classes called Base & Height, where the base of Base class is a private data member and set the value of base using private member function. And height of Height class is a private data member and set the value of height using the private member function. Inherit both the classes into a class called Area to calculate the same in a function called findArea ( ).
#include<iostream>
using namespace std;
class Height
{
    int height;
    void loadHeight(int h)
    {
        this->height=h;
    }
public:
    void setHeight(int h)
    {
        loadHeight(h);
    }
    int getHeight()
    {
        return height;
    }
};
class Base
{
    int base;
    void loadBase(int b)
    {
        this->base=b;
    }
public:
    void setBase(int b)
    {
        loadBase(b);
    }
    int getBase()
    {
        return base;
    }
};
class Area : public Base,public Height
{
public:
    void findArea(int b,int h)
    {
        setBase(b);
        setHeight(h);
        cout<<"Area : "<<0.5*b*h;
    }
};
int main()
{
    Area a;
    int b,h;
    cout<<"Enter Base And Height : ";
    cin>>b>>h;
    a.findArea(b,h);
    return 0;
}
