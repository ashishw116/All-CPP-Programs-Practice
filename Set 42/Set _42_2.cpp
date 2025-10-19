//Write a program to find the average of 3 integers using a class which contains three Data members and 3 member functions like getData, findAverage and getAverage.
#include<iostream>
using namespace std;
class Average
{
public:
    int a,b,c;
    float avg;
    void getData(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void findAverage()
    {
        avg=(float)(a+b+c)/3;
    }
    void getAverage()
    {
        cout<<"Average ="<<avg;
    }
};
int main()
{
    Average av;
    av.getData(10,20,25);
    av.findAverage();
    av.getAverage();

    return 0;
}
