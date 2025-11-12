//Write a program to find the average of 3 integers, where 3 integers are inherited in multi-level manner into the 3rd Class. Each class should have one private data member and one private member function to load the data to the private data member.
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
class Three : public Two
{
    int z;
    void loadZ(int z)
    {
        this->z=z;
    }
public:
    void setZ(int z)
    {
        loadZ(z);
    }
    int getZ()
    {
        return z;
    }
    double getAverage()
    {
        return (double)(getX()+getY()+z)/3;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter Three Number : ";
    cin>>x>>y>>z;
    Three t;
    t.setX(x);
    t.setY(y);
    t.setZ(z);
    cout<<"Average : "<<t.getAverage();
    return 0;
}
