//Write a program to declare an array of size 5 as the data member of class and give the value to the array through user and perform various operations on the array like mean and standard deviation, sort, big and small, reverse with respective member functions. Print the results in the member function only and define the functions outside of the class.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int arr[5];
    void setArray();
    void getArray();
    void MeanSD();
    void sortArr();
    void reverseArr();
    void bigSmall();
};
void Test::setArray()
    {
        cout<<"Enter Array Elements : ";
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
void Test::getArray()
    {
        for(int i=0;i<5;i++)
        {
            cout<<this->arr[i]<<", ";
        }
    }
void Test::MeanSD()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
        }
        float mean=(float)sum/5;
        float var=0;
        for(int i=0;i<5;i++)
        {
            var+=pow((arr[i]-mean),2);
        }
        float sd=(float)sqrt(var/5);
        cout<<"\n\n Mean : "<<mean<<" Standard Deviation : "<<sd;
    }
void Test::sortArr()
    {
        for(int i=0;i<5;i++)
        {
            int j=i;
            while(j>0&&arr[j-1]>arr[j])
            {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
void Test::reverseArr()
    {
        for(int i=0,j=4;i<5/2;i++,j--)
        {
            swap(arr[i],arr[j]);
        }
    }
void Test::bigSmall()
    {
        int big=arr[0];
        int small=arr[0];
        for(int i=0;i<5;i++)
        {
            if(arr[i]>big)
            {
                big=arr[i];
            }
            if(arr[i]<small)
            {
                small=arr[i];
            }
        }
        cout<<"\n\n Big : "<<big<<" Small : "<<small;
    }
int main()
{
    Test t1;
    t1.setArray();
    cout<<"Original Array\n";
    t1.getArray();
    t1.MeanSD();
    t1.sortArr();
    cout<<"\nSorted Array\n";
    t1.getArray();
    t1.reverseArr();
    cout<<"\nReversed Array\n";
    t1.getArray();
    t1.bigSmall();
    return 0;
}

