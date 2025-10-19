//Write a program which takes the number of days as input & convert it into years, months, weeks, & days (hint: consider 365 days for a year, 30 days for a month ).
#include<iostream>
using namespace std;
int main()
{
    int days,months,weeks,years;
    cout<<"Enter the Days :"<<endl;
    cin>>days;
    years=days/365;
    int rem=days%365;
    months=rem/30;
    rem=rem%30;
    weeks=rem/7;
    days=rem%7;
    cout<<"Years= "<<years<<"\nMonths= "<<months<<"\nWeeks= "<<weeks<<"\nDays= "<<days;
    return 0;
}
