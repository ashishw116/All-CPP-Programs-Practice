//Write a program to conc++atenate two integer arrays one after another by overloading + operator
#include<iostream>
#include<cmath>
using namespace std;
class ArrayC
{
    int arr[5];
    int result[10];
public:
    void setData(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            this->arr[i]=arr[i];
        }
    }
    void getData()
    {
        cout<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void getSum()
    {
        cout<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    ArrayC operator+(ArrayC a2)
    {
        ArrayC res;
        int p=0;
        for(int i=0;i<5;i++)
        {
            res.result[p++]=arr[i];
        }
        for(int i=0;i<5;i++)
        {
            res.result[p++]=a2.arr[i];
        }
        return res;
    }
};
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,0};
    ArrayC c1,c2;
    c1.setData(arr1);
    c2.setData(arr2);
    cout<<"Array 1st : ";
    c1.getData();
    cout<<"Array 2nd : ";
    c2.getData();
    ArrayC c3=c1+c2;
    cout<<"Merge Array"<<endl;
    c3.getSum();
    return 0;
}
