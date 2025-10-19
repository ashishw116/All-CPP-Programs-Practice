//Write a program to find the average of two numbers, three numbers, four numbers and n numbers using function overloading.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    float average(int a,int b)
    {
        return (float)(a+b)/2;
    }
    float average(int a,int b,int c)
    {
        return (float)(a+b+c)/3;
    }
    float average(int a,int b,int c,int d)
    {
        return (float)(a+b+c+d)/4;
    }
    float average(int arr[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return (float)sum/n;
    }
};

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    Test t;
    cout << "Average of 2 numbers (10, 20): " << t.average(10, 25);
    cout << "\nAverage of 3 numbers (10, 20, 30): " << t.average(10, 20, 30);
    cout << "\nAverage of 4 numbers (10, 20, 30, 40): " << t.average(10, 20, 30, 40);
    cout << "\nAverage of array elements {10, 20, 30, 40, 50}: " << t.average(arr, n);
    return 0;
}

