//WAP to find sum of two days entities which contains entities like years, months, weeks and days.
#include<iostream>
#include<cmath>
using namespace std;
class Days
{
public:
    int day,week,month,year;
    void setData(int d,int w,int m,int y)
    {
        day=d;
        week=w;
        month=m;
        year=y;

    }
    Days getSum(Days d1,Days d2)
    {
        int v1=d1.year*365+d1.month*30+d1.week*7+d1.day;
        int v2=d2.year*365+d2.month*30+d2.week*7+d2.day;
        int sumDays=v1+v2;
        Days sum;
        sum.year=sumDays/365;
        sumDays=sumDays%365;
        sum.month=sumDays/30;
        sumDays=sumDays%30;
        sum.week=sumDays/7;
        sumDays=sumDays%7;
        sum.day=sumDays;
        return sum;
    }
    void display()
    {
        cout<<"Year = "<<year<<" Month = "<<month<<" Week = "<<week<<" Day = "<<day<<endl;
    }
};
int main()
{
    Days d1,d2;
    d1.setData(5,3,8,2);
    d2.setData(6,2,11,3);
    Days d3=d1.getSum(d1,d2);
    d1.display();
    d2.display();
    cout<<"--------------------------------------\n";
    d3.display();
    return 0;
}
