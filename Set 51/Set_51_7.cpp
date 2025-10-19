//WAP to find area of circle and circumference of circle using hierarchical inheritanc
#include<iostream>
using namespace std;
#define PI 3.14
class Circle
{
public:
    int r;
};
class Area : public Circle
{
public:
    double calculateArea()
    {
        return PI*r*r;
    }
};
class Circumference : public Circle
{
public:
    double calculateCircumference()
    {
        return 2*PI*r;
    }
};
int main()
{
    Area a;
    Circumference c;
    a.r=3;
    c.r=3;
    cout << "Area :  " << a.calculateArea()<< "Circumference :  " << c.calculateCircumference()  << endl;
    return 0;
}
