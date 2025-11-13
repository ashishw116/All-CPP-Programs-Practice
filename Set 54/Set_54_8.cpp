//Write a program to find the average of three numbers belongs to three classes in multi-level manner. All the super class data members and their respective member functions are protected.
#include<iostream>
using namespace std;
class One
{
protected:
    int a;
};
class Two : public One
{
protected:
    int b;
};
class Three : public Two
{
protected:
    int c;
public:
    float getAverage(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        return (a+b+c)/3;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter 3 Numbers : "<<endl;
    cin>>a>>b>>c;
    Three t;
    cout<<"Average : "<<t.getAverage(a,b,c);
    return 0;
}
