//Write a program to inherit a class called Center which represents the center of Circle by three classes called Point1, Point2 and Point3. Check which point is lies on the Circumference of the circle or not.
#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
class Center
{
public:
    int x,y;
    void getCenter(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
class Point1 : public Center
{
public:
    int x1,y1;
    void getPoint(int x,int y)
    {
        this->x1=x;
        this->y1=y;
    }
    void isLiesOnCircum(float r)
    {
        float dis=sqrt(pow((x-x1),2)+pow((y-y1),2));
        if(r==dis)
            cout<<"Point1 Lies on Circumference"<<endl;
        else
            cout<<"Point1 not Lies on Circumference"<<endl;
    }
};
class Point2 : public Center
{
public:
    int x2,y2;
    void getPoint(int x,int y)
    {
        this->x2=x;
        this->y2=y;
    }
    void isLiesOnCircum(float r)
    {
        float dis=sqrt(pow((x-x2),2)+pow((y-y2),2));
        if(r==dis)
            cout<<"Point2 Lies on Circumference"<<endl;
        else
            cout<<"Point2 not Lies on Circumference"<<endl;
    }
};
class Point3 : public Center
{
public:
    int x3,y3;
    void getPoint(int x,int y)
    {
        this->x3=x;
        this->y3=y;
    }
    void isLiesOnCircum(float r)
    {
        float dis=sqrt(pow((x-x3),2)+pow((y-y3),2));
        if(r==dis)
            cout<<"Point3 Lies on Circumference"<<endl;
        else
            cout<<"Point3 not Lies on Circumference"<<endl;
    }
};
int main()
{
    Point1 p1,p2,p3;
    p1.getCenter(10,10);
    p1.getPoint(10,15);
    p1.isLiesOnCircum(5);

    p2.getCenter(10,10);
    p2.getPoint(10,9);
    p2.isLiesOnCircum(3);

    p3.getCenter(10,10);
    p3.getPoint(10,15);
    p3.isLiesOnCircum(6);
    return 0;
}
