//WAP to find the Distance between two points using objects as arguments by creating class called Point and another class called Distance.
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
    void getDistance(Point p1,Point p2)
    {
        distance=sqrt((pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
    }
};
int main()
{
    Point p1,p2;
    p1.setData(2,3);
    p2.setData(5,7);
    Distance dis;
    dis.getDistance(p1,p2);
    cout<<"Distance = "<<dis.distance;
    return 0;
}

