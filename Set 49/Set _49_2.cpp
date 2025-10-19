//Write a program to find the area of triangle by using the 3 points belongs to 3 different classes using a friend function. The data members of the three classes should be private.
#include<iostream>
#include<cmath>
using namespace std;
class Point1;
class Point2;
class Point3;
class Point1
{
    int x,y;
public:
    Point1(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    friend float getArea(Point1 p1,Point2 p2,Point3 p3);
};
class Point2
{
    int x,y;
public:
    Point2(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    friend float getArea(Point1 p1,Point2 p2,Point3 p3);
};
class Point3
{
    int x,y;
public:
    Point3(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    friend float getArea(Point1 p1,Point2 p2,Point3 p3);
};
float getArea(Point1 p1,Point2 p2,Point3 p3)
{
    float a=sqrt((pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
    float b=sqrt((pow((p3.x-p2.x),2)+pow((p2.y-p2.y),2)));
    float c=sqrt((pow((p1.x-p3.x),2)+pow((p1.y-p3.y),2)));
    float s=(a+b+c)/2.0;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main()
{
    Point1 p1(10,20);
    Point2 p2(30,40);
    Point3 p3(10,40);
    cout<<"Area : "<<getArea(p1,p2,p3);
    return 0;
}
