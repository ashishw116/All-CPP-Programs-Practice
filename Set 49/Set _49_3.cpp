//WWrite a program to merge 3 arrays of size 3,4 and 5 respectively one after another belongs to 3 different classes using a friend function and also sort the merged array in ascending order and print it in friend function only. The array data members of the three classes should be private.
#include<iostream>
#include<cmath>
using namespace std;
class Array1;
class Array2;
class Array3;
class Array1
{
    int arr[3];
public:
    Array1(int arr[])
    {
        for(int i=0;i<3;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    friend void mergeArr(Array1 a1,Array2 a2,Array3 a3);
};
class Array2
{
    int arr[4];
public:
    Array2(int arr[])
    {
        for(int i=0;i<4;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    friend void mergeArr(Array1 a1,Array2 a2,Array3 a3);
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
    friend void mergeArr(Array1 a1,Array2 a2,Array3 a3);
};
void mergeArr(Array1 a1,Array2 a2,Array3 a3)
{
    int result[12];
    int p=0;
    for(int i=0;i<3;i++)
    {
        result[p]=a1.arr[i];
        int j=p;
        while(j>0&&result[j-1]>result[j])
        {
            int t=result[j];
            result[j]=result[j-1];
            result[j-1]=t;
            j--;
        }
        p++;
    }
    for(int i=0;i<4;i++)
    {
        result[p]=a2.arr[i];
        int j=p;
        while(j>0&&result[j-1]>result[j])
        {
            int t=result[j];
            result[j]=result[j-1];
            result[j-1]=t;
            j--;
        }
        p++;
    }
    for(int i=0;i<5;i++)
    {
        result[p]=a3.arr[i];
        int j=p;
        while(j>0&&result[j-1]>result[j])
        {
            int t=result[j];
            result[j]=result[j-1];
            result[j-1]=t;
            j--;
        }
        p++;
    }
    for(int i=0;i<12;i++)
    {
        cout<<result[i]<<", ";
    }
}
int main()
{
    int arr1[3]={1,2,3};
    int arr2[4]={4,5,6,7};
    int arr3[5]={8,9,10,11,12};
    Array1 a1(arr1);
    Array2 a2(arr2);
    Array3 a3(arr3);
    cout<<"Merge Array : "<<endl;
    mergeArr(a1,a2,a3);
    return 0;
}
