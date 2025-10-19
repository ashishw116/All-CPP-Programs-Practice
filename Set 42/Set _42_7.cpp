//Write a program to sort the array in ascending and descending order using two different methods in the class (Pass the array as argument from main function and print it, no need to return the array).
#include<iostream>
#include<cmath>
using namespace std;
class Sort
{
public:
    void ascending(int arr[]);
    void descending(int arr[]);
};
void Sort::ascending(int arr[])
    {
        for(int i=0;i<5-1;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    void Sort::descending(int arr[])
    {
        for(int i=0;i<5-1;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
int main()
{
    Sort s;
    int arr[]={110,20,10,60,50};
    cout<<"Array : "<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    s.ascending(arr);
    cout<<"Ascending Array : "<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    s.descending(arr);
    cout<<"Descending Array : "<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
