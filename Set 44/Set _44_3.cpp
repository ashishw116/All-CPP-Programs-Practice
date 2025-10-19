//Write a program to find biggest and smallest of an array of object in a function of a class and return both by embedding it into an object of another class.
#include<iostream>
#include<cmath>
using namespace std;
class BigSmall
{
public:
    int big,small;
    void setBigSmall(int b,int s)
    {
        big=b;
        small=s;
    }
};
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
    BigSmall getBigSmall(DataKeeper dk[])
    {
        int big=dk[0].getData(),small=dk[0].getData();
        for(int i=1;i<5;i++)
        {
            int n=dk[i].getData();
            if(big<n)
                big=n;
            if(small>n)
                small=n;
        }
        BigSmall bs;
        bs.setBigSmall(big,small);
        return bs;
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
    BigSmall bs=dk[0].getBigSmall(dk);
    cout<<"Big : "<<bs.big<<" Small : "<<bs.small;
    return 0;
}

