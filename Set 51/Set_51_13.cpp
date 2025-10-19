//Write a program to inherit two points in multiple manner into a third class called Distance to get the distance between the two points in the same class member function and print the results.
#include<iostream>
using namespace std;
class Point
{
public:
    int x,y;
};
class Test : public Point
{
public:
    Test(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void isPointInFirstQuad()
    {
        if(x>0&&y>0)
            cout<<"Point Belongs To 1st Quadrant.";
        else
            cout<<"Point Not Belongs To 1st Quadrant.";
    }
};
int main()
{
    Test t(3,-5);
    t.isPointInFirstQuad();
    return 0;
}
