//Write a program to find the absolute difference between two Time entities with data members like Hours, Minutes and Seconds by overloading the - Operator.
#include<iostream>
#include<cmath>
using namespace std;
class Time
{
    int hours;
    int minutes;
    int seconds;
public:
    void setData(int hours, int minutes, int seconds)
    {
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }
    void getData()
    {
        cout<<"\n Hours : "<<hours<<" Minutes : "<<minutes<<" Seconds : "<<seconds<<endl;
    }
    Time operator-(Time t)
    {
        Time res;
        int totalSec1=0,totalSec2=0;
        totalSec1=hours * 3600 + minutes * 60 + seconds;
        totalSec2=t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diff = abs(totalSec1 - totalSec2);
        res.hours=diff/3600;
        diff%=3600;
        res.minutes=diff/60;
        res.seconds=diff%60;
        return res;
    }
};
int main()
{
    Time t1,t2;
    t1.setData(1,15,45);
    t2.setData(3,55,35);
    cout<<"1st Date : ";
    t1.getData();
    cout<<"\n2nd Date: ";
    t2.getData();
    Time t3=t1-t2;
    cout<<"\nAddition Date : "<<endl;
    t3.getData();
    return 0;
}
