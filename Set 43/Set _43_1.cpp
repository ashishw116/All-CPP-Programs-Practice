//Write a program to find the distance between the two points using objects as argument ( Pass one argument and return the distance)
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
    float getDistance(Point p2)
    {
        float dis=sqrt((pow((p2.x-x),2)+pow((p2.y-y),2)));
        return dis;
    }
};
int main()
{
    Point p1,p2;
    p1.setData(2,3);
    p2.setData(5,7);
    float dis=p1.getDistance(p2);
    cout<<"Distance = "<<dis;
    return 0;
}
