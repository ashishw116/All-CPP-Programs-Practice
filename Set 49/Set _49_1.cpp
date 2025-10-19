//Write a program to find the distance between the 2 Points belongs to 2 different classes using a friend function. The data members of the two classes should be private.
#include<iostream>
#include<cmath>
using namespace std;
class Point1;
class Point2;
class Point1
{
    int x,y;
public:
    Point1(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    friend float getDistance(Point1 p1,Point2 p2);
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
    friend float getDistance(Point1 p1,Point2 p2);
};
float getDistance(Point1 p1,Point2 p2)
{
    float distance=sqrt((pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
    return distance;
}
int main()
{
    Point1 p1(10,20);
    Point2 p2(30,40);
    cout<<"Distance : "<<getDistance(p1,p2);
    return 0;
}
