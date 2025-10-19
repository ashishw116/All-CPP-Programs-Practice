/*WAP to find area of triangle for the given 3 points where each point belongs to different classes.
 1st point need to use default constructor.
 2nd point need to use parameterized constructor.
 3rd point need to use other class object in its constructor and find the area in the other*/
#include<iostream>
#include<cmath>
using namespace std;
class Point
{
public:
    int x,y;
    Point()
    {
        x=10;
        y=25;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    Point(Point &p)
    {
        this->x=p.x;
        this->y=p.y;
    }
};
class Area
{
    public :
    float getArea(Point p1,Point p2,Point p3)
    {
        float a=getDistance(p1,p2);
        float b=getDistance(p1,p3);
        float c=getDistance(p2,p3);
        float s=(a+b+c)/2;
        return sqrt((s*(s-a)*(s-b)*(s-c)));
    }
    float getDistance(Point p1,Point p2)
    {
        return (float)sqrt((pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)));
    }
};
int main()
{
    Point p1,p2(67,25),temp(15,32),p3(temp);
    Area a;
    cout << "\nArea: " <<a.getArea(p1,p2,p3);
    return 0;
}

