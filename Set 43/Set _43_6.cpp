//WAP to find absolute difference of time entities using arguments for objects.
#include<iostream>
#include<cmath>
using namespace std;
class Time
{
public:
    int hour,minute,second;
    void setData(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;

    }
    Time getDiff(Time t1,Time t2)
    {
        int v1=t1.hour*3600+t1.minute*60+t1.second;
        int v2=t2.hour*3600+t2.minute*60+t2.second;
        int diffSec=abs(v1-v2);
        Time diff;
        diff.hour=diffSec/3600;
        diffSec=diffSec%3600;
        diff.minute=diffSec/60;
        diffSec=diffSec%60;
        diff.second=diffSec;
        return diff;
    }
    void display()
    {
        cout<<"Hour = "<<hour<<" Minute = "<<minute<<" Second = "<<second<<endl;
    }
};
int main()
{
    Time t1,t2;
    t1.setData(5,3,8);
    t2.setData(6,2,11);
    Time t3=t1.getDiff(t1,t2);
    t1.display();
    t2.display();
    cout<<"--------------------------------------\n";
    t3.display();
    return 0;
}
