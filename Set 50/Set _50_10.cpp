//Write a program to illustrate the overloading of [ ] operator.
#include<iostream>
#include<cmath>
using namespace std;
class Data
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
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<", ";
        }
        cout<<endl;
    }
    int operator[](int ind)
    {
        return arr[ind];
    }
};
int main()
{
    int arr[5]={1,2,3,4,5};
    Data d;
    d.setData(arr);
    d.getData();
    cout<<"Value at index of 3 : "<<d[3];
    return 0;
}
