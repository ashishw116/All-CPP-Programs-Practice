//Write a program to find the bigger of two numbers, where one number is inherited from Super class and another belongs to subclass. Both the data members should be private and the member functions that are loading the data should also should be private.
#include<iostream>
using namespace std;
class One
{
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int getX()
    {
        return x;
    }
};
class Two : public One
{
    int y;
    void loadY(int y)
    {
        this->y=y;
    }
public:
    void setY(int y)
    {
        loadY(y);
    }
    int getY()
    {
        return y;
    }
    int getAddition()
    {
        return getX()+y;
    }
};
int main()
{
    int x,y;
    cout<<"Enter Two Number : ";
    cin>>x>>y;
    Two t;
    t.setX(x);
    t.setY(y);
    cout<<"Addition : "<<t.getAddition();
    return 0;
}
