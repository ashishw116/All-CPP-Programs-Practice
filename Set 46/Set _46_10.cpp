/*WAP to create a class which contains an integer array as data member and create a parameterized constructor to assign the values for the data members. Pass the object of this class to a method of another class to calculate mean and standard deviation and embed this mean and standard deviation into an object of another class called Datakeeper and return the object to the main and print mean and standard deviation.*/
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int arr[5];
    Test(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    void displayArray()
    {
        for(int i=0;i<5;i++)
        {
            cout<<this->arr[i]<<", ";
        }
    }
};
class Datakepper
{
public:
    float mean;
    float sd;
    Datakepper()
    {

    }
    Datakepper(float mean,float sd)
    {
        this->mean=mean;
        this->sd=sd;
    }
};
class MeanSD
{
    public:
    Datakepper getMeanSd(Test t)
    {
        Datakepper dk;
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=t.arr[i];
        }
        dk.mean=(float)sum/5;
        sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=pow((t.arr[i]-dk.mean),2);
        }
        dk.sd=(float)(sqrt((float)(sum/5)));
        return dk;
    }
};
int main()
{
    int arr[5]={10,20,30,40,50};
    Test t1(arr);
    t1.displayArray();
    MeanSD msd;
    Datakepper dk=msd.getMeanSd(t1);
    cout<<"\nMean : "<<dk.mean<<" Standard Deviation :"<<dk.sd;
    return 0;
}

