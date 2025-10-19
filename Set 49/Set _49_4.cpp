//Write a program to take 3 arrays of size 5( for each) belongs to 3 different classes using a friend function and find the common elements between all the arrays and print the result in the friend function only. The array data members of the three classes should be private.
#include<iostream>
#include<cmath>
#include <unordered_map>
using namespace std;
class Array1;
class Array2;
class Array3;
class Array1
{
    int arr[5];
public:
    Array1(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    friend void commonEle(Array1 a1,Array2 a2,Array3 a3);
};
class Array2
{
    int arr[5];
public:
    Array2(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    friend void commonEle(Array1 a1,Array2 a2,Array3 a3);
};
class Array3
{
    int arr[5];
public:
    Array3(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    friend void commonEle(Array1 a1,Array2 a2,Array3 a3);
};
void commonEle(Array1 a1,Array2 a2,Array3 a3)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a1.arr[i]==a2.arr[j]&&a2.arr[j]==a3.arr[k])
                    cout<<a1.arr[i]<<", ";
            }
        }
    }
}
int main()
{
    int arr1[5]={1,2,3,4,8};
    int arr2[5]={4,5,6,7,8};
    int arr3[5]={8,9,10,11,4};
    Array1 a1(arr1);
    Array2 a2(arr2);
    Array3 a3(arr3);
    cout<<"Common Element Array : "<<endl;
    commonEle(a1,a2,a3);
    return 0;
}
