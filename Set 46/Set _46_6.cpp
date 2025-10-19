//WP to find the distance between two objects of a class called point when the class is having default constructor, parameterized constructor and function called getDistance().
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
    float getDistance(Point p1,Point p2)
    {
        return (float)sqrt((pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)));
    }
};

int main()
{
    Point p1(10,33),p2;
    cout << "\nDistance: " <<p1.getDistance(p1,p2);
    return 0;
}

