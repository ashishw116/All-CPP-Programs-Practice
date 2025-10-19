//Write a program to find the sum of two Day entities with data members Year, Months, Weeks and Days by overloading the + Operator.
#include<iostream>
#include<cmath>
using namespace std;
class Date
{
    int day;
    int week;
    int month;
    int year;
public:
    void setData(int day, int month, int week, int year)
    {
        this->day=day;
        this->week=week;
        this->month=month;
        this->year=year;
    }
    void getData()
    {
        cout<<"\n Day : "<<day<<" Week : "<<week<<" Month : "<<month<<"\n Year : "<<year<<endl;

    }
    Date operator+(Date d)
    {
        Date res;
        int days=0;
        days=day+d.day;
        days+=week*7+d.week*7;
        days+=month*30+d.month*30;
        days+=year*365+d.year*365;
        res.year=days/365;
        days%=365;
        res.month=days/30;
        days%=30;
        res.week=days/7;
        res.day=days%7;
        return res;
    }
};
int main()
{
    Date d1,d2;
    d1.setData(1,2,8,3);
    d2.setData(12,7,3,2);
    cout<<"1st Date : ";
    d1.getData();
    cout<<"\n2nd Date: ";
    d2.getData();
    Date d3=d1+d2;
    cout<<"\nAddition Date : "<<endl;
    d3.getData();
    return 0;
}
