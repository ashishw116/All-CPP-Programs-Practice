 //Write a program to inherit three classes indicates three points into a class called Triangle in Multiple manner to find the Area of a triangle in a member function of the same class and print the results.
 #include<iostream>
 #include<math.h>
using namespace std;
class Point1
{
public:
    int x1,y1;
    void setX1(int x,int y)
    {
        this->x1=x;
        this->y1=y;
    }
};
class Point2
{
public:
    int x2,y2;
    void setX2(int x,int y)
    {
        this->x2=x;
        this->y2=y;
    }
};
class Point3
{
public:
    int x3,y3;
    void setX3(int x,int y)
    {
        this->x3=x;
        this->y3=y;
    }
};
class Triangle : public Point1,public Point2,public Point3
{
public:
    void getArea()
    {
        float area=0.5*abs((x1*(y2-y3))+(x2*(y1-y3))+(x3*(y1-y2)));
        cout<<"Area : "<<area;
    }
};
int main()
{
    Triangle t;
    t.setX1(3,2);
    t.setX2(6,3);
    t.setX3(2,1);
    t.getArea();
}
