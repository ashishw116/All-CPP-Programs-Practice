//Write a program to find mean and standard deviation of n numbers, using two different methods like getMean and getSD( Pass the array as argument from main function).
#include<iostream>
#include<cmath>
using namespace std;
class Mean_SD
{
public:
    float getMean(int arr[])
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
        }
        float mean=(float)sum/5;
        return mean;
    }
    float getStdDev(int arr[])
    {
        float mean=getMean(arr);
        float sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=pow((mean-arr[i]),2);
        }
        float stdDev=sqrt((sum/5));
        return stdDev;
    }

};
int main()
{
    Mean_SD m;
    int arr[]={10,20,30,40,50};
    cout<<"Mean = "<<m.getMean(arr)<<endl;
    cout<<"Standard Deviation = "<<m.getStdDev(arr);
    return 0;
}
