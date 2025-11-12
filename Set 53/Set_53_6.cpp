//Write a program to inherit the classes called Square, Rectangle, Triangle, and Circle in multi-level manner. Each of the classes are having a member function named findArea() with same signature. And find the area of each shapes through virtual functions.
#include<iostream>
using namespace std;
#define PI 3.14
class Square
{
public:
    virtual float findArea()
    {
        int x;
        cout<<"Enter a side :"<<endl;
        cin>>x;
        return x*x;
    }
};
class Rectangle : public Square
{
public:
    float findArea()
    {
        int w,l;
        cout<<"Enter a length :"<<endl;
        cin>>l;
        cout<<"Enter a Width :"<<endl;
        cin>>w;
        return l*w;
    }
};
class Triangle : public Rectangle
{
public:
    float findArea()
    {
        int b,h;
        cout<<"Enter a Base :"<<endl;
        cin>>b;
        cout<<"Enter a Height :"<<endl;
        cin>>h;
        return 0.5*b*h;
    }
};
class Circle : public Triangle
{
public:
    float findArea()
    {
        int r;
        cout<<"Enter a Redius :"<<endl;
        cin>>r;
        return PI*r*r;
    }
};
int main()
{
    Square *ptr;
    Square s;
    ptr=&s;
    cout<<"Area Of Triangle : "<<ptr->findArea()<<endl;
    Rectangle r;
    ptr=&r;
    cout<<"Area Of Triangle : "<<ptr->findArea()<<endl;
    Triangle t;
    ptr=&t;
    cout<<"Area Of Triangle : "<<ptr->findArea()<<endl;
    Circle c;
    ptr=&c;
    cout<<"Area Of Triangle : "<<ptr->findArea()<<endl;
    return 0;
}
