//Write a program to find the sum of distance entities with the data members like Meters, feets, Inches, Centimeter and millimeters.
#include<iostream>
#include<cmath>
using namespace std;
class Distance
{
    int meters;
    int feets;
    int inches;
    int cm;
    int mm;
public:
    void setData(int meters,int feets,int inches,int cm,int mm)
    {
        this->meters=meters;
        this->feets=feets;
        this->inches=inches;
        this->cm=cm;
        this->mm=mm;
    }
    void getData()
    {
        cout<<"\n Meters : "<<meters<<" Feets : "<<feets<<" Inches : "<<inches<<" cm :"<<cm<<" mm :"<<mm<<endl;
    }
    Distance operator+(Distance m)
    {
        Distance res;
        res.mm=mm+m.mm;
        res.cm=cm+m.cm;
        res.inches=inches+m.inches;
        res.feets=feets+m.feets;
        res.meters=meters+m.meters;
        if(res.mm>=10)
        {
            res.cm+=res.mm/10;
            res.mm%=10;
        }
        if (res.cm >= 100) {
            res.meters += res.cm / 100;
            res.cm %= 100;
        }
        if (res.inches >= 12) {
            res.feets += res.inches / 12;
            res.inches %= 12;
        }
        if (res.feets >= 3) {
            res.meters += res.feets / 3;
            res.feets %= 3;
        }
        return res;
    }
};
int main()
{
    Distance t1,t2;
    t1.setData(21,3,54,33,234);
    t2.setData(21,3,54,33,234);
    cout<<"1st Distance : ";
    t1.getData();
    cout<<"\n2nd Distance: ";
    t2.getData();
    Distance t3=t1+t2;
    cout<<"\nAddition Distance : "<<endl;
    t3.getData();
    return 0;
}
