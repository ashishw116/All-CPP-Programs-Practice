//Write a program to find addition of two numbers using a class, which contains 2 data members and two methods like getdata and findAddition and display addition.
#include<iostream>
using namespace std;
class Addition
{
public:
    int a,b,sum;
    void getData(int x,int y)
    {
        a=x;
        b=y;
    }
    void findAddition()
    {
        sum = a+b;
    }
    void display()
    {
        cout<<"Sum ="<<sum;
    }
};
int main()
{
    Addition ad;
    ad.getData(10,20);
    ad.findAddition();
    ad.display();
    return 0;
}
