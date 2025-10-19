//WAP to find the area of a triangle when three points are given using the Objects as arguments by creating three classes like Point, Distance and Area.
#include<iostream>
#include<cmath>
using namespace std;
class Point
{
public:
    int x,y;
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
};
class Distance
{
public:
    float distance;
    float getDistance(Point p1,Point p2)
    {
        distance=sqrt((pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
        return distance;
    }
};
class Area
{
public:
    float area;
    float getArea(float a,float b,float c)
    {
        float s=(a+b+c)/2;
        area=sqrt((s*(s-a)*(s-b)*(s-c)));
        return area;
    }
};
int main()
{
    Point p1,p2,p3;
    p1.setData(2,3);
    p2.setData(5,7);
    p3.setData(6,8);
    Distance d1,d2,d3;
    float a=d1.getDistance(p1,p2);
    float b=d2.getDistance(p1,p3);
    float c=d3.getDistance(p2,p3);
    Area area;
    float ar=area.getArea(a,b,c);
    cout<<"Area = "<<ar;
    return 0;
}

