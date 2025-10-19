//Write a program to find the elements in the range of standard deviation from mean using a single method in the class (Pass the array as argument from main function and print it, no need to return the array).
#include<iostream>
#include<cmath>
using namespace std;
class Mean_SD
{
public:
    void findRange(int arr[])
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
        }
        float mean=(float)sum/5;
        sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=pow((mean-arr[i]),2);
        }
        float stdDev=sqrt((sum/5));
        float minn=mean-stdDev;
        float maxn=mean+stdDev;
        cout<<"Range "<<minn<<" to "<<maxn<<endl;
        for(int i=0;i<5;i++)
        {
            if(arr[i]<=maxn&&arr[i]>=minn)
                cout<<arr[i]<<" ";
        }
    }

};
int main()
{
    Mean_SD m;
    int arr[]={10,20,30,40,50};
    m.findRange(arr);
    return 0;
}
