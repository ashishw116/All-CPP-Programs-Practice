//Write a program to inherit two points in multiple manner into a third class called Distance to get the distance between the two points in the same class member function and print the results.
#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
class Point1
{
public:
    int x1,y1;
};
class Point2
{
public:
    int x2,y2;
};
class Distance : public Point1,public Point2
{
public:
    Distance(int x1,int y1,int x2,int y2)
    {
        this->x1=x1;
        this->x2=x2;
        this->y1=y1;
        this->y2=y2;
    }
    double getDiistance()
    {
        return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    }
};
int main()
{
    Distance d(3,5,3,5);
    cout << "Distance : " <<d.getDiistance()<< endl;
    return 0;
}
