//Write a program to find the distance between the two points using the class template
#include<iostream>
#include<math.h>
using namespace std;
template <class T>
class Distance
{
private:
    T x1,x2,y1,y2;
public:
    void setData()
    {
        cout<<endl<<"Enter 1st Point : ";
        cin>>x1>>y1;
        cout<<endl<<"Enter 2nd Point : ";
        cin>>x2>>y2;
    }
    double getDistance()
    {
        double dx = x2 - x1;
        double dy = y2 - y1;
        return sqrt(dx * dx + dy * dy);
    }
};
int main()
{
    Distance<int> n;
    n.setData();
    cout<<endl<<"Distance : "<<n.getDistance();

    Distance<float> n1;
    n1.setData();
    cout<<endl<<"Distance : "<<n1.getDistance();
    return 0;
}
