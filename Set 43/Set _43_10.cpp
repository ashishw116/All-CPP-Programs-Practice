//WAP to find the mean and standard deviation of an array in a function of a class return both by embedding into an object of another class.
#include<iostream>
#include<cmath>
using namespace std;
class DataKeeper
{
public:
    float stdDev,mean;
    void setData(float m,float s)
    {
        mean=m;
        stdDev=s;
    }
};
class Mean_SD
{
public:
    DataKeeper getMean_SD(int arr[])
    {
        DataKeeper dk;
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
        }
        dk.mean=(float)sum/5;
        sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=(pow((arr[i]-dk.mean),2));
        }
        dk.stdDev=(float)sqrt(sum/5);
        return dk;
    }
};
int main()
{
    int arr[]={10,30,5,15,60};
    Mean_SD ms;
    DataKeeper dk=ms.getMean_SD(arr);
    cout<<"Mean : "<<dk.mean<<" Standard Deviation : "<<dk.stdDev;
    return 0;
}

