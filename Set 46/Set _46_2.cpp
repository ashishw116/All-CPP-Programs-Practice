//Write a program to find the area of different entities like circle, triangle, square and rectangle using function overloading.
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159
class Test
{
public:
    float getArea(float r)
    {
        return PI*r*r;
    }
    float getArea(float b,float h)
    {
        return (float)(b*h)/2;
    }
    float getArea(int l,int w)
    {
        return (float)l*w;
    }
    float getArea(int s)
    {
        return (float)s*s;
    }
};

int main()
{
    Test t;
    int arr[]={1,2,3,4,5};
    cout<<"Area of Circle :"<<t.getArea(5.0f);
    cout<<"\nArea of Triangel :"<<t.getArea(5.5f,6.3f);
    cout<<"\nArea of Rectangle :"<<t.getArea(6,5);
    cout<<"\nArea of Square :"<<t.getArea(5);
    return 0;
}

