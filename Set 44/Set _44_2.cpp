//Write a program to find the reverse of an array of object.
#include<iostream>
#include<cmath>
using namespace std;
class DataKeeper
{
    int n;
public:
    int getData()
    {
        return n;
    }
    void setData(int x)
    {
        n=x;
    }
    void getReverse(DataKeeper dk[])
    {
        for(int i=0,j=4;i<5/2;i++,j--)
        {
            DataKeeper temp=dk[i];
            dk[i]=dk[j];
            dk[j]=temp;
        }
    }
};
int main()
{
    DataKeeper dk[5];
    for(int i=0;i<5;i++)
    {
        dk[i].setData((i+1)*10);
    }
    cout<<"Array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<dk[i].getData()<<" ";
    }
    dk[0].getReverse(dk);
    cout<<"Array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<dk[i].getData()<<" ";
    }
    return 0;
}

