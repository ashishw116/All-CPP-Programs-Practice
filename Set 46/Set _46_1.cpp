//Write a program to find the sum of 2 numbers, 3 numbers n numbers using function overloading.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int sum(int a,int b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
    int sum(int arr[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};

int main()
{
    Test t;
    int arr[]={1,2,3,4,5};
    cout<<"Sum of 2,6 :"<<t.sum(2,6);
    cout<<"\nSum of 2,6,3 :"<<t.sum(2,6,3);
    cout<<"\nSum of 1 to 5 :"<<t.sum(arr,5);
    return 0;
}

