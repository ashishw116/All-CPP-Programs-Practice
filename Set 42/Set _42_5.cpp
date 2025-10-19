//Write a program to calculate the mean and standard deviation of 5 data members of class. Where assign the value to the 3 data members using the objects and 2 data members using a function called getData. And Then find the mean and standard deviation using another two methods like getMean and getSD.
#include<iostream>
#include<cmath>
using namespace std;
class Mean_SD
{
public:
    int n1,n2,n3,n4,n5;
    void getData(int x,int y)
    {
        n4=x;
        n5=y;
    }
    float getMean()
    {
        float mean=(float)(n1+n2+n3+n4+n5)/5;
        return mean;
    }
    float getStdDev()
    {
        float mean=getMean();
        float stdDev=(float)sqrt(((pow((mean-n1),2)+pow((mean-n2),2)+pow((mean-n3),2)+pow((mean-n4),2)+pow((mean-n5),2))/5));
        return stdDev;
    }

};
int main()
{
    Mean_SD m;
    m.n1=20;
    m.n2=10;
    m.n3=30;
    m.getData(40,50);
    cout<<"Mean = "<<m.getMean()<<endl;
    cout<<"Standard Deviation = "<<m.getStdDev();
    return 0;
}
