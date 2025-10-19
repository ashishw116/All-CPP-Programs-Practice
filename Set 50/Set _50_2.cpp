//Write a program to find the lateral sum of two Arrays of size 5 by overloading + operator.
#include<iostream>
#include<cmath>
using namespace std;
class ArrayC
{
    int arr[5];
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
    ArrayC operator+(ArrayC a2)
    {
        ArrayC res;
        for(int i=0;i<5;i++)
        {
            res.arr[i]=arr[i]+a2.arr[i];
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
    cout<<"Addition Array"<<endl;
    c3.getData();
    return 0;
}
