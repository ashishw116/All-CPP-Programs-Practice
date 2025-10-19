//Write a program which takes 5 points of a line and check whether the line is parallel to X-axis or not using array of objects.
#include<iostream>
#include<cmath>
using namespace std;
class Point
{
public:
    int x,y;
    void setData()
    {
        cin>>x>>y;
    }

    bool isParallel(Point p[])
    {
        for(int i=0;i<5-1;i++)
        {
            if(p[i].y!=p[i+1].y)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Point p[5];
    cout<<"Enter the 5 points : \n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter x and y of point "<<i+1<<endl;
        p[i].setData();
    }
    if(p[0].isParallel(p))
        cout<<"Point are parallel to x axis";
    else
        cout<<"Point are not parallel to x axis";
    return 0;
}
