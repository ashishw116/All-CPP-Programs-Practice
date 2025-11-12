//Write a program to find circumference and area of circle using two different classes called Circumference & Area by inheriting a Class called PI .Inherit the value of PI as private data member and set the value to PI using private member function.
#include<iostream>
using namespace std;
class PI
{
private:
    double pi=3.14;
    void loadPI(int pi)
    {
        this->pi=pi;
    }
public:
    double getPI()
    {
        return pi;
    }
};
class Circumference : public PI
{
public:
    void getCircumference(double r)
    {
        cout<<endl<<"Circumference : "<<2*getPI()*r;
    }
};
class Area : public PI
{
public:
    void getArea(double r)
    {
        cout<<endl<<"Area : "<<getPI()*r*r;
    }
};
int main()
{
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    Circumference c;
    Area a;
    c.getCircumference(radius);
    a.getArea(radius);
    return 0;
}
